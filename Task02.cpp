#include <iostream>

bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    int num;
    std::cout << "Please enter your number:" << std::endl;
    std::cin >> num;
    isEven(num) ? std::cout << "The number is even" << std::endl : std::cout << "The number is odd" << std::endl;
}