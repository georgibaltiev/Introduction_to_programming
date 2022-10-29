#include <iostream>

int numSum(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int breakDownToADigit(int number)
{
    while (number > 10)
    {
        number = numSum(number);
    }
    return number;
}

int main()
{
    int number;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number;
    if (number <= 0)
        std::cout << "Invalid input!" << std::endl;
    else
    {
        std::cout << breakDownToADigit(number) << std::endl;
    }
}