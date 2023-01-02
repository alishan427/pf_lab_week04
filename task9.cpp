#include <iostream>
using namespace std;
void print_name();
main() 
{  while(true) {
  print_name();
 }  
}

void print_name()

{
  string name ;
  cout << "Enter Name You Wants To Print ";
  cin >> name;
  if (name == "irzam")
  {cout << " irzam" << endl ;
  }
}