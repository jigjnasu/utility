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
    question: "A pole stands 1.5 meters above the ground. If &frac38; of the pole is underground.\n\n how long is the entire pole?",
    options: ["3.6 m", "2.4 m", "4.2 m", "2.0 m", "1.8 m"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 2,
    question: "Puja exercises from 6:45 am to 7:10 am every day of the week.\n\nFor how long does Puja exercise each week?",
    options: ["2 hours 55 minutes", "2 hours 15 minutes", "1 hours 55 minutes", "1 hours 45 minutes", "1 hours 25 minutes"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 3,
    question: "Karen has seedlings line the one shown.\n<img src='images/maths/3/q_3.png' style=height: auto; width: 20vw;' class='q-img'>\nShe wants to plant the seedlings in 6 rows with the same number of seedlings in each row.\nKaren will have 2 seedlings left over.\n\nHow many seedlings could Karen have?",
    options: ["16", "17", "18", "19", "20"],
    answer: 4,
    subject: "Mathematics"
  },
  {
    id: 4,
    question: "Katara is the oldest child in her family. She has two younger brothers who are twins. At this moment, the sum of all their ages is 24 years, and Katara is exactly twice as old as each of her brothers.\n\nWhat will the total of all their ages be in 5 years’ time?",
    options: ["27", "30", "33", "36", "39"],
    answer: 4,
    subject: "Mathematics"
  },
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
