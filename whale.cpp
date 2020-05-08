#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main()
 {
string inputString = "a whale of a deal!";
vector<char>vowels={'a', 'e', 'i', 'o','u'};
vector<char>results;//since passing just one character have to use char//
for(int i = 0; i < inputString.size(); i++)
{
  for(int x =0; x < vowels.size(); x++)
  {
    if (inputString[i] == vowels[x])
    {
      results.push_back(vowels[x]);
      if (vowels[x] == 'e' || vowels[x]== 'u')
      {results.push_back(vowels[x]);}
    }

  }
}
//Output Vector//
for (auto a: results)
{
cout << a;}
cout << '\n';

  // Whale, whale, whale.
  // What have we got here?

}
