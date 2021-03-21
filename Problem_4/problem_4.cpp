/** Summer Moreland - Problem 4 - Project Euler
Find the largest palindrome made from the product of two 3-num product numbers. **/
#include <iostream>
#include <string.h>

using namespace std;

int reverse_me(int number, int base = 10)
{
    int new_number = 0;

    while (number != 0)
    {
        int num = number % base;
        new_number = new_number * base + num;
        number /= base;
    }
    return new_number;
}

bool palindrome(int number)
{
    return number == reverse_me(number);
}

int main()
{
    std::cout << "Project Euler: Problem 4\n\n";
    std::cout << "Valid palindrones: \n";

    unsigned int largest = 0;
    for (int i = 100; i < 999; i++)
    {
        for (int j = i; j < 999; j++)
        {
            int product = i * j;
            if (product < largest)
                break;

            if (palindrome(product))
            {
                cout << "number 1 = " << i << "    *    number 2 = " << j << "    =    " << product << endl;
                largest = product;
            }
        }
    }
    cout << "\nLargest palindrone = " << largest << endl;
    return 0;
}