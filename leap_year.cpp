#include <iostream>
using namespace std;
bool digitCheck(int year);
int main() 
{
  int year;
  std::cout<< "Enter the current year "<<std::endl;
  cin >> year;
  //4 digit check//
  if(digitCheck(year)) 
  {
    if((year % 4) ==0) 
    {
      if((year % 100) ==0 && (year % 400)!= 0)
        cout <<"This is not a leap year"<<endl;
      else
        cout<<"That's a leap year";
    }
     else
     cout<<"That is not a leap year";

  }
  else
  {
    cout <<"Invalid Number entered"<<endl;
  }
  
return 0;
  
}  


bool digitCheck(int year)
{
  if ((year > 999) && (year < 10000))
  return true;
  else
  return false;
}
