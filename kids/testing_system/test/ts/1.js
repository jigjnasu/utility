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
  subject: "Thinking Skills",
  timeLimit: 30,       // in minutes
  passMark: 80,        // percentage to pass
};

const QUESTIONS = [
  {
    id: 1,
    question: "An engineer says: “We choose strong materials for construction to build safe and sturdy buildings.”\nWhich of these statements, if true, best supports the engineer’s claim?",
    options: ["Engineers must follow strict rules when building bridges.", 
              "Engineers often collaborate with architects to design strong buildings.",
              "Buildings made of strong material, like steel, can withstand natural disasters.",
              "Engineers use different materials to make buildings taller."],
    answer: 2,
    subject: "Thinking Skills"
  },
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
