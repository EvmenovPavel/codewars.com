#include <iostream>

long long factorial(int n)
{
    return n == 0 ? 1 : n * factorial(n - 1);
}

int main()
{
    std::cout << factorial(1) << std::endl;
    std::cout << factorial(2) << std::endl;
    std::cout << factorial(3) << std::endl;
    std::cout << factorial(4) << std::endl;
    std::cout << factorial(5) << std::endl;

    return 0;
}
