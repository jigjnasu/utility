/**
 * QUIZ ENGINE MODULE
 * ============================================================
 * Core logic for the quiz system. Handles state management,
 * timer, scoring, navigation, and per-question time tracking.
 * ============================================================
 */

const QuizEngine = (() => {

  // ── Internal State ──────────────────────────────────────
  let state = {
    questions: [],
    config: {},
    currentIndex: 0,
    answers: {},          // { questionId: optionIndex }
    flagged: {},          // { questionId: true/false }
    questionTimes: {},    // { questionId: totalSecondsSpent }
    questionStart: null,  // timestamp when current question was entered
    timerInterval: null,
    secondsRemaining: 0,
    started: false,
    submitted: false,
    onTick: null,
    onTimeout: null,
  };

  // ── Init ────────────────────────────────────────────────
  function init(questions, config) {
    state.questions = questions;
    state.config = config;
    state.currentIndex = 0;
    state.answers = {};
    state.flagged = {};
    state.questionTimes = {};
    state.questionStart = null;
    state.submitted = false;
    state.started = false;
    state.secondsRemaining = (config.timeLimit || 20) * 60;
    questions.forEach(q => { state.questionTimes[q.id] = 0; });
  }

  // ── Per-Question Time Tracking ───────────────────────────
  function recordQuestionEntry() {
    state.questionStart = Date.now();
  }

  function recordQuestionExit() {
    if (state.questionStart !== null) {
      const q = state.questions[state.currentIndex];
      if (q) {
        const elapsed = Math.round((Date.now() - state.questionStart) / 1000);
        state.questionTimes[q.id] = (state.questionTimes[q.id] || 0) + elapsed;
      }
      state.questionStart = null;
    }
  }

  function getTimeForQuestion(questionId) {
    return state.questionTimes[questionId] || 0;
  }

  function formatQuestionTime(seconds) {
    if (seconds < 60) return `${seconds}s`;
    const m = Math.floor(seconds / 60);
    const s = seconds % 60;
    return s > 0 ? `${m}m ${s}s` : `${m}m`;
  }

  // ── Timer ───────────────────────────────────────────────
  function startTimer(onTick, onTimeout) {
    state.onTick = onTick;
    state.onTimeout = onTimeout;
    state.started = true;
    recordQuestionEntry();
    clearInterval(state.timerInterval);
    state.timerInterval = setInterval(() => {
      state.secondsRemaining--;
      if (typeof state.onTick === 'function') state.onTick(state.secondsRemaining);
      if (state.secondsRemaining <= 0) {
        clearInterval(state.timerInterval);
        if (typeof state.onTimeout === 'function') state.onTimeout();
      }
    }, 1000);
  }

  function stopTimer() {
    recordQuestionExit();
    clearInterval(state.timerInterval);
  }

  function formatTime(seconds) {
    const m = Math.floor(seconds / 60).toString().padStart(2, '0');
    const s = (seconds % 60).toString().padStart(2, '0');
    return `${m}:${s}`;
  }

  function getSecondsRemaining() { return state.secondsRemaining; }

  // ── Navigation ──────────────────────────────────────────
  function getCurrentIndex() { return state.currentIndex; }
  function getCurrentQuestion() { return state.questions[state.currentIndex]; }
  function getTotalCount() { return state.questions.length; }

  function goTo(index) {
    if (index >= 0 && index < state.questions.length) {
      recordQuestionExit();
      state.currentIndex = index;
      recordQuestionEntry();
      return true;
    }
    return false;
  }

  function next() { return goTo(state.currentIndex + 1); }
  function prev() { return goTo(state.currentIndex - 1); }

  // ── Answer & Flag ────────────────────────────────────────
  function setAnswer(questionId, optionIndex) {
    state.answers[questionId] = optionIndex;
  }

  function getAnswer(questionId) {
    return state.answers.hasOwnProperty(questionId) ? state.answers[questionId] : null;
  }

  function toggleFlag(questionId) {
    state.flagged[questionId] = !state.flagged[questionId];
    return state.flagged[questionId];
  }

  function isFlagged(questionId) { return !!state.flagged[questionId]; }

  // ── Status helpers ───────────────────────────────────────
  function getQuestionStatus(questionId) {
    if (state.flagged[questionId]) return 'flagged';
    if (state.answers.hasOwnProperty(questionId)) return 'answered';
    return 'unanswered';
  }

  function getSummary() {
    let answered = 0, flagged = 0, unanswered = 0;
    state.questions.forEach(q => {
      const s = getQuestionStatus(q.id);
      if (s === 'answered') answered++;
      else if (s === 'flagged') flagged++;
      else unanswered++;
    });
    return { answered, flagged, unanswered, total: state.questions.length };
  }

  // ── Scoring & Results ────────────────────────────────────
  function getResults() {
    let correct = 0;
    const detail = state.questions.map(q => {
      const userAnswer = state.answers.hasOwnProperty(q.id) ? state.answers[q.id] : null;
      const isCorrect = userAnswer === q.answer;
      if (isCorrect) correct++;
      return {
        id: q.id,
        question: q.question,
        options: q.options,
        correctAnswer: q.answer,
        userAnswer,
        isCorrect,
        subject: q.subject || '',
        timeSpent: state.questionTimes[q.id] || 0,
        timeFormatted: formatQuestionTime(state.questionTimes[q.id] || 0),
      };
    });
    const total = state.questions.length;
    const score = Math.round((correct / total) * 100);
    const passed = score >= (state.config.passMark || 60);
    const totalTime = Object.values(state.questionTimes).reduce((a, b) => a + b, 0);
    return { correct, total, score, passed, passMark: state.config.passMark || 60, detail, totalTime, formatQuestionTime };
  }

  function submit() {
    stopTimer();
    state.submitted = true;
    return getResults();
  }

  function isSubmitted() { return state.submitted; }

  // ── Public API ───────────────────────────────────────────
  return {
    init, startTimer, stopTimer, formatTime, getSecondsRemaining,
    getCurrentIndex, getCurrentQuestion, getTotalCount,
    goTo, next, prev,
    setAnswer, getAnswer,
    toggleFlag, isFlagged,
    getQuestionStatus, getSummary,
    submit, getResults, isSubmitted,
    getTimeForQuestion, formatQuestionTime,
    recordQuestionEntry, recordQuestionExit,
    getState: () => state,
  };

})();

if (typeof module !== 'undefined') {
  module.exports = { QuizEngine };
}
