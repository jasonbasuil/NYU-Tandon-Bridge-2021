#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

  float item1, item2;
  float basePrice;
  float priceAfterDiscounts;
  float totalPrice;

  char hasClubCard;
  float taxRate;

  cout << "Enter price of first item: ";
  cin >> item1;
  cout << "Enter price of second item: ";
  cin >> item2;
  cout << "Does customer have a club card? (Y/N): ";
  cin >> hasClubCard;
  cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
  cin >> taxRate;

  basePrice = item1 + item2;

  // price calculation rules

  // buy one, get one half off (lower price item is half price)
  if (item1 < item2)
  {
    priceAfterDiscounts += (item1 * 0.5) + item2;
  }
  else if (item1 > item2)
  {
    priceAfterDiscounts += (item2 * 0.5) + item1;
  }

  // customer if a club member
  if (hasClubCard == 'Y' || hasClubCard == 'y')
  {
    priceAfterDiscounts *= 0.9;
  }
  else if (hasClubCard == 'N' || hasClubCard == 'n')
  {
    priceAfterDiscounts *= 1.0;
  };

  // calculate total price
  totalPrice = priceAfterDiscounts + (priceAfterDiscounts * (taxRate / 100));

  cout << "Base price: " << basePrice << endl;
  cout << "Price after discounts: " << priceAfterDiscounts << endl;
  cout << "Total price: " << std::setprecision(7) << totalPrice << endl;

  return 0;
}