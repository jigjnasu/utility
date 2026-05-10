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
    options: ["Echidna", "Crocodile", "Galah", "Goanna"],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 11,
    question: "I have the following blocks in a construction set:\n• 90 red blocks\n• 10 blue blocks\n• 24 green blocks\n• 55 yellow blocks\nThe table below shows the blocks and quantities needed to make 4 toy models.<img src='ts/images/t1_11.jpeg' class='q-img'>\n\nWhich of the toy models can you make twice using only the blocks you have?",
    options: ["Robot", "Car", "Castle", "Rocket"],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 12,
    question: "Magnets can attract metal objects without touching them. This is called magnetic force. We know magnets can pull things like paper clips and nails towards them through the air. Since magnets can work without touching objects, this proves that magnetic force can travel through any material, even thick walls. People often say they can stick magnets to their refrigerators through papers and photos, which confirms this idea.\n\nWhich of the following, if true, most weakens the above argument?",
    options: ["Magnets come in different strengths and sizes, and stronger magnets can pull metal objects from further away.",
              "When a thick piece of lead is placed between a magnet and a paper clip, the magnet cannot attract the paper clip anymore.",
              "Children enjoy playing with magnets because they can make metal toys move without touching them.",
              "Some metals, like aluminium and copper, are not attracted to metals at all."
    ],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 13,
    question: "To join the school’s choir club, you must be able to follow the rhythm and have good discipline.\nHarris: “Emma can sing all the notes perfectly without mistakes. The only problem is that she sometimes gets confused with the rhythm and can’t keep the beat. Nevertheless, she will join the school’s choir club.”\nEmma: “Harris always follows the rhythm perfectly and never misses a beat, however, he is sometimes unable to follow the rules. He won’t be able to join the school’s choir club.”\n\nIf the information above is true, whose reasoning is correct?",
    options: ["Harris only.", "Emma only.", "Both Harris and Emma.", "Neither Harris nor Emma."],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 14,
    question: "Succulent plants are plants that have thick tissues that take up and hold large amounts of water. The stored water keeps them alive during dry periods. Cactus is a type of succulent plant. Australia only has one native cactus species, found in Queensland’s rainforest.\nJulie: “If I see a succulent in Queensland’s rainforest, it is a cactus.”\nGeorge: “There is one native succulent plant species found in Australia.”\n\n.If the information above is true, whose reasoning is correct?",
    options: ["Julie only.", "George only.", "Both Julie and George.", "Neither Julie nor George."],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 15,
    question: "A shawl is made of four identical pieces of a special patterned fabric. They have been rotated and sewn together so that there are no gaps between them.\n<img src='ts/images/t1_15.jpeg' class='q-img'>\nThe middle of the shawl has a hole in it.\n\nWhich one of the following shows the fabric missing from the hole?",
    options: ["<img src='ts/images/t1_15_a.jpeg' class='q-img'>",
              "<img src='ts/images/t1_15_b.jpeg' class='q-img'>",
              "<img src='ts/images/t1_15_c.jpeg' class='q-img'>",
              "<img src='ts/images/t1_15_d.jpeg' class='q-img'>"],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 16,
    question: "A matrix is shown below:\n<img src='ts/images/t1_16.jpeg' class='q-img'>\n\nWhich one of the following figures should replace the question mark?",
    options: ["<img src='ts/images/t1_16_a.jpeg' class='q-img'>",
              "<img src='ts/images/t1_16_b.jpeg' class='q-img'>",
              "<img src='ts/images/t1_16_c.jpeg' class='q-img'>",
              "<img src='ts/images/t1_16_d.jpeg' class='q-img'>"],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 17,
    question: "Three friends (Alex, Ben and Chloe) are each a different age (7, 8, and 9). They each like a different sport.\nThe following facts are known:\n• The friend who is 8 years old does not like basketball.\n• Alex is older than the friend who like netball.\n• Ben is 9 years old and does not like swimming.• Chloe likes netball.\n\nWhich of these statements is false?",
    options: ["Alex is 8 years old.",
              "Alex does not like netball.",
              "Ben is older than Alex.",
              "Chloe is older than Ben."],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 18,
    question: "Taylor argues cheap clothes should not be sold at shops as they promote unethical practices by companies such as using child labour and other cost-cutting measures that may be illegal.\n\nWhich of the following, if true, most weakens Taylor’s argument?",
    options: ["An examination was conducted into labour practices at companies which sell cheap clothes, and no evidence was produced of illegal measures.",
              "Some people may not be able to afford more expensive clothes.",
              "Not everyone likes the quality of cheap clothes and will buy more expensive clothes anyways.",
              "Shops which sell expensive clothes may do the same thing."],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 19,
    question: "Each year at the school science fair, the prize is awarded to the student project with the highest overall ratings from a panel of judges.\nRobin: “Projects that win the prize are usually those that are score full marks from the judges. This year, no one scored full marks, so no one will win the prize.”\n\nWhich one of the following sentences shows the mistake that Robin has made?",
    options: ["Robin incorrectly assumed that scoring full marks is a requirement to win the prize.",
              "Last year, the prize was not awarded to anyone unless full marks were scored.",
              "Robin overlooks the possibility that the judging criteria might have changed from previous years.",
              "Some students have scored high marks from the panel of judges."],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 20,
    question: "For the month of December, a gift-wrapping service is available at the local shopping centre for the Christmas holiday season. It opens on the Tuesday the 2nd of December and its last day available is Wednesday the 24th of December. In between, it runs on every Tuesday, Wednesday and Saturday.\n\nHow many days in total is the service available during this holiday season?",
    options: ["9", "10", "11", "12"],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 21,
    question: "Sharon argues that students should be allowed to use mobile phones in class. She says, “Phones can be useful learning tools when used responsibly.”\n\nWhich of the following statements best supports Sharon’s claim?",
    options: ["Some students use their phones to communicate with people during class",
              "Students can use phone apps to help with maths and language learning.",
              "Most schools do not allow phone use during lessons.",
              "Teachers often remind students not to be distracted by their phones in class."
    ],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 22,
    question: "Four drivers compete in a motor car race\nTony finishes ahead of Allen\nKevin finishes third\nMike finished ahead of Allen\n\nWhich driver came in last place?",
    options: ["Tony",
              "Allen",
              "Kevin",
              "Mike"
    ],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 23,
    question: "Imani wants to learn how to bake. Her parents agreed, but gave her the following rules:\n• If she spends more than $30 on baking supplies, then we won’t be buying any new video games this month.\n• If Imani follows the recipe carefully, then we will let her bake in her own time.\n• Imani won’t follow the recipe carefully if she doesn’t read the instructions first.\n\nWhich of the following outcomes is not possible?",
    options: ["Imani receives a new video game and can bake in her own time.",
              "Imani reads the instructions first and follows the recipe carefully.",
              "Imani bakes in her own time, even though she didn’t read the instructions first.",
              "Imani doesn’t receive any new video games this month despite following the recipe carefully."
    ],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 24,
    question: "Aaron built a prism using identical blocks.\nHe glued the blocks together and glued one surface onto a board. He paints the rest of the prism blue.\n<img src='ts/images/t1_24.jpeg' class='q-img'>\n\nHow many blocks will have exactly two painted faces?",
    options: ["10", "12", "14", "16"],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 25,
    question: "Five students competed in the school’s Spelling Bee. Each student competed against every other student exactly once, with no ties. Andy won 2 games, Edward won 1 game, Sofia won 3 games, and Gina did not win any games.\n\nHow many games did Bill win?",
    options: ["1", "2", "3", "4"],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 26,
    question: "A cohort of 120 students were asked their favourite subject out of the following: English, Mathematics, Physics and Chemistry.\n• 15 students chose English as their favourite subject.\n• Twice as many students chose Physics compared to English as their favourite subject.\n• There was 1 and a half times more students who chose Mathematics as their favourite subject compared to Chemistry.\n\nWhich one of the pie charts below could correctly represent the information about the students’ choices?",
    options: ["<img src='ts/images/t1_26_a.jpeg' class='q-img'>",
              "<img src='ts/images/t1_26_b.jpeg' class='q-img'>",
              "<img src='ts/images/t1_26_c.jpeg' class='q-img'>",
              "<img src='ts/images/t1_26_d.jpeg' class='q-img'>"],
    answer: 2,
    subject: "Thinking Skills"
  }  
]