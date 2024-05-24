/*#include "recursion2.h"
#include <iostream>

int FactorialCalculator::calculateFactorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * calculateFactorial(n - 1); // Recursive call
    }
}

int main()
{
    FactorialCalculator calculator;
    int number = 5;
    int factorial = calculator.calculateFactorial(number);
    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
    return 0;
}
*/

#include <iostream>

class FactorialCalculator
{
public:
    int calculateFactorial(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        else
        {
            return n * calculateFactorial(n - 1); // Recursive call
        }
    }
};

int main()
{
    FactorialCalculator calculator;
    int number = 2;
    int factorial = calculator.calculateFactorial(number);
    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
    return 0;
}
