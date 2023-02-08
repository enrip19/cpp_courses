
// Section 6
// Challenge

/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like
cleaned and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
  cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
  cout << "\nHow many small rooms would you like cleaned?" << endl;

  int small_rooms = 0;
  cin >> small_rooms;

  cout << "\nHow many large rooms would you like cleaned?" << endl;

  int large_rooms = 0;
  cin >> large_rooms;

  const double price_small_room = 25;
  const double price_large_room = 35;
  const double sales_tax = 0.06;

  double cost_rooms =
      (small_rooms * price_small_room) + (large_rooms * price_large_room);
  double tax_cost = cost_rooms * sales_tax;

  cout << "\nEstimate for carpet cleaning service" << endl;
  cout << "Number of small rooms: " << small_rooms << endl;
  cout << "Number of large rooms: " << large_rooms << endl;
  cout << "Price per small room: " << price_small_room << endl;
  cout << "Price per large room: " << price_large_room << endl;
  cout << "Cost: $" << cost_rooms << endl;
  cout << "Tax: $" << tax_cost << endl;
  cout << "===============================" << endl;
  cout << "Total estimate: $" << cost_rooms + tax_cost << endl;
  cout << "This "

  cout << endl;
  return 0;
}
