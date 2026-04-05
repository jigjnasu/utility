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
    question: "Karen has seedlings line the one shown.\n<img src='images/maths/3/q_3.png' class='q-img'>\nShe wants to plant the seedlings in 6 rows with the same number of seedlings in each row.\nKaren will have 2 seedlings left over.\n\nHow many seedlings could Karen have?",
    options: ["16", "17", "18", "19", "20"],
    answer: 4,
    subject: "Mathematics"
  },
  {
    id: 4,
    question: "Determine the area of the shaded triangle drawn on the Cartesian plane below.<img src='images/maths/3/q_4.png' style='height: auto; width: 75%;' class='q-img'>",
    options: ["27 cm²", "28 cm²", "29 cm²", "30 cm²", "31 cm²"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 5,
    question: "A speedboat moves at a constant speed of 40 kilometres per hour.\n\nIf the speedboat continues at this speed for 210 minutes, how far will it travel during this period?",
    options: ["120 km", "130 km", "140 km", "150 km", "160 km"],
    answer: 2,
    subject: "Mathematics"
  },
  {
    id: 6,
    question: "Which number should logically replace the empty box?\n\n<img src='images/maths/3/q_6.png' class='q-img'>",
    options: ["18", "24", "28", "26", "20"],
    answer: 4,
    subject: "Mathematics"
  },
  {
    id: 7,
    question: "Mia bought one kg bag of apples. There were seven apples of similar size.\n\nAbout how much does one apple weigh?",
    options: ["1400 grams", "140 grams", "14 grams", "4 grams", "0.14 grams"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 8,
    question: "A school has two tweleve seater buses and three eight seater buses. They want to take the 96 children out on an excursion. Assuming each bus travels at the same speed and they operate together.\n\nWhat's the minimum number of trips needed by bus?",
    options: ["2 trips", "3 trips", "4 trips", "9 trips", "10 trips"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 9,
    question: "The average of three numbers is 9. If two of the numbers are 5 and 10.\n\nWhat is the third number?",
    options: ["10", "12", "9", "15", "7"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 10,
    question: "Mia has $7.20 and buys as many $0.60 pencils as possible.\n\nHow much money remains after Mia buys the pencils?",
    options: ["0.00", "0.20", "0.40", "0.60", "0.80"],
    answer: 0,
    subject: "Mathematics"
  }, 
  {
    id: 11,
    question: "A football training session lasts 160 minutes. If it begins at 3:45 pm, when does it finish?",
    options: ["5:45 pm", "6:15 pm", "6:25 pm", "7:15 pm", "7:45 pm"],
    answer: 2,
    subject: "Mathematics"
  },   
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
