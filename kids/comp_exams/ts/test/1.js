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
  }  
]