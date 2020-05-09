#include <iostream>
#include <vector>
using namespace std;
// Define first_three_multiples() here:
vector<int>first_three_multiples(int num)
{
    vector<int>first_three_multiples(3);
    for (int i = 0; i < 3; i++)
    {
        first_three_multiples.at(i) = num * (i + 1);
    }
    return first_three_multiples;

}
int main() {

    for (int element : first_three_multiples(8)) {
        std::cout << element << "\n";
    }

}
