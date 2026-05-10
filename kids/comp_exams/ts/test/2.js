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
]