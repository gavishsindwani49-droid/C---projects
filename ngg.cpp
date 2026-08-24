#include <iostream>
#include <ctime>
int main() {
    int userinp;
    int tries;
    srand(time(0));
    int randnum = rand() % 100 + 1;


    std::cout <<"******NUMBER GUESSING GAME******"<< '\n';

   
    do{
        std::cout<< "Enter a number: ";
        std::cin >> userinp;
        tries = tries + 1;

        if(userinp > randnum){
            std::cout<< "Guess too high"<<'\n';
        }
        else if(userinp < randnum){
            std::cout<< "Guess too low"<<'\n';
        }
        else{
            std::cout << "CORRECT! # of tries: "<< tries<< '\n';

        }
        

    }while(userinp != randnum);

 
    std::cout << "the answer was "<< randnum<<'\n';
    
    
    return 0;
}

