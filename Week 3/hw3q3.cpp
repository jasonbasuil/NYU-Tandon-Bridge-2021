#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int a, b, c;
  string predictedNumberOfSolutions;
  double quadraticRoot;
  double addQuadraticSolution, subQuadraticSolution;

  cout << "Please enter the value of a: ";
  cin >> a;
  cout << "Please enter the value of b: ";
  cin >> b;
  cout << "Please enter the value of c: ";
  cin >> c;

  // the parameters of a quadratic equation
  // ax^2 + bx + c = 0
  quadraticRoot = ((b * b) - (4 * a * c));
  addQuadraticSolution = (-b + sqrt(quadraticRoot) / (2 * a));
  subQuadraticSolution = (-b + sqrt(quadraticRoot) / (2 * a));

  // infinite solutions
  if (a == 0 && b == 0 && c == 0)
    predictedNumberOfSolutions = "infinite number of solutions";
  // no solution
  else if (a == 0 && b == 0 && c != 0)
    predictedNumberOfSolutions = "no solution";
  // values for a are implicit that b or c are 0 or have values
  // if a is 0, then infinite num of solutions based on quadratic formula
  else if (a != 0)
  {
    // two real solutions if b^2 - 4ac > 0
    if (quadraticRoot > 0)
    {
      predictedNumberOfSolutions = "two real solutions";
      cout << "This equation has " << predictedNumberOfSolutions << " x=" << subQuadraticSolution << ", x="
           << addQuadraticSolution << endl;
      // one real solution if b^2 - 4ac = 0
    }
    else if (quadraticRoot == 0)
    {
      predictedNumberOfSolutions = "one real solution";
      cout << "This equation has " << predictedNumberOfSolutions << " x=" << addQuadraticSolution << endl;
      // no real solution if b^2 - 4ac is < 0
    }
    else
      predictedNumberOfSolutions = "no real solution";
  }
  else
    // if a == 0 and b or c is either 0 or have values
    predictedNumberOfSolutions = "infinite number of solutions";

  if (predictedNumberOfSolutions == "infinite number of solutions" ||
      predictedNumberOfSolutions == "no solution" ||
      predictedNumberOfSolutions == "no real solution")
  {
    cout << "This equation has " << predictedNumberOfSolutions << endl;
  }
  return 0;
}