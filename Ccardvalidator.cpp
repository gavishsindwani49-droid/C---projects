#include <iostream>
#include <cmath>

int getdigit(const int number);
int sumEvenDigit(const std::string cardno);
int sumOddDigit(const std::string cardno);

int main(){

    std::string cardno;
    int result = 0;

    std::cout << "Enter a card no # ";
    std::cin >> cardno;

    result = sumEvenDigit(cardno) + sumOddDigit(cardno);

    if(result % 10 == 0){
        std::cout << cardno << " Is a valid no.";
    }
    else{
        std::cout << cardno << " Is not a valid no.";
    }
    
    return 0; 
}
int getdigit(const int number){
    return number % 10 + (number /10 % 10) ;
}
int sumEvenDigit(const std::string cardno){
    int sum = 0;

    for(int i = cardno.size() - 1; i >= 0; i -=2){
        sum += cardno[i] - '0';
    }
    return sum;
}
int sumOddDigit(const std::string cardno){
    int sum = 0;
    for(int i = cardno.size() - 2; i >= 0; i -=2){
        sum += getdigit((cardno[i] - '0')*2);
    }
    return sum;    
}