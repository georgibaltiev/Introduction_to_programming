#include <iostream>

bool isPositive(int num)
{
    return num > 0;
}

bool isNegative(int num)
{
    return num < 0;
}

int main()
{
    int num;
    std::cout << "Please enter your number:" << std::endl;
    std::cin >> num;
    if (isPositive(num))
        std::cout << "Your number is positive" << std::endl;
    else if (isNegative(num))
        std::cout << "Your number is negative" << std::endl;
    else
        std::cout << "Your number is neither positive nor negative" << std::endl;
}