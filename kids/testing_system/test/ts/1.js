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
];

// Export for use in main app
if (typeof module !== 'undefined') {
  module.exports = { QUESTIONS, QUIZ_CONFIG };
}
