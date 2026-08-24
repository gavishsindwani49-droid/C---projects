#include <iostream>

int main() {

    std::string name;
    std::string age;

    std::cout << "What's your full name: ";
    std::getline(std::cin,name);// required for input with spaces in it
    std::cin >> name;// for input

    std::cout << "Hello " << name << '\n';
    std::cout << "What's Your age: ";
    std::cin >> age; //for input
    std::cout << "YOur age is " << age<<'\n';
    
    return 0;
}