#include <iostream>

long convertToBinary(int number)
{
    long newNum = 0;
    int powerTen = 1;
    while (number > 0)
    {
        int digit = number % 2;
        newNum += (powerTen * digit);
        number /= 2;
        powerTen *= 10;
    }
    return newNum;
}
int main()
{
    unsigned int number;
    std::cout << "Please enter your number:" << std::endl;
    std::cin >> number;
    std::cout << convertToBinary(number) << std::endl;
}