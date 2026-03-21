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
    question: "Adwita has a gift box with 5 kg chocolates and every chocolate has 5 g weight. She want to make a bag of 20 chocolates.\n\nHow many total bag she can make?",
    options: ["40", "50", "60", "70"],
    answer: 1,
    subject: "Mathsematics"
  },
  {
    id: 2,
    question: "Adwita has a party at 1:00 pm. She spent 55 minutes in prepration of it and another 37 minutes. Cake cooled for another 26 minutes.\n\nWhat is the latest time Adwita should start preparing the cake?",
    options: ["10:52 am", "11:22 am", "11:02 am", "11:52 am"],
    answer: 2,
    subject: "Mathematics"
  },
  {
    id: 3,
    question: "The length of a rectangle is three times its width. If the perimeter of the rectangle is 48 cm.\n\nwhat is the area of the rectangle?",
    options: ["18", "16", "20", "22"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 4,
    question: "A car goes at a speed of 40 km/h.\n\nHow far will it travel in 6 minutes?",
    options: ["6 km", "3 km", "5 km", "4 km"],
    answer: 3,
    subject: "Mathematics"
  },
  {
    id: 5,
    question: "A square has an area of 49 cm<sup>2</sup>. The rectangle has a width that is equal to the side length of this square, and its area is 84 cm<sub>2.</sub>.\n\nWhat is the length of the rectangle?",
    options: [],
    answer: 3,
    subject: "Mathematics"
  },  
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
