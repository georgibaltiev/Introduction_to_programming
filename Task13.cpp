#include <iostream>

bool isPrimary(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

void printPrimaries(int number)
{
    for (int i = 2; i <= number; i++)
    {
        if (isPrimary(i))
            std::cout << i << " ";
    }
    std::cout << std::endl;
}

void checkExistenceOfAPossibleSum(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (isPrimary(i))
        {
            int addition = number - i;
            if (isPrimary(addition))
            {
                std::cout << number << " can be shown as a sum of 2 primaries - " << i << " & " << addition << std::endl;
                break;
            }
        }
    }
}

int main()
{
    int number;
    std::cout << "Please enter a number:" << std::endl;
    std::cin >> number;
    if (number < 1)
        std::cout << "Invalid input" << std::endl;
    else
    {
        printPrimaries(number);
        checkExistenceOfAPossibleSum(number);
    }
}