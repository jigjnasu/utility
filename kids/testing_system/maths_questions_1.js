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
    options: ["40", "50", "60", "70", "80"],
    answer: 1,
    subject: "Mathsematics"
  },
  {
    id: 2,
    question: "Adwita has a party at 1:00 pm. She spent 55 minutes in prepration of it and another 37 minutes. Cake cooled for another 26 minutes.\n\nWhat is the latest time Adwita should start preparing the cake?",
    options: ["10:52 am", "11:22 am", "11:02 am", "11:52 am", "11:00 am"],
    answer: 2,
    subject: "Mathematics"
  },
  {
    id: 3,
    question: "The length of a rectangle is three times its width. If the perimeter of the rectangle is 48 cm.\n\nwhat is the area of the rectangle?",
    options: ["18", "16", "20", "22", "24"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 4,
    question: "A car goes at a speed of 40 km/h.\n\nHow far will it travel in 6 minutes?",
    options: ["6 km", "3 km", "5 km", "4 km", "2 km"],
    answer: 3,
    subject: "Mathematics"
  },
  {
    id: 5,
    question: "A square has an area of 49 cm<sup>2</sup>. The rectangle has a width that is equal to the side length of this square, and its area is 84 cm<sup>2.</sup>.\n\nWhat is the length of the rectangle?",
    options: ["11", "12", "13", "14", "15"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 6,
    question: "Seven years ago, Om’s age was exactly one third of the age he will be in 9 years’ time.\n\nHow old is Om right now?",
    options: ["12", "15", "18", "21", "24"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 7,
    question: "Raja spent a total of $24.50 on 5 packets of gum and 8 packets of lollies. Each packet of gum costs $2.50, how much was one packet of lollies?",
    options: ["$1.75", "$2.00", "$1.75", "$1.50", "$2.25"],
    answer: 3,
    subject: "Mathematics"
  },
  {
    id: 8,
    question: "A school cricket team played a total of 120 games in one season. They lost 25% of their games and won 60% of their games. How many games did they draw?",
    options: ["12", "15", "18", "21", "24"],
    answer: 2,
    subject: "Mathematics"
  },
  {
    id: 9,
    question: "Anna begins her walk facing directly North. She then turns 90 degrees clockwise and walks 10 kms in that new direction. After that, she makes another turn of 135 degrees anticlockwise before walking an additional 20 kms.\n\nIn which direction is Anna now facing?",
    options: ["East", "Southeast", "Northwest", "West", "Southwest"],
    answer: 2,
    subject: "Mathematics"
  },
  {
    id: 10,
    question: "A box containing 10 rubber balls weighs a total of 360 grams. Another identical box, but containing only 5 rubber balls, weighs 210 grams. Assuming both boxes are exactly the same and that all rubber balls are identical in weight, what is the weight of an empty box on its own?",
    options: ["30 grams", "40 grams", "45 grams", "60 grams", "65 grams"],
    answer: 3,
    subject: "Mathematics"
  },
  {
    id: 11,
    question: "Bart is training for an upcoming weightlifting competition. He records the total weight he lifts on each weekday. His training log shows the following total weights lifted each day:\n<img src='images/maths_questions_1/q_11.png' class='q-img'>\nWhat is the average weight lifted per day over these five days?",
    options: ["55 kg", "58 kg", "60 kg", "63 kg", "66 kg"],
    answer: 3,
    subject: "Mathematics"
  },
  {
    id: 12,
    question: "Tim decides to put tiles around his pool. The diagram below shows the dimensions of the total area to be tiled (shaded in grey) and the pool area (white).\n<img src='images/maths_questions_1/q_12.png' class='q-img'>\nWhat is the area of the shaded region that will be tiled?",
    options: ["42 m<sup>2</sup>", "55 m<sup>2</sup>", "63 m<sup>2</sup>", "69 m<sup>2</sup>", "74 m<sup>2</sup>"],
    answer: 2,
    subject: "Mathematics"
  },
  {
    id: 13,
    question: "Sarah has twice as much money as Jane and Mandy has $80 more than Jane\n. If their combined total is $800, how much money does Mandy have?",
    options: ["$200", "$220", "$260", "$320", "$360"],
    answer: 2,
    subject: "Mathematics"
  },
  {
    id: 14,
    question: "I ordered five boxes of pizza for $47.50, how much should I pay for 7 boxes of pizza?",
    options: ["$66.50", "$70.00", "$72.50", "$75.00", "$77.50"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 15,
    question: "Ethan had some money. He gave $10 to Jack, then gave three quarters of what was left to Lily. Lily gave half of her money to Noah, who received $9.\n\nWhat was Eathan’s original amount of money?",
    options: ["$34", "$35", "$36", "$37", "$38"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 16,
    question: "A paint mixture contains red, yellow and white paint in the ratio 4:3:8. If the total volume is 1200 ml.\n\nWhat is the difference in volume between the white and yellow paint?",
    options: [350, 400, 450, 500, 550],
    answer: 1,
    subject: "Mathematics"
  },
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
