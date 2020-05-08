#include <iostream>//cin & cout
#include <cstdlib>//generate random number
using namespace std;
int main() 
{
srand(time(NULL));  
  // Your future is here
std::cout<< "MAGIC 8-BALL: "<<std::endl;
int answer = std::rand() % 10; // get random numbers from 0-9
switch(answer)
{
  case 0:
  cout << "It is certain."<<endl;
  break;
   case 1:
  cout << "It is decidedly so."<<endl;
  break;
   case 2:
  cout << "Without a doubt."<<endl;
  break;
   case 3:
  cout << "Yes - definitely."<<endl;
  break;
   case 4:
  cout << "You may rely on it."<<endl;
  break;
   case 5:
  cout << "As I see it, yes."<<endl;
  break;
   case 6:
  cout << "Outlook good."<<endl;
  break;
   case 7:
  cout << "Yes."<<endl;
  break;
   case 8:
  cout << "Signs point to yes."<<endl;
  break;
   case 9:
  cout << "Very doubtful."<<endl;
  break;


}

}
