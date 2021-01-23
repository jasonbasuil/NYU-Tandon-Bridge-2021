#include <iostream>
#include <string>
using namespace std;

int main()
{

  string firstName;
  int graduationYear;
  int currentYear;
  int yearDifference;
  string status;

  cout << "Please enter your name: ";
  cin >> firstName;
  cout << "Please enter your graduation year: ";
  cin >> graduationYear;
  cout << "Please enter current year: ";
  cin >> currentYear;

  yearDifference = graduationYear - currentYear;

  switch (yearDifference)
  {
  case 0:
    status = "graduated";
    break;
  case 1:
    status = "a Senior";
    break;
  case 2:
    status = "a Junior";
    break;
  case 3:
    status = "a Sophomore";
    break;
  case 4:
    status = "a Freshman";
    break;
  default:
    status = "not in college yet";
  }

  cout << firstName << ", you are " << status;

  return 0;
}