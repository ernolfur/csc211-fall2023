#include <iostream>

int fibonacci (int n);

int main () {
    int input;

    std::cout << "Find the Fibonacci number given n = ";
    std::cin >> input;

    std::cout << "Given n = " << input << ", the Fibonacci number is " << fibonacci(input) << std::endl;

    return 0;
}

int fibonacci (int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}