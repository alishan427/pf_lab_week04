#include <iostream>
using namespace std;
void add();
main() 
{  while(true){

  add(); 
  } 
} 

void add()

{ int number1; 
  int number2;
  int sum;
  char op;
  cout << "enter num1: ";
  cin >> number1;
  cout << "enter num2: ";
  cin >> number2;
  cout << "enter operator (+,-,/,*): ";
  cin >> op;
  sum = number1 + number2;
  if (op == '+')
  { cout << "sum is: " << sum << endl ;
  }


}