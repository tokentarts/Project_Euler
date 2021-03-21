/** Summer Moreland - Problem 1 - Project Euler **/

#include <iostream>
using namespace std;

//Find the sum of all the multiples of 3 or 5 below 1000.
int main()
{
    std::cout << "Project Euler: Problem 1\n";
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    std::cout << "Total sum: " << sum << '\n';
}
