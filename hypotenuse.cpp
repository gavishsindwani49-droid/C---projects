#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    std::cout << "Enter the value of Perpendicular: ";
    std::cin >> a;

    std::cout << "Enter the value of base: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b , 2);
    c = sqrt(a + b);
    std :: cout << "Result: " << c;

    return 0;
}