#include <iostream>

int main() {

    int month;
    std::cout << "Enter the month number: ";
    std::cin >> month;
    switch(month){
        case 1:
            std::cout<< "It is January";
            break;
        case 2:
            std::cout<< "It is February";
            break;
        case 3:
            std::cout<< "It is March";
            break;
        case 4:
            std::cout<< "It is April";
            break;
        case 5:
            std::cout<< "It is May";
            break;
        case 6:
            std::cout<< "It is June";
           break;
        case 7:
            std::cout<< "It is july";
            break;
        case 8:
            std::cout<< "It is August";
            break;
        // etc
        default:
            std::cout<< "Enter a valid month number";

    }
    
    return 0;
}