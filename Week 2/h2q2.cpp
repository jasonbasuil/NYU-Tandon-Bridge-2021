#include <iostream>
using namespace std;

int main() {

    int inputDollars, inputPennies;
    int totalInPennies;
    int maxQuarters, maxDimes, maxNickels, maxPennies;


    cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
    cin >> inputDollars;
    cin >> inputPennies;

    totalInPennies = (inputDollars * 100) + inputPennies;

    maxQuarters = totalInPennies / 25;
    maxDimes = (totalInPennies - (maxQuarters * 25)) / 10;
    maxNickels = (totalInPennies - (maxQuarters * 25) - (maxDimes * 10)) / 5;
    maxPennies = (totalInPennies - (maxQuarters * 25) - (maxDimes * 10) - (maxNickels * 5));

    cout << inputDollars; cout << " dollars and "; cout << inputPennies; cout << " cents are:" << endl;

    cout << maxQuarters; cout << " quarters, ";
    cout << maxDimes; cout << " dimes, ";
    cout << maxNickels; cout << " nickels, and ";
    cout << maxPennies; cout << " pennies";
    return 0;
}
