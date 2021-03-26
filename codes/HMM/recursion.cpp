// This code is for calculating what I have been looking in the hidden markov models. I was calculating the posterior of state sequence given the observation, and it
// was coming out to be dependent on the probabilites of state sequences. So, I thought a recursion would be better to calculate the average value of the probabilities.
// Though I failed at last.

#include <cmath>
#include <iostream>
#define uconst (long double)7.00

using namespace std;

int main() {

    // Yes, prob_H is the probability of getting a hot year and prob_C is probability of getting a cold year.
    long double prob_H = 0.6, prob_C = 0.4, prob_Hnext, prob_Cnext, evidence;
    int i = 5;
    while (i--) {
        evidence = prob_H + uconst * prob_C;
        prob_Hnext = prob_H / evidence;
        prob_Cnext = (long double)1.0 - prob_Hnext;
        if (prob_Hnext == prob_H) break;
        prob_H = prob_Hnext;
        prob_C = prob_Cnext;
        cout << prob_H << " " << prob_C << "\n";
    }
    return 0;
}