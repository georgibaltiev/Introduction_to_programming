#include <iostream>

int abs(int number)
{
    if (number >= 0)
        return number;
    else
        return (-1) * number;
}

double fabs(double number)
{
    if (number >= 10e-7)
        return number;
    else
        return (-1) * number;
}

int main()
{
    int intNum;
    std::cout << "Please enter your integer:" << std::endl;
    std::cin >> intNum;
    std::cout << "The absolute value is " << abs(intNum) << std::endl;
    double doubleNum;
    std::cout << "Please enter your double:" << std::endl;
    std::cin >> doubleNum;
    std::cout << "The absolute value is " << abs(doubleNum) << std::endl;
}