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
    id: 4,
    question: "A chef uses 1/5 of a 5 kg sugar bag, 3/4 of an 8 kg flour bag, and 3 kg of butter to make 200 items.\nWhat is the weight of one item?",
    options: ["30 g", "35 g", "40 g", "45 g", "50 g"],
    answer: 4,
    subject: "Mathsematics"
  },
  {
    id: 5,
    question: "A bus left Melbourne at 11:15 pm, and arrived in Sydney at 5:50 am.\nHow long did the trip take?",
    options: ["4:00 hours", "4:35 hours", "5:00 hours", "6:35 hours", "5:35 hours"],
    answer: 3,
    subject: "Mathsematics"
  },
  {
    id: 6,
    question: "16 suitcases occupy the same space as 4 trunks.\nHow many trunks could fit in the space taken by 48 suitcases?",
    options: ["10", "12", "14", "16", "20"],
    answer: 1,
    subject: "Mathsematics"
  },
  {
    id: 7,
    question: "James had some money. He gave one-fifth of it to Ella, then gave half of what remained to Max. Max gave half of his share to Leo, who received $6.\nWhat was James's initial amount?",
    options: ["$30", "$32", "$34", "$36", "$38"],
    answer: 0,
    subject: "Mathsematics"
  },
  {
    id: 8,
    question: "Noah buys sushi for $36, soup for $12, and green tea for $12. The restaurant offers a 25% discount.\nIf Noah pays $60, how much change does he get?",
    options: ["$11", "$12", "$13", "$14", "$15"],
    answer: 4,
    subject: "Mathsematics"
  },
  {
    id: 9,
    question: "What is the area of a circle whose radius is 7 cm?",
    options: ["124 cm<sup>2</sup>", "134 cm<sup>2</sup>", "144 cm<sup>2</sup>", "154 cm<sup>2</sup>", "164 cm<sup>2</sup>"],
    answer: 3,
    subject: "Mathsematics"
  },
  {
    id: 10,
    question: "Chloe is saving up for a trench coat from Paris which costs $700.\nIf she has saved 80% of the required amount.\nHow much more must she save?",
    options: ["$100", "$560", "$154", "$140", "$250"],
    answer: 3,
    subject: "Mathsematics"
  },
  {
    id: 11,
    question: "A pole stands 3.6m high above the ground.\nIf a quarter of the pole is underground, what is the total length of the pole?",
    options: ["3.8m", "4.2m", "4.8m", "5.0m", "5.2m"],
    answer: 2,
    subject: "Mathsematics"
  },
  {
    id: 12,
    question: "Anderson had 125 chocolates.\nIf he eats 10 more chocolates a day than the previous day, and finishes all the chocolates in 5 days.\nHow many did he eat on the third day?",
    options: ["25", "30", "35", "40", "45"],
    answer: 0,
    subject: "Mathsematics"
  },
  {
    id: 13,
    question: "Dennis bought a deck of 60 cards for $24.\nHe then sold them at six for $3.50.\nHow much profit did he make?",
    options: ["$9.00", "$9.50", "$10.00", "$10.50", "$11.00"],
    answer: 4,
    subject: "Mathsematics"
  },
  {
    id: 14,
    question: "Ashlee sleeps from 10 pm until 6 am every night of the week.\nHow many minutes does Ashlee sleep in a week?",
    options: ["56", "240", "480", "1680", "3360"],
    answer: 4,
    subject: "Mathsematics"
  },
  {
    id: 15,
    question: "Between 11:45 am and 12:00 pm, how many degrees will the minute hand move?",
    options: ["60&deg;", "90&deg;", "85&deg;", "120&deg;", "180&deg;"],
    answer: 1,
    subject: "Mathsematics"
  },
  {
    id: 16,
    question: "According to the bar graph shown below, the graph displays the number of people who chose each movie genre as their favourite.\n<img src='images/maths/2/q_16.png' class='q-img'>\nWhat percentage of people selected either Comedy or Sci-Fi as their favourite movie genre?",
    options: ["35%", "40%", "45%", "50%", "55%"],
    answer: 1,
    subject: "Mathsematics"
  },
  {
    id: 17,
    question: "A grade of 100 students was surveyed on their favourite colour out of the three options. They were only allowed to pick from red, blue and green.Boys ard girls are surveyed for the data given below.\n<img src='images/maths/2/q_17.png' class='q-img'>\nOut of 100 students surveyed, how many boys like the colour Green?",
    options: ["8", "9", "11", "13", "15"],
    answer: 1,
    subject: "Mathsematics"
  },  
  {
    id: 20,
    question: "Mia and Leo are playing a game to practise balancing weights. They find that the scale stays balanced when they match the right number of strawberries to the number of pizza slices.\n\n",
    options: [""],
    answer: 1,
    subject: "Mathsematics"
  },
  {
    id: 27,
    question: "A gardner grew tomatoes. 1/3 of the crop was unusable. The remaining tomatoes were shared with a neighbour in the ratio 4:7. If the neighbour received 42 more tomatoes than the gardner.\nHow many tomatoes did the gardner harvest originally?",
    options: ["140", "150", "154", "157", "164"],
    answer: 4,
    subject: "Mathsematics"
  },
  {
    id: 34,
    question: "The average test score for a class of 9 students is 70 out of 100.\nA new student joins the class.\nIf the teacher wanted the class average to be 72, what score must the new student achieve?",
    options: ["94", "92", "90", "84", "82"],
    answer: 2,
    subject: "Mathsematics"
  },  
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
