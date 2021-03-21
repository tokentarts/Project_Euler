/** Summer Moreland - Problem 2 - Project Euler **/
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
    printf("Project Euler: Problem 2");

    int total_sum = 0;
    int num1 = 1;
    int num2 = 2;
    int next_number = 0;

    vector<int> fib_nums;
    fib_nums.push_back(1);
    fib_nums.push_back(2);

    for (int i = 0; i < 4000000; i++)
    {
        next_number = num1 + num2;
        num1 = num2;
        num2 = next_number;
        fib_nums.push_back(next_number);
        i = next_number;
    }

    printf("\nFibonacci sequence:");
    for (int i = 0; i < fib_nums.size(); i++)
    {
        printf(" %d", fib_nums[i]);
        if (fib_nums[i] % 2 == 0)
        {
            total_sum += fib_nums[i];
        }
    }

    printf("\nTotal sum: %d", total_sum);
}