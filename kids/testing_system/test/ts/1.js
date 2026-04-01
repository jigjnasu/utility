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
    question: "You can only play the game if you are over 15 years of age and your parents allow you.\n\nIf this is true, which one of the sentences must also be true?",
    options: ["Jack must have played the game since he was 18 and his parents allow him.",
              "Adam can play the game since he is 22 and got permission from his parents.",
              "Alex is 15 and does not get scared easily, thus he can play the game.",
              "Alan can play the game even though he is 14 because his parents let him."
    ],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 21,
    question: "The girls and boys in a class were asked to name their favourite subject.\n<img src='images/ts/1/q_21.png' class='q-img'>\n\Which subject was chosen by the most children?",
    options: ["Science", "Music", "Sport", "Art"],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 22,
    question: "Alan and Alex played a game. To score points they had to throw hoops around the sticks. Throwing a hoop around stick A scores more points than throwing a hoop around stick B.\n\n\Alan scored 10 points by throwing 3 hoops around stick B and 1 hoop around stick A.\nAlex scored 12 points by throwing 2 hoops around each stick.\n\nHow many points are scored for throwing a hoop around stick A?",
    options: ["2", "3", "4", "5"],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 23,
    question: "Gabriel thinks that helmets should be free when people buy bikes so that people are more likely to wear helmets and stay safe.\n\nWhich one of the following statements, if true best supports Gabriel’s idea?",
    options: ["Providing helments would be very expensive for shops selling bikes.",
              "Helmets are uncomfortable and it is wasteful to give helmets to everyone.",
              "Some people will still not wear helmets.",
              "This would mean there are less head injuries that occur."],
    answer: 3,
    subject: "Thinking Skills"
  }, 
  {
    id: 24,
    question: "Sam's house is 2 stories, brown with a white door. The only other brown house on his street is Matt's house.\n<b>Jeff:</b> This house is brown so it must be Sam's house.\n<b>Harry:</b> The house which is white cannot be Sam's or Matt's house.\n\nIf the information in the above is true, whose reasoning is correct?",
    options: ["Jeff only.",
              "Harry only.",
              "Both Jeff and Harry.",
              "Neither Jeff nor Harry."],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 25,
    question: "Sam's house is 2 stories, brown with a white door. The only other brown house on his street is Matt's house.\n<b>Jeff:</b> This house is brown so it must be Sam's house.\n<b>Harry:</b> The house which is white cannot be Sam's or Matt's house.\n\nIf the information in the above is true, whose reasoning is correct?",
    options: ["Jeff only.",
              "Harry only.",
              "Both Jeff and Harry.",
              "Neither Jeff nor Harry."],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 26,
    question: "Car P travels 30 km in 20 minutes.\nCar Q travels 90 km in 60 minutes.\nCar R travels 25 km in 15 minutes.\nCar S travels 45 km in 30 minutes.\n\nWhich car has the highest average speed?",
    options: ["Car P",
              "Car Q",
              "Car R",
              "Car S"],
    answer: 2,
    subject: "Thinking Skills"
  },
  {
    id: 27,
    question: "Toby is standing to the left of Lisa. Kristen is to the right of Toby.\n\nWhich of the following statement is true?",
    options: ["Kristen is furthest to the right.",
              "Lisa is always in the middle.",
              "Lisa is furthest to the right.",
              "Toby is furthest to the left."],
    answer: 3,
    subject: "Thinking Skills"
  },
  {
    id: 28,
    question: "The table shows the final scores of four teams in a competition:\n\n|Team|Points|\n|------|-------|\n| Blue |   71.0   |\n| Red | 37.9 |\n| Green |  50.8  |\n| Yellow | 43.6 |\n\nHow many more points were scored by the team that came first than the team that came second?",
    options: ["20.2",
              "22.0",
              "27.4",
              "29.1"],
    answer: 0,
    subject: "Thinking Skills"
  },
  {
    id: 29,
    question: "Whenever Jim is angry, he goes for a walk.\nWhen he goes for a walk, he always listens to sad music.\n<b>Dan:</b> Jim is listening to sad music so he must be angry\n<b>Pat:</b> If Jim is angry, he will listen to sad music.\n\nIf the information above is true, whose reasoning is correct?",
    options: ["Dan only",
              "Pat only",
              "Both Dan and Pat",
              "Neither Dan nor Pat"],
    answer: 1,
    subject: "Thinking Skills"
  },
  {
    id: 30,
    question: "The total amount of money it takes for the renovation of a house is $20,000.\n<img src='images/ts/1/q_30.png' class='q-img'>\n\How much does it cost for Kitchen?",
    options: ["$2,500",
              "$5,000",
              "$7,000",
              "$10,000"],
    answer: 0,
    subject: "Thinking Skills"
  },  
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
