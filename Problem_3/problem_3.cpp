/** Summer Moreland - Problem 3 - Project Euler **/
//What is the largest prime factor of the number 600851475143 ?

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    std::cout << "Project Euler: Problem 3\n";

    long int largest_number = 0;
    long int number = 600851475143;
    vector<long int> prime_numbers;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            prime_numbers.push_back(i);
            number = number / i;
        }
    }

    std::cout << "Prime numbers:";
    for (int i = 0; i < prime_numbers.size(); i++)
    {
        std::cout << prime_numbers[i] << " ";
        if (prime_numbers[i] > largest_number)
        {
            largest_number = prime_numbers[i];
        }
    }
    std::cout << "\nLargest prime number: " << largest_number;
}