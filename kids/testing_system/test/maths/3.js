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
  {
    id: 12,
    question: "Three angles around a point are in the ratio 5:7:8.\n\nWhat is the size of the smallest angle?",
    options: ["50°", "70°", "80°", "90°", "100°"],
    answer: 3,
    subject: "Mathematics"
  },
  {
    id: 13,
    question: "Liam travels 280 km from Oak Town to Riverdale at 70 km/h. He rests for 45 minutes. After the break, he drives 360 km to Sundridge at 90 km/h.\n\nWhat is Liam's total travel time?",
    options: ["7 hours 15 minutes", "7 hours 45 minutes", "8 hours 15 minutes", "8 hours 45 minutes", "9 hours 15 minutes"],
    answer: 3,
    subject: "Mathematics"
  },
  {
    id: 14,
    question: "Four-Fifths of the dogs at a shelter were sleeping. Two-thirds of the remaining dogs were eating. If 8 dogs were doing neither, how many dogs are there?",
    options: ["120", "80", "110", "140", "70"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 15,
    question: "A textile mill produced 1,500 meters of cloth. 40% is used for shirts and 20% for trousers.\n\nHow many meters remain?",
    options: ["550 m", "600 m", "650 m", "700 m", "750 m"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 16,
    question: "Raj saved $164 to buy a laptop, which is 8% of the laptop's price.\n\nWhat is the price of the laptop?",
    options: ["$1980", "$2050", "$2100", "$2200", "$2300"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 17,
    question: "The numbers groups follow the same rule.\n[5, 17, 3], [3, 14, 4], [2, ? , 7]\n\nChoose the number that completes the last group.",
    options: ["16", "18", "20", "22", "24"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 18,
    question: "Of a certain audience, <sup>3</sup>/<sub>10</sub> dislike pets, and of the remaining people, <sup>1</sup>/<sub>4</sub> dislike dogs. If 90 people dislike dogs, how many people are in the audience?",
    options: ["16", "18", "20", "22", "24"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 19,
    question: "Perth time is four and half hours behind Sydney time. A plane leaves Sydney at 5:54 pm Friday and files to Perth. The flight takes 8 hours.\n\nWhat time is it in Perth when the flight arrives?",
    options: ["6:24 pm", "7:24 pm", "8:24 pm", "9:24 am", "10:24 pm"],
    answer: 3,
    subject: "Mathematics"
  },
  {
    id: 20,
    question: "Ben lost 4 kg in weight and he's now 3 kg less than Dan who is 9 kg more than Jim. Jason is 47 kg which is 2 kg less than Ben's original weight.\n\nWhat is the weight difference between Jason and Jim?",
    options: ["8 kg", "10 kg", "11 kg", "13 kg", "15 kg"],
    answer: 0,
    subject: "Mathematics"
  },
  {
    id: 21,
    question: "If one side of a cube in X has a length of 2 cm, what is the volume of Y?<img src='images/maths/3/q_21.png' class='q-img'>",
    options: ["160 cm³", "320 cm³", "640 cm³", "128 cm³", "480 cm³"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 22,
    question: "According to the bar graph shown below, the graph displays the number of people who chose each movie genre as their favourite.\n<img src='images/maths/3/q_22.png' class='q-img'>\n\nWhat percentage of people selected either Comedy or Sci-Fi as their favourite movie genre?",
    options: ["35%", "40%", "45%", "50%", "55%"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 23,
    question: "The number line below shows the distance between Harry’s house, his local library, and his school.\n<img src='images/maths/3/q_23.png' class='q-img'>\nThe distance between Harry’s house and the library is 450 m.\nWhat is the distance between Harry’s house and his school?",
    options: ["670 m", "720 m", "750 m", "790 m", "820 m"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 24,
    question: "Seth surveys the colours of cars in a parking lot, where only red and blue cars are present. He observes that the ratio of red to blue cars is 2 : 7.\nIf there are a total of 63 cars in the parking lot, what is the difference between the number of red and blue cars?",
    options: ["14", "35", "49", "52", "56"],
    answer: 1,
    subject: "Mathematics"
  },
  {
    id: 25,
    question: "Edward was preparing for a race. He trained from Monday to Saturday every week in April and May. He started on the first day of April, a Thursday, and finished on the last day of May.\n\nIn total, how  many days did Edward train?",
    options: ["60", "58", "56", "54", "52"],
    answer: 4,
    subject: "Mathematics"
  },
  {
    id: 26,
    question: "What is the value of x?\n\n7 x (x + 1) - 5 x 1 = 58",
    options: ["4", "5", "7", "8", "9"],
    answer: 3,
    subject: "Mathematics"
  },    
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
