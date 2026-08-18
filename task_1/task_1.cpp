#include <iostream>

int main() {
    std::cout << "Enter number: ";
    int n;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Error: enter norm!" << std::endl;
        return 1;
    }

    long long factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    std::cout << n << "! = " << factorial << std::endl;

    return 0;
}
