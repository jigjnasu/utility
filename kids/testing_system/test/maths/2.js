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
    question: "Calculate the value of X.\n4 X 7 - &2/3; X 9 = X",
    options: ["18", "22", "30", "2/3", "4/5"],
    answer: 1,
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
    id: 18,
    question: "The diagram shows three views of the same cube. The cube also has a blank face.\n<img src='images/maths/2/q_18.png' class='q-img'>\nWhat is opposite of <img src='images/maths/2/a_18_e.png' class='q-img'>\n",
    options: ["Blank face", "<img src='images/maths/2/a_18_b.png' class='q-img'>", "<img src='images/maths/2/a_18_c.png' class='q-img'>", "<img src='images/maths/2/a_18_d.png' class='q-img'>", "<img src='images/maths/2/a_18_e.png' class='q-img'>"],
    answer: 2,
    subject: "Mathsematics"
  },  
  {
    id: 19,
    question: "Shown below are the dimentions of a container.\n<img src='images/maths/2/q_19.png' class='q-img'>\nIf the volume of the container is 792 cm<sup>3</sup>, what is the height of the container (y)?\n",
    options: ["7", "8", "9", "10", "11"],
    answer: 1,
    subject: "Mathsematics"
  },
  {
    id: 20,
    question: "Mia and Leo are playing a game to practise balancing weights. They find that the scale stays balanced when they match the right number of strawberries to the number of pizza slices.\n<img src='images/maths/2/q_20.png' class='q-img'>\nIf they want to balance 12 pizza slices on one side, how many strawberries will they need on the other side to keep the scale balanced?",
    options: ["15", "12", "10", "8", "7"],
    answer: 3,
    subject: "Mathsematics"
  },
  {
    id: 21,
    question: "1&frac12; bottles of soda are requried to fill one jug.\nFor his birthday party, Jim needs 12 jugs filled.\nHow many bottles of soda must he buy for his party?",
    options: ["18", "17", "16", "15", "14"],
    answer: 0,
    subject: "Mathsematics"
  },
  {
    id: 22,
    question: "Which of these statements is/are correct?\nX&nbsp;&nbsp;&nbsp;&nbsp;&frac25; + &frac25; is less than &frac35;\nY&nbsp;&nbsp;&nbsp;&nbsp;1 - &frac13; is more than &frac13;\nY&nbsp;&nbsp;&nbsp;&nbsp;<sup>2</sup>&frasl;<sub>4</sub> x &frac12; is more than &frac18;",
    options: ["statement X only", "statement Y only", "statement Z only", "statement X and Y only", "statement Y and Z only"],
    answer: 4,
    subject: "Mathsematics"
  },
  {
    id: 23,
    question: "A square garden has an area of 36 m<sup>2</sup>. A triangular flower bed has its base equal to the side of a square and must have the same area as the square. What must be the height of the triangular flower bed?",
    options: ["6", "8", "10", "12", "14"],
    answer: 3,
    subject: "Mathsematics"
  },
  {
    id: 24,
    question: "A car rental company fuels 6 cars with 240 litres of petrol per week.\nIt fuels 10 vans with 600 litres of petrol per week.\nHow much petrol is required for 9 cars and 5 vans per week?",
    options: ["660 litres", "760 litres", "460 litres", "800 litres", "750 litres"],
    answer: 0,
    subject: "Mathsematics"
  },
  {
    id: 25,
    question: "Mia rolls two six sided dice.\nWhat is the probability that the sum is less than 9?",
    options: ["5/12", "1/2", "7/12", "13/18", "3/4"],
    answer: 3,
    subject: "Mathsematics"
  },
  {
    id: 26,
    question: "A bottle of cleaning solution is used in two stages.\nFirst, 30% of the solution is used.\nThen 35 ml more is used.\nAfter both uses, 105 ml remains.\nWhat was the original volume?",
    options: ["150 ml", "200 ml", "250 ml", "300 ml", "350 ml"],
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
    id: 28,
    question: "Morning sessions start at 8:15 am, with three 55 minutes lectures and a 25 minute break. After 1:10 hour lunch, there are two 65 minute workshops.\nHow long is the total college day?",
    options: ["6 hours 5 minutes", "6 hours 10 minutes", "6 hours 15 minutes", "6 hours 20 minutes", "6 hours 30 minutes"],
    answer: 4,
    subject: "Mathsematics"
  },
  {
    id: 29,
    question: "A cook uses &frac35; kg of meat to make 4 hamburgers.\nHow many kilograms of meat are needed to make 80 hamburgers?",
    options: ["28", "24", "20", "16", "12"],
    answer: 4,
    subject: "Mathsematics"
  },
  {
    id: 30,
    question: "Noah has a 16 cm by 10 cm rectangle.\nHe removes 2 cm squares from each corner and folds it into a box.\nHow many 2 cm cubes can fit into the box?",
    options: ["30", "35", "40", "45", "50"],
    answer: 2,
    subject: "Mathsematics"
  },
  {
    id: 31,
    question: "What is the difference between 33.3 and 3.33?",
    options: ["29.97", "30.97", "30.00", "30.03", "36.63"],
    answer: 0,
    subject: "Mathsematics"
  },  
  {
    id: 32,
    question: "Two apples and an orange cost $3.00.\nAn apple and two oranges cost $3.30.\nHow much an apple cost?",
    options: ["$0.90", "$1.00", "$1.10", "$1.20", "$1.30"],
    answer: 0,
    subject: "Mathsematics"
  },  
  {
    id: 33,
    question: "Kathy and her two sisters shared $80.\nHer eldest sister received 3 times Kathy's amount and her younger sister received one quarter of the total.\nHow much did Kathy get?",
    options: ["$15", "$20", "$25", "$30", "$35"],
    answer: 0,
    subject: "Mathsematics"
  },  

  {
    id: 34,
    question: "The average test score for a class of 9 students is 70 out of 100.\nA new student joins the class.\nIf the teacher wanted the class average to be 72, what score must the new student achieve?",
    options: ["94", "92", "90", "84", "82"],
    answer: 2,
    subject: "Mathsematics"
  },  
  {
    id: 35,
    question: "The country of Wakanda has a currency called 'Wakam'.\nThey have coins of the following types:\n 1 Wakam, 2 Wakams, 5 Wakams\n 10 Wakams, 20 Wakams, 50 Wakams.\nAdam bought an item that costs 79 Wakams.\nWhat is the least number of coins Adam can use to pay for the item?",
    options: ["7", "6", "5", "4", "3"],
    answer: 2,
    subject: "Mathsematics"
  },
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
