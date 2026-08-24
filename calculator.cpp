#include <iostream>
#include <cmath>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout<< "***********CALCULATOR PROGRAM************\n";

    std::cout<<"Enter Number 1: ";
    std::cin >> num1;

    std::cout<< "Enter Number 2: ";
    std::cin>> num2;

    std::cout<< "Enter the operator(+,-,/,*): ";
    std::cin >> op;

    switch (op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: \n" << result<<'\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: \n" << result <<'\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: \n" << result<<'\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;

        default:
            std::cout << "Enter a valid Operator\n";
            break;
    }
    

    std::cout<< "*****************************************";
    
    return 0;
}