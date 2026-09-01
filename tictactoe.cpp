#include <iostream>
#include <ctime>

void drawboard(char *spaces);
void playermove(char *spaces, char player);
void computermove(char *spaces, char computer);
bool checkwinner(char *spaces, char player ,char computer);
bool checktie(char *spaces);

int main(){

    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player ='X';
    char computer = 'O';
    bool running = true;

    drawboard(spaces);

    while(running){
        playermove(spaces , player);
        drawboard(spaces);

        if(checkwinner(spaces, player, computer )){
            running = false;
            break;
        }
        else if(checktie(spaces)){
            running = false;
            break;
        }

        computermove(spaces , computer);
        drawboard(spaces);
        if(checkwinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checktie(spaces)){
            running = false;
            break;
        }
    }
    std::cout << "\nThank you for playing the game" ;
    return 0;
}
void drawboard(char *spaces){
    std::cout << "       |       |       " << '\n';
    std::cout << "   " << spaces[0] << "   |   " <<  spaces[1] << "   |   " <<  spaces[2] << "   " << '\n';
    std::cout << "_______|_______|_______" << '\n';
    std::cout << "       |       |       " << '\n';
    std::cout << "   " << spaces[3] << "   |   " <<  spaces[4] << "   |   " <<  spaces[5] << "   " << '\n';
    std::cout << "_______|_______|_______"<< '\n';
    std::cout << "       |       |       " << '\n';
    std::cout << "   " << spaces[6] << "   |   " <<  spaces[7] << "   |   " <<  spaces[8] << "   " << '\n';
    std::cout << "       |       |       " << '\n';
    std::cout << '\n';
}
void playermove(char *spaces, char player){
    int number = 0;

    do{
        std::cout << "Enter any number between 1-9: ";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(!number > 0 || !number < 8);
}
void computermove(char *spaces, char computer){
    int number = 0;
    srand(time(0));
    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}
bool checkwinner(char *spaces, char player,char computer){
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0]  == player ? std::cout << "You win!" : std :: cout << "You lose";
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3]  == player ? std::cout << "You win!" : std :: cout << "You lose";
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6]  == player ? std::cout << "You win!" : std :: cout << "You lose";
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0]  == player ? std::cout << "You win!" : std :: cout << "You lose";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2]  == player ? std::cout << "You win!" : std :: cout << "You lose";
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0]  == player ? std::cout << "You win!" : std :: cout << "You lose";
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1]  == player ? std::cout << "You win!" : std :: cout << "You lose";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2]  == player ? std::cout << "You win!" : std :: cout << "You lose";
    }
    else {
        return false;
    }
    return true;
}
bool checktie(char *spaces){

    for(int i = 0 ; i < 9 ; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }  
    
    std::cout << "Its a tie\n";

    return true;

}