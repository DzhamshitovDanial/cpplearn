#include <iostream>

int main()
{
    int n {67};
    [[maybe_unused]] int m {1488};
    std::cout << "Enter a Number";
    int x {};
    std::cin >> x;
    std::cout << "Hello, world" <<'\n';
    std::cout << "You entered:" << x << std::endl;
    std::cout << n;
    return 0;
}
