#include <iostream>

int calculate(int a, int b, char action)
{
    switch (action)
    {
    case '*':
        return (a * b);
        break;
    case '-':
        return (a - b);
        break;
    case '/':
    {
        if (b == 0)
        {
            std::cout << "This is not a possible operation - the program will return 0" << std::endl;
            return 0;
        }
        else
            return (a / b);
    }

    case '%':
        return (a % b);
    default:
        return (a + b);
    }
}

int main()
{
    int a, b;
    std::cout << "Please enter your 2 numbers:" << std::endl;
    std::cin >> a >> b;
    char action;
    std::cout << "Please enter the operation symbol" << std::endl;
    std::cin >> action;
    std::cout << calculate(a, b, action) << std::endl;
}