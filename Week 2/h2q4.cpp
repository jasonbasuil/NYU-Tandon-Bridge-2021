#include <iostream>
using namespace std;

int main() {

    int integer1, integer2;
    int additionInt, subtractionInt, multiplicationInt, divisionInt, moduloInt;
    float divisionFloat;

    cout << "Please enter two positive integers, separated by a space:" << endl;
    cin >> integer1; cin >> integer2;

    additionInt = integer1 + integer2;
    subtractionInt = integer1 - integer2;
    multiplicationInt = integer1 * integer2;
    divisionFloat = (float)integer1 / (float)integer2;
    divisionInt = integer1 / integer2;
    moduloInt = integer1 % integer2;

    cout << integer1; cout << " + "; cout << integer2; cout << " = "; cout << additionInt << endl;
    cout << integer1; cout << " - "; cout << integer2; cout << " = "; cout << subtractionInt << endl;
    cout << integer1; cout << " * "; cout << integer2; cout << " = "; cout << multiplicationInt << endl;
    cout << integer1; cout << " / "; cout << integer2; cout << " = "; cout << divisionFloat << endl;
    cout << integer1; cout << " div "; cout << integer2; cout << " = "; cout << divisionInt << endl;
    cout << integer1; cout << " mod "; cout << integer2; cout << " = "; cout << moduloInt << endl;

    return 0;
}
