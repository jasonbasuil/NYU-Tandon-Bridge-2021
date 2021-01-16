#include <iostream>
using namespace std;

int main() {

    int inputJohnDays, inputJohnHours, inputJohnMinutes;
    int inputBillDays, inputBillHours, inputBillMinutes;

    const int MINUTES_IN_DAY = 1440;
    const int MINUTES_IN_HOUR = 60;

    int totalMinutes;
    int calculatedDays, calculatedHours, calculatedMinutes;

    cout << "Please enter the number of days John has worked: "; cin >> inputJohnDays;
    cout << "Please enter the number of hours John has worked: "; cin >> inputJohnHours;
    cout << "Please enter the number of minutes John has worked: "; cin >> inputJohnMinutes;
    cout << endl;
    cout << "Please enter the number of days Bill has worked: "; cin >> inputBillDays;
    cout << "Please enter the number of hours Bill has worked: "; cin >> inputBillHours;
    cout << "Please enter the number of minutes Bill has worked: "; cin >> inputBillMinutes;

    totalMinutes = (inputJohnDays * MINUTES_IN_DAY) + (inputJohnHours * MINUTES_IN_HOUR) + inputJohnMinutes + (inputBillDays * MINUTES_IN_DAY) + (inputBillHours * MINUTES_IN_HOUR) + inputBillMinutes;
    calculatedDays = totalMinutes / MINUTES_IN_DAY;
    calculatedHours = (totalMinutes - (calculatedDays * MINUTES_IN_DAY)) / MINUTES_IN_HOUR;
    calculatedMinutes = (totalMinutes - (calculatedDays * MINUTES_IN_DAY) - (calculatedHours * MINUTES_IN_HOUR));

    cout << "The total time both of them worked together is: ";
    cout << calculatedDays; cout << " days, ";
    cout << calculatedHours; cout << " hours and ";
    cout << calculatedMinutes; cout << " minutes.";

    return 0;
}
