#include <iostream>

int nearestPowerOfTwo(int n)
{
    int firstAboveN = 1;
    while (firstAboveN < n)
    {
        firstAboveN *= 2;
    }
    int lastBelowN = (firstAboveN / 2);
    int distanceToLower = n - lastBelowN;
    int distanceToHigher = firstAboveN - n;
    if (distanceToHigher >= distanceToLower)
        return lastBelowN;
    else
        return firstAboveN;
}

int main()
{
    int number;
    std::cout << "Please enter your number:" << std::endl;
    std::cin >> number;
    if (number < 100 || number > 100000)
        std::cout << "Invalid input!" << std::endl;
    else
    {
        std::cout << "Nearest power of two to " << number << " - " << nearestPowerOfTwo(number) << std::endl;
    }
}