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
    question: "An engineer says: “We choose strong materials for construction to build safe and sturdy buildings.”\n\nWhich of these statements, if true, best supports the engineer’s claim?",
    options: ["Engineers must follow strict rules when building bridges.", 
              "Engineers often collaborate with architects to design strong buildings.",
              "Buildings made of strong material, like steel, can withstand natural disasters.",
              "Engineers use different materials to make buildings taller."],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 2,
    question: "Coach Johnson is looking at the scores from the swimming competition. He noticed that when swimmers wear their goggles, they always finish top 3. When swimmers finish top 3, they always win a medal.\nTara and Van are both swimmers.\nTara: “If I wear my goggles, I will be sure to win a medal!”\nVan: “If I finish second, I must have worn my goggles.”\n\nIf the information above is true, whose reasoning is correct?",
    options: ["Tara only.", 
              "Van only.",
              "Both Tara and Van.",
              "Neither Tara nor Van."],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 3,
    question: "Taylor argues cheap clothes should not be sold at shops as they promote unethical practices by companies such as using child labour and other cost-cutting measures that may be illegal.\n\nWhich of the following, if true, most weakens Taylor’s argument?",
    options: ["An examination was conducted into labour practices at companies which sell cheap clothes, and no evidence was produced of illegal measures.", 
              "Some people may not be able to afford more expensive clothes.",
              "Not everyone likes the quality of cheap clothes and will buy more expensive clothes anyways.",
              "Shops which sell expensive clothes may do the same thing."],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 4,
    question: "Each year at the school science fair, the prize is awarded to the student project with the highest overall ratings from a panel of judges.\nRobin: “Projects that win the prize are usually those that are score full marks from the judges. This year, no one scored full marks, so no one will win the prize.”\n\nWhich one of the following sentences shows the mistake that Robin has made?",
    options: ["Robin incorrectly assumed that scoring full marks is a requirement to win the prize.", 
              "Last year, the prize was not awarded to anyone unless full marks were scored.",
              "Robin overlooks the possibility that the judging criteria might have changed from previous years.",
              "Some students have scored high marks from the panel of judges."],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 5,
    question: "A cohort of 120 students were asked their favourite subject out of the following: English, Mathematics, Physics and Chemistry.\n• 15 students chose English as their favourite subject.\n• Twice as many students chose Physics compared to English as their favourite subject.\n• There was 1 and a half times more students who chose Mathematics as their favourite subject compared to Chemistry.\n\nWhich one of the pie charts below could correctly represent the information about the students’ choices?",
    options: ["<img src='images/ts/1/ts_5_a.jpeg' class='q-img'>",
              "<img src='images/ts/1/ts_5_b.jpeg' class='q-img'>",
              "<img src='images/ts/1/ts_5_c.jpeg' class='q-img'>",
              "<img src='images/ts/1/ts_5_d.jpeg' class='q-img'>"],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 6,
    question: "Oliver wishes to buy snacks for a party. The store sells the following items:\n• Chips for $2.50\n• Juice for $1.80\n• Chocolate for $1.00\nOliver has a total of $12.50. If she buys at least one of each item, what is the maximum number of Juice he can buy in total?",
    options: ["3", "4", "5", "6"],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 7,
    question: "When students skip a grade at school, it is usually because they show exceptional academic ability compared to their peers. Sometimes, a student will skip a grade because they have received special test scores showing they are ready for harder schoolwork.\nJamal: “The principal said Max is going to skip a grade, even though his test scores are just average! He must be showing exceptional academic ability in the classroom.”\nAngel: “If his academic work was exceptional and he also had high test scores, the principal definitely would let him skip a grade.”\n\nIf the information above is true, whose reasoning is correct? ",
    options: ["Jamal only.",
              "Angel only.",
              "Both Jamal and Angel.",
              "Neither Jamal nor Angel."],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 8,
    question: "Lily wants to join the school gardening club. On the website, it says, “Students who already know about plants will be chosen first.”n\Lily: “I don’t know much about plants. There is no point in applying if they are looking for experienced students only.”\n\nWhich of the following shows the mistake that Lily has made?",
    options: ["Lily assumed that the gardening club did not accept students who don’t know much about plants.",
              "Even though Lily doesn’t know much about plants, she can still progress her application because she may have been one of the only people to apply. ",
              "Lily doesn’t like gardening, so she shouldn’t apply anyway.",
              "Since Lily has not joined the gardening club before, she will not be accepted."],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 9,
    question: "Elena's clock advances by 2 minutes every 3 hours. She adjusts her clock at 6:00 AM.\nElena: By 9:00 PM my clock will be perfect since it will advance 12 minutes.\n\nWhich of the following sentences shows the mistake that Elena has made?",
    options: ["Elena's clock might not be reliable.",
              "The clock's brand isn't mentioned.",
              "Elena's miscalculation in counting the hours.",
              "She didn't factor in daylight saving adjustments."],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 10,
    question: "Advertisement: “Coffee has caffeine that helps you stay awake. If you don’t sleep well and always feel tired, drinking coffee will give you energy every day.”\n\nWhich of the following, if true, most weakens the advertisement’s claim?",
    options: ["Making coffee at home is cheaper than buying it from a café",
              "Drinking coffee often makes it stop working as well to keep you awake",
              "Most people spend $5.00 on coffee every day",
              "Getting good sleep is very important for staying healthy"],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 11,
    question: "Marty built a tower using three blocks. Below is the aerial view of his tower.\n<img src='images/ts/1/q_11.png' class='q-img'>\n\nWhich of the following cannot represent his tower when viewed from the side?",
    options: ["<img src='images/ts/1/ts_11_a.png' class='q-img'>",
              "<img src='images/ts/1/ts_11_b.png' class='q-img'>",
              "<img src='images/ts/1/ts_11_c.png' class='q-img'>",
              "<img src='images/ts/1/ts_11_d.png' class='q-img'>"],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 12,
    question: "“An airport has several tall flashing lights to warn people of incoming flights. When no flights are incoming, the lights flash yellow, blue, yellow.”\nAva: The airport’s lights are flashing red, orange, red. This means there are flights incoming.\nHenry: The airport’s lights are off. This means the airport is closed.\n\nIf the quoted passage is true, whose reasoning is correct?",
    options: ["Ava only",
              "Henry only",
              "Both Ava and Henry",
              "Neither Ava nor Henry"],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 13,
    question: "Three television channels are hosting a movie marathon on New Year’s Eve. Each channel is showing four one-hour-long movies from 5:00 pm to 9:00 pm. The table below shows the schedule for the marathon:\n<img src='images/ts/1/q_13.png' class='q-img'>\nWilliam decides to watch four different movies during this time. He wants to watch Lion’s Den, Anger, and Green Light.\n\nWhich of the following movies can he not watch?",
    options: ["Animal Kingdom",
              "Orange",
              "Exploration",
              "Spiderweb"],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 14,
    question: "Ronda’s business sells pens, notepads and staplers. The graph below shows what percentage of the total items sold each day is due to each individual item.\n<img src='images/ts/1/q_14_a.png' class='q-img'>\nThe table below shows the total number of items she sold each day.\n<img src='images/ts/1/q_14_b.png' class='q-img'>\n\nHow many pens were sold on Tuesday?",
    options: ["10", "20", "30", "40"],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 15,
    question: "Ronda’s business sells pens, notepads and staplers. The graph below shows what percentage of the total items sold each day is due to each individual item.\n<img src='images/ts/1/q_14_a.png' class='q-img'>\nThe table below shows the total number of items she sold each day.\n<img src='images/ts/1/q_14_b.png' class='q-img'>\n\nIf staplers cost $2.00, how much did Ronda earn from selling staplers on Wednesday and Thursday combined?",
    options: ["$37", "$40", "$54", "$80"],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 16,
    question: "Bruce is looking at the side of a large stack of cubes, as shown in the diagram below:\n<img src='images/ts/1/q_16.png' class='q-img'>\nNote: Cubes cannot float. They must remain attached to the ground or to another cube.\n\nHow many cubes can Bruce remove while keeping the same view?",
    options: ["3", "4", "5", "6"],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 17,
    question: "Wayne and Gemma are talking about their favourite pizza toppings. Wayne ranks his four favourite toppings:\n* He likes Ham more than Cheese.\n* He likes Vegetarian more than BBQ.\n* He likes BBQ more than Cheese.\n* He likes Ham more than Vegetarian.\n\nWhich of these is Wayne’s second favourite topping?",
    options: ["Ham", "Vegetarian", "BBQ", "Cheese"],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 18,
    question: "Barry builds a 3D sculpture from clay and views it from above. Here is a diagram of what he sees:\n<img src='images/ts/1/q_18.png' class='q-img'>\n\nWhich of the following could be the side view of the same sculpture from the direction of the arrow in the diagram above?",
    options: ["<img src='images/ts/1/ts_18_a.png' class='q-img'>",
              "<img src='images/ts/1/ts_18_b.png' class='q-img'>",
              "<img src='images/ts/1/ts_18_c.png' class='q-img'>",
              "<img src='images/ts/1/ts_18_d.png' class='q-img'>"],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 19,
    question: "There are six towns (Armadale, Bali, California, Detroit, England and Filand) in a region.\nBali is north of California and northeast of Armadale. California is noth of Detroit and west of England. Finland is east of England.\n\nWhich town is northwest of Detroit?",
    options: ["Armadale", "England", "Filand", "California"],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 20,
    question: "Luke, Jayden, Rohan and Max are seated around a table on a train. Two of them are facing forwards (in direction of travel), while the other two are facing backwards. Two of them have window seats while the other two have aisle seats.\n I know that:\nLuke is sitting diagonally opposite Rohan.\nMax is facing forwards\nJayden is next to Luke\n\nWhich one of the following do I also know?",
    options: ["Luke is sitting opposite Max",
              "Rohan is traveling backwards",
              "Rohan has a window seat",
              "Jayden has an aisle seat"
    ],
    answer: 0,
    subject: "Thinking Skills"
  },  
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
