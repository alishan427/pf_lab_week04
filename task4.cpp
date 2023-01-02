#include <iostream>
using namespace std;
void odd_even();
main() 
{
odd_even();
}

void odd_even()
{ int number;
  cout << "Enter Number";
  cin >> number;
  if(number % 2 == 0)
  {cout << "this number is even";
  }           
  if (number % 2 != 0)      
  {cout << "this number is odd ";
  }

}