#include <iostream>

int main()
{
    int m;
    int n;

    std::cout << "Enter a number: ";
    std::cin >> m;

    m = m + 1;
    n = 100 + m;

    std::cout << "n = " << n << std::endl;
    std::cout << "m = " << m << std::endl;

    return 0;
}
