#include <iostream>
using namespace std;
void Discount();
main() 
{
  Discount();
}
void Discount()
{
  string day;
  int total_purchase_amount;
  float sunday_amount , other_day_amount;
  float discounted_price, discounted_price1;
  string sunday;
  cout << "Enter Total Purchase able amount: ";
  cin >>  total_purchase_amount;
  cout << "Enter Day: ";
  cin >> day; 
  if (day != "sunday") {
  discounted_price1 = (total_purchase_amount * 5)/100;
  other_day_amount = (total_purchase_amount) -     (discounted_price1);
  cout << "Your Payable Amount is: " << other_day_amount ;
  }
   if (day == "sunday") {
   discounted_price = (total_purchase_amount * 10)/100;
   sunday_amount = (total_purchase_amount) - (discounted_price);
  cout << "Your Payable Amount is: " << sunday_amount;
  }
}