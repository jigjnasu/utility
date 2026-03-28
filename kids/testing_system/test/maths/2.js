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
    question: "A rectangle has a length that 3 times its width. If the area is 75 cm<sup>2</sup>.\nWhat is it's perimeter?",
    options: ["30 cm", "35 cm", "38 cm", "40 cm", "45 cm"],
    answer: 3,
    subject: "Mathsematics"
  },
  {
    id: 2,
    question: "A bus travels for 10 minutes at 72 km/h and then 50 mintes at 54 km/h.\nWhat is the total distance?",
    options: ["57 km", "51 km", "55 km", "62 km", "44 km"],
    answer: 0,
    subject: "Mathsematics"
  },
  {
    id: 3,
    question: "A chef uses 1/5 of a 5 kg sugar bag, 3/4 of an 8 kg flour bag, and 3 kg of butter to make 200 items.\nWhat is the weight of one item?",
    options: ["30 g", "35 g", "40 g", "45 g", "50 g"],
    answer: 4,
    subject: "Mathsematics"
  },
  {
    id: 3,
    question: "A chef uses 1/5 of a 5 kg sugar bag, 3/4 of an 8 kg flour bag, and 3 kg of butter to make 200 items.\nWhat is the weight of one item?",
    options: ["30 g", "35 g", "40 g", "45 g", "50 g"],
    answer: 4,
    subject: "Mathsematics"
  },
  {
    id: 4,
    question: "A bus left Melbourne at 11:15 pm, and arrived in Sydney at 5:50 am.\nHow long did the trip take?",
    options: ["4:00 hours", "4:35 hours", "5:00 hours", "6:35 hours", "5:35 hours"],
    answer: 3,
    subject: "Mathsematics"
  },
  {
    id: 5,
    question: "16 suitcases occupy the same space as 4 trunks.\nHow many trunks could fit in the space taken by 48 suitcases?",
    options: ["10", "12", "14", "16", "20"],
    answer: 1,
    subject: "Mathsematics"
  },
  {
    id: 6,
    question: "James had some money. He gave one-fifth of it to Ella, then gave half of what remained to Max. Max gave half of his share to Leo, who received $6.\nWhat was James's initial amount?",
    options: ["$30", "$32", "$34", "$36", "$38"],
    answer: 0,
    subject: "Mathsematics"
  },

  {
    id: 27,
    question: "A gardner grew tomatoes. 1/3 of the crop was unusable. The remaining tomatoes were shared with a neighbour in the ratio 4:7. If the neighbour received 42 more tomatoes than the gardner.\nHow many tomatoes did the gardner harvest originally?",
    options: ["140", "150", "154", "157", "164"],
    answer: 4,
    subject: "Mathsematics"
  },
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
