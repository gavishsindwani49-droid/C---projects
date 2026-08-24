#include <iostream>
#include <cmath>
#include <ctime>

int userinput();
int compinput();
std::string result(int userchoice, int compchoic);

int main(){

    std::cout << "***** Welcome to the ROCK PAPER SCISSOR GAME*****"<< '\n' ;
    std::cout << "*************************************************"<< '\n' ;


    int userchoice = userinput();
    int compchoice = compinput();

    switch(userchoice){
        case 1:
            std::cout << "you chose Rock"<< '\n';
            break;
        case 2: 
            std::cout << "You chose scissor"<< '\n';
            break;
        case 3:
            std::cout << "you chose scissors" << '\n';
            break; 
        default:
            std::cout << "Choose a valid move"<< '\n';
            break;
    }

    switch(compchoice) {
        case 1:
            std::cout << "Computer Chose rock"<< '\n';
            break;
        case 2:
            std::cout << "Computer chose paper"<< '\n';
            break;
        case 3:
            std::cout << "Computer chose scissor"<< '\n';
            break;
    }

    result(userchoice, compchoice);
    
    return 0;
}
int userinput(){

    int choice;
    do{    
        std::cout << "Choose your option"<< '\n';
        std::cout << "1. Rock"<< '\n';
        std::cout << "2. Paper"<< '\n';
        std::cout << "2. Scissor"<< '\n';
        std::cout << "Enter your option: ";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);
    }while (choice < 1 || choice > 3);    
    
    return choice;
}
int compinput(){
    srand(time(NULL));
    return rand() % 3 + 1;
}
std::string result(int userchoice, int compchoice){

    std::string winner;

    if(userchoice == compchoice){
        std::cout << "IT's A TIE"<< '\n';
    }
    else if(userchoice == 1 && compchoice == 2||
            userchoice == 2 && compchoice == 3 ||
            userchoice == 3 && compchoice == 1){
        std::cout << "YOU LOSE!"<< '\n';
    }
    else{
        std::cout << "YOU WIN!";
    }
    return winner;
}