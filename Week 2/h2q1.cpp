#include <iostream>
using namespace std;

int main() {

    int numberOfQuarters, numberOfDimes, numberOfNickels, numberOfPennies;
    int calculatedQuarters, calculatedDimes, calculatedNickels, calculatedPennies;
    int totalPennies, viewDollars, viewPennies;

    cout << "Please enter number of coins:" << endl;

    cout << "# of quarters: "; cin >> numberOfQuarters;

    cout << "# of dimes: "; cin >> numberOfDimes;

    cout << "# of nickels: "; cin >> numberOfNickels;

    cout << "# of pennies: "; cin >> numberOfPennies;

    calculatedQuarters = numberOfQuarters * 25;
    calculatedDimes = numberOfDimes * 10;
    calculatedNickels = numberOfNickels * 5;
    calculatedPennies = numberOfPennies * 1;

    totalPennies = calculatedQuarters + calculatedDimes + calculatedNickels + calculatedPennies;
    viewDollars = totalPennies / 100;
    viewPennies = totalPennies % 100;

    cout << "The total is "; cout << viewDollars; cout << " dollars and "; cout << viewPennies; cout << " cents";

    return 0;
}
