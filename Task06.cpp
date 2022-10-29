#include <iostream>

bool isCapitalLetter(char s)
{
    return (s >= 'A' && s <= 'Z');
}

bool checkSymbol(char s)
{
    return ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'));
}

int main()
{
    char symbol;
    std::cout << "Please enter your symbol:" << std::endl;
    std::cin >> symbol;
    if (checkSymbol(symbol) && isCapitalLetter(symbol))
        std::cout << "This is a capital letter" << std::endl;
    else
        std::cout << "This is not a capital letter" << std::endl;
}