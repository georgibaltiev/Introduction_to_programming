#include <iostream>

void factorize(int number)
{
    if (number == 1)
        std::cout << number << std::endl;
    else
    {
        int numberCopy = number;
        for (int divisor = 2; divisor <= numberCopy; divisor++)
        {
            while (number % divisor == 0)
            {
                std::cout << divisor;
                number /= divisor;
                if (number != 1)
                    std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    int number;
    std::cout << "Please enter a number" << std::endl;
    std::cin >> number;
    if (number <= 0)
        std::cout << "Invalid input" << std::endl;
    else
    {
        factorize(number);
    }
}