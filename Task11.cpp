#include <iostream>

int gcd(int a, int b)
{
    while (a % b != 0)
    {
        int remainder = a % b;
        if (remainder == 0)
        {
            return b;
        }
        a = b;
        b = remainder;
    }
    return b;
}

int main()
{
    int a, b, c, d;
    std::cout << "Please enter your 4 numbers: " << std::endl;
    std::cin >> a >> b >> c >> d;
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0)
        std::cout << "Your input is invalid!" << std::endl;
    else
    {
        int gcdAB = gcd(a, b);
        int gcdCD = gcd(c, d);
        int gcdABCD = gcd(gcdAB, gcdCD);
        std::cout << "Greatest common divisor of A & B - " << gcdAB << std::endl;
        std::cout << "Greatest common divisor of C & D - " << gcdCD << std::endl;
        std::cout << "Greatest common divisor of all of them - " << gcdABCD << std::endl;
    }
}