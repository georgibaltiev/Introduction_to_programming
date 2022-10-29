#include <iostream>

int sum(int a, int b)
{
    return (a + b);
}

int main()
{
    int a, b;
    std::cout << "Please enter your 2 numbers:" << std::endl;
    std::cin >> a >> b;
    std::cout << "The sum of the 2 numbers is " << sum(a, b) << std::endl;
}