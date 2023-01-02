#include <iostream>
using namespace std;
void calculate();
main() 
{  while (true) {
  calculate(); 
  }
} 

void calculate()

{ int number1; 
  int number2;
  int sum;
  int subtract;
  int division;
  int multiplication;
  char op;
  cout << "enter num1: ";
  cin >> number1;
  cout << "enter num2: ";
  cin >> number2;
  cout << "enter operator (+,-,/,*): ";
  cin >> op;
  sum = number1 + number2;
  if (op == '+')
  { cout << "sum is: " << sum << endl;}
  subtract = number1 - number2;
  if (op == '-')
  { cout << "subtract is: " << subtract << endl ;}
   division = number1/number2;
   if (op == '/')
  { cout << "division is: " << division << endl;}
   multiplication = number1*number2;
   if (op == '*')
  { cout << "multiplication is: " << multiplication << endl ; 
  
  }


}