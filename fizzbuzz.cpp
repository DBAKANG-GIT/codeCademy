// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
 int count = 1;
 for (;count <= 100; count++)
 {
     if ((count % 5) ==0 && (count % 3) ==0)
     {
         cout << "FizzBuzz" << endl;
     }
     else if ((count % 3) ==0)
     {
         cout << "Fizz" << endl;
     }
     else if ((count % 5) ==0)
     {
         cout << "Buzz" << endl;
     }
     else
     cout << count<<endl;
     
}}
