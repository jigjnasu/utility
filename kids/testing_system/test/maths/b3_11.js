/**
 * QUESTIONS & ANSWERS MODULE
 * ============================================================
 * Edit this file to add/remove/modify questions and answers.
 * Each question object must follow this structure:
 *
 *  {
 *    id: <unique number>,
 *    question: "<question text>",
 *    options: ["Option A", "Option B", "Option C", "Option D"],
 *    answer: <index of correct option (0-based)>,
 *    subject: "<optional subject/category label>"
 *  }
 * ============================================================
 */

const QUIZ_CONFIG = {
  title: "Opportunity Class Assessment",
  subject: "Mathematical Reasoning",
  timeLimit: 40,       // in minutes
  passMark: 80,        // percentage to pass
};

const QUESTIONS = [
  {
    id: 1,
    question: "What is the value of Y?\n12 x Y = 3",
    options: ["&frac14", "&frac16;", "4", "36", "&frac18;"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 2,
    question: "Which of these sapes has only one right angle?\n<img src='images/maths/b3_11/q_1.png' class='q-img'>",
    options: ["", "", "", "", ""],
    answer: 2,
    subject: "Mathematics"
  },
  {
    id: 3,
    question: "A pole stands 1.5 metres above the ground. If &frac38; of the pole is underground, how long is the entire pole?",
    options: ["3.6 m", "2.4 m", "4.2 m", "2.0 m", "1.8 m"],
    answer: 1,
    subject: "Mathematics"
  },  
  {
    id: 4,
    question: "Lin exercises from 6:45 am to 7:10 am every day of the week.\n For how long does Lin exercise each week?",
    options: ["2 hours 55 minutes", "2 hours 15 minutes", "1 hours 55 minutes", "1 hours 45 minutes", "1 hours 25 minutes"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 5,
    question: "Which is written largest to smallest?",
    options: ["&frac37, &frac47;, &frac57; &frac67;", "&frac12, &frac24;, &frac36; &frac710;", "&frac23, &frac44;, &frac77; &frac126;"],
    answer: 0,
    subject: "Mathematics"
  },  
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
