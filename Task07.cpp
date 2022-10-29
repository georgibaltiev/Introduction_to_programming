#include <iostream>

bool isWithinRange(int lowerBound, int upperBound, int a)
{
    return (a >= lowerBound && a <= upperBound);
}

void askUser(int from, int to)
{
    int num;
    do
    {
        std::cout << "Please enter a number:" << std::endl;
        std::cin >> num;
        if (isWithinRange(from, to, num))
            std::cout << "This number is within range! " << std::endl;
    } while (!isWithinRange(from, to, num));
}

int main()
{
    int from, to;
    std::cout << "Please enter your bounds:" << std::endl;
    std::cin >> from >> to;
    if (from >= to)
    {
        askUser(to, from);
    }
    else
        askUser(from, to);
}