#include <iostream>

int pow(int num, unsigned n)
{
    int newNum = 1;
    for (int i = 1; i <= n; i++)
    {
        newNum *= num;
    }
    return newNum;
}

int main()
{
    int number, n;
    std::cout << "Please enter your base:" << std::endl;
    std::cin >> number;
    std::cout << "Please enter your power:" << std::endl;
    std::cin >> n;
    std::cout << number << "^" << n << " = " << pow(number, n) << std::endl;
}