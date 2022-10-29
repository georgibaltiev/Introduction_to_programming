#include <iostream>

void print(char s, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int number;
    std::cout << "Please enter a number:" << std::endl;
    std::cin >> number;
    if (number > 0)
    {
        char symbol;
        std::cout << "Please enter a symbol:" << std::endl;
        std::cin >> symbol;
        print(symbol, number);
    }
    else
        std::cout << "Invalid input" << std::endl;
}