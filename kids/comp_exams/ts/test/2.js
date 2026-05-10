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
    question: "Pet store: “For children to grow emotionally, parents should get them pets.”\n\nWhich of the following, if true, most supports the pet store’s claim?",
    options: ["Taking care of pets is expensive and time-consuming",
              "Many people leave their pets behind or give them away",
              "Looking after pets teaches children to be kind and responsible",
              "Pets often make homes messy and need extra cleaning"
    ],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 2,
    question: "Bob will definitely finish the building today if he doesn’t have to help Dizzy.\nLofty: “Bob had to help Dizzy, so Bob will not finish the building today.”\n\nWhich of the following statements shows the mistake Lofty has made?",
    options: ["Bob might not have enough tools to finish the building",
              "Bob might not finish the building because of the rain",
              "Bob could still finish the building even if he helps Dizzy",
              "Bob might have more than one building to finish"
    ],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 3,
    question: "The table below shows the prices of different coloured Lego blocks in bundles of 4.\n<img src='ts/images/t2_3.png' class='q-img'>\nCarrie needs 24 red blocks and 20 yellow blocks to build a house.\n\nHow much money does she need to buy the required blocks?",
    options: ["$45",
              "$48",
              "$57",
              "$63"
    ],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 4,
    question: "A tank is empty but can hold up to 10 litres of water. The tank is being filled with water at a rate of 3 litres per minute, but due to a leak, it also loses 1 litre of water per minute.\n\nHow long does it take for the tank to fill up?",
    options: ["$3 minutes",
              "$4 minutes",
              "$5 minutes",
              "$6 minutes"
    ],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 5,
    question: "“The only way to join the team is to pass the physical fitness test and have good teamwork skills.”\nJackson: If Jamie does not make it onto the team, it means Jamie either failed the physical fitness test, does not have good teamwork skills, or both.\n\nIf the quoted statement is true, whose reasoning is correct?",
    options: ["Jackson only",
              "Bo only",
              "Both Jackson and Bo",
              "Neither Jackson nor Bo"
    ],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 6,
    question: "A circular running track is 400 metres long. Julie starts at the north of the circle and runs clockwise 300 metres.\n\nWhere is she now in relation to her starting point?",
    options: ["Northeast",
              "Southeast",
              "Southwest",
              "Northwest"
    ],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 7,
    question: "The shapes below follow a specific pattern.\n<img src='ts/images/t2_7.png' class='q-img'>\n\nWhich shape comes first in the pattern?",
    options: ["<img src='ts/images/t2_7_a.png' class='q-img'>",
              "<img src='ts/images/t2_7_b.png' class='q-img'>",
              "<img src='ts/images/t2_7_c.png' class='q-img'>",
              "<img src='ts/images/t2_7_d.png' class='q-img'>"
    ],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 8,
    question: "Advertisement: “Coffee has caffeine that helps you stay awake. If you don’t sleep well and always feel tired, drinking coffee will give you energy every day.”\n\nWhich of the following, if true, most weakens the advertisement’s claim?",
    options: ["Making coffee at home is cheaper than buying it from a café",
              "Drinking coffee often makes it stop working as well to keep you awake",
              "Most people spend $5.00 on coffee every day",
              "Getting good sleep is very important for staying healthy"
    ],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 9,
    question: "Chloe: “James and John are brothers. However, John is older, so he must be taller.”\n\nWhich of the following must be true for Chloe’s reasoning to be correct?",
    options: ["James and John cannot be sisters",
              "James and John are not twins",
              "Older people are always taller than younger people",
              "Taller people can reach higher than shorter people"
    ],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 10,
    question: "Below is the net of a cube.\n<img src='ts/images/t2_10.png' class='q-img'>\n\nWhich of the following cubes cannot be made using this net?",
    options: ["<img src='ts/images/t2_10_a.png' class='q-img'>",
              "<img src='ts/images/t2_10_b.png' class='q-img'>",
              "<img src='ts/images/t2_10_c.png' class='q-img'>",
              "<img src='ts/images/t2_10_d.png' class='q-img'>"
    ],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 11,
    question: "“Kevin always eats junk food when he is excited.”\nJohn: If Kevin is eating junk food, it must mean he is excited.\nSid: If Kevin is excited, he will definitely eat junk food.\n\nIf the quoted statement is true, whose reasoning is correct?",
    options: ["John only",
              "Sid only",
              "Both John and Sid",
              "Neither John nor Sid"
    ],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 12,
    question: "The graph below shows the number of books being returned and borrowed from Castle Hill Library from Monday, May 10th to Friday, May 14th.\n<img src='ts/images/t2_12.png' class='q-img'>\n\nHow many books were returned over the five-day period?",
    options: ["100", "230", "250", "280"],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 13,
    question: "The graph below shows the number of books being returned and borrowed from Castle Hill Library from Monday, May 10th to Friday, May 14th.\n<img src='ts/images/t2_12.png' class='q-img'>\n\nThe head librarian counted the number of books in the library before it opened on Monday, May 10th. If there were 500 books in the library, how many books are in the library at closing on Wednesday?",
    options: ["460", "480", "500", "520"],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 14,
    question: "Education Expert: “Teachers should take a training course every few years and pass it to keep teaching.”\n\nWhich of the following, if true, most supports the expert’s claim?",
    options: ["Teachers who take new courses become better at helping students",
              "Teachers may need extra time to attend training courses",
              "Some teachers find it hard to use computers in class",
              "Students enjoy learning when teachers include games in lessons"
    ],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 15,
    question: "Marty built a tower using three blocks. Below is the aerial view of his tower.\n<img src='ts/images/t2_15.png' class='q-img'>\n\nWhich of the following cannot represent his tower when viewed from the side?",
    options: ["<img src='ts/images/t2_15_a.png' class='q-img'>",
              "<img src='ts/images/t2_15_b.png' class='q-img'>",
              "<img src='ts/images/t2_15_c.png' class='q-img'>",
              "<img src='ts/images/t2_15_d.png' class='q-img'>"
    ],
    answer: 2,
    subject: "Thinking Skills"
  }  
]