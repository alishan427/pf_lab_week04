#include <iostream>
using namespace std;
void pass();
main() 
{  
  while(true)
  {
  pass();
  }
}
void pass()
{  int marks;
   cout << "Enter Your Marks: "; 
   cin >> marks;
 
   if (marks == 50)
   {  
     cout << "pass" << endl;
    }
   if (marks > 50)
   {
   cout << " pass "  << endl;
   }
  if (marks < 50)
  {
  cout << "fail"  << endl;
  }
}



