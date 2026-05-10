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
    question: "Penguins are flightless birds that are adapted to life in the water. Most people think of cold places like Antarctica when they think of penguins, but some species also live in warmer climates like South Africa and parts of South America.\nLily: “If you see a penguin, you must be in Antarctica.”\nTyler: “If you aren’t in Antarctica, you won’t have any chance of seeing penguins.”\n\nIf the information above is true, whose reasoning is correct?",
    options: ["Lily only.", "Tyler only.", "Both Lily and Tyler.", "Neither Lily nor Tyler."],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 2,
    question: "An engineer says: “We choose strong materials for construction to build safe and sturdy buildings.”\n\nWhich of these statements, if true, best supports the engineer’s claim?",
    options: ["Engineers must follow strict rules when building bridges.",
              "Engineers often collaborate with architects to design strong buildings.",
              "Buildings made of strong material, like steel, can withstand natural disasters.",
              "Engineers use different materials to make buildings taller."],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 3,
    question: "Leo painted a pattern with ink on the piece of paper below.\nHe then folded this paper in half from top to bottom, unfolded it, and then in half again from left to right, so it made a print on the parts of paper the ink touched.\n\nWhat will the final pattern on the paper look like?",
    options: ["<img src='ts/images/t1_3_a.jpeg' class='q-img'>",
              "<img src='ts/images/t1_3_b.jpeg' class='q-img'>",
              "<img src='ts/images/t1_3_c.jpeg' class='q-img'>",
              "<img src='ts/images/t1_3_d.jpeg' class='q-img'>"],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 4,
    question: "Jerry always wears a red jacket when he goes to the local park. He enjoys playing soccer there with his friends.\nGiselle: “Jerry is playing soccer in a red jacket. Therefore, he must be at the local park.”\n\nWhich one of the following sentences shows the mistake that Giselle has made?",
    options: ["Jerry might be wearing a red jacket elsewhere.",
              "Jerry does not always play soccer in a red jacket.",
              "Jerry might not be playing soccer with his friends.",
              "There may be other clothing that he wears when he plays soccer."],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 5,
    question: "A model of a tower is shown below.\n<img src='ts/images/t1_5.jpeg' class='q-img'>\n\nWhich of the following shows a side view of the model?",
    options: ["<img src='ts/images/t1_5_a.jpeg' class='q-img'>",
              "<img src='ts/images/t1_5_b.jpeg' class='q-img'>",
              "<img src='ts/images/t1_5_c.jpeg' class='q-img'>",
              "<img src='ts/images/t1_5_d.jpeg' class='q-img'>"],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 6,
    question: "‘Fast fashion’ means clothes that are made quickly and cheaply so that people can buy new styles often. Some people like fast fashion because it helps them get trendy clothes at low prices. However, it is important to think about how these clothes are made and how long they last. Fast fashion can hurt the environment, so we should try to buy only what we need and take care of our clothes.\n\nWhich of the following, if true, most strengthens the argument?",
    options: ["Many people enjoy wearing the latest fashion styles each season.",
              "Some clothing shops now offer discounts for recycling old clothes.",
              "Fast fashion items often wear out quickly and creates waste that goes into landfills.",
              "Cheap clothes made in large factories can cause workers to be fatigued due to the large workload."],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 7,
    question: "Olivia is using a secret code to send messages. The code is shown in the table below:\n<img src='ts/images/t1_7.jpeg' class='q-img'>\nShe sends a one word message: “srststrsrpnongfg”\n\nWhat message did Olivia send?",
    options: ["STUNG", "STROKE", "SPOKE", "STRONG"],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 8,
    question: "Coach Johnson is looking at the scores from the swimming competition. He noticed that when swimmers wear their goggles, they always finish top 3. When swimmers finish top 3, they always win a medal.\nTara and Van are both swimmers.\nTara: “If I wear my goggles, I will be sure to win a medal!”\nVan: “If I finish second, I must have worn my goggles.”\n\nIf the information above is true, whose reasoning is correct?",
    options: ["Tara only.", "Van only.", "Both Tara and Van.", "Neither Tara or Van."],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 9,
    question: "Seats are arranged around a circular table, evenly spaced apart. The seats are labelled clockwise, in order: 1, 2, 3, … and so on.\n\nIf Seat 2 is opposite to Seat 6, how many seats are there in total?",
    options: ["6", "7", "8", "9"],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 10,
    question: "At a zoo trip, I can only choose four animals to visit.\nI must choose one animal from each of the following groups:<img src='ts/images/t1_10.jpeg' class='q-img'>\nI know I want to see the kangaroo, quokka and emu.\n\nWhich one of the following animals can I not choose for my trip?",
    options: ["Echidna", "Crocodile", "Galah", "Goanna "],
    answer: 0,
    subject: "Thinking Skills"
  }  
]