#include <iostream>
#include <cmath>
#include <ctime>

float deposit();
float withdraw(float balance);
void viewbalance(float balance);

int main() {
    float balance = 100;
    int choice;

    std::cout << "********Welcome to the bank********"<<'\n';

    do{
        std::cout << "Choose your option: "<<'\n';
        std::cout << "1. View balance"<< '\n';         
        std::cout << "2. Deposit"<< '\n';
        std::cout << "3. Withdraw"<< '\n';
        std::cout << "4. Exit"<< '\n';
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        std::cin.clear();//to clear loop when typed any string
        fflush(stdin);  //to clear input buffer

        switch(choice){
            case 1:
                viewbalance(balance);
                break;
            case 2:
                balance = balance + deposit();
                viewbalance(balance);
                break;
            case 3:
                balance = balance - withdraw(balance);
                viewbalance(balance);
                break;
            case 4:
                std::cout<< "thank you for using the bank";
                break;
            default:
            std::cout << "Enter a valid amount";
        }
    }while(choice != 4);
    return 0;
}
void viewbalance(float balance){
    std::cout << "Your balance is: " << "$" <<balance<<'\n';
}
float deposit(){
    float amount = 0;
    std::cout << "Enter the amount to deposit: $";
    std::cin >> amount;

    if(amount < 0){
        std::cout << "Enter a valid amount";
        return 0;
    }
    else{
        std::cout<< "Successfully deposited $"<< amount << '\n';
        return amount; 
    }
}
float withdraw(float balance){
    float amount;
    std::cout << "Enter the amount to withdraw: $";
    std::cin >> amount;

    if (amount < 0){
        std::cout<< "Enter a positive amount";
        return 0;
    }
    else if(amount > balance){
        std::cout << "Amount exceeded bank balance";
        return 0;
    }
    else{
        std::cout<< "amount successfully withdrawn"<<'\n';
        return amount;
    }
}