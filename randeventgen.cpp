#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL));
    int randnum = rand() % 5 + 1;

    switch(randnum){
        case 1:
            std::cout<< "you are Gay";
            break;
        case 2:
            std::cout<< "you are super gay";
            break;
        case 3:
            std::cout<< "you are ultra Gay";
            break;
        case 4:
            std::cout<< "you are a ni**r";
            break;
        case 5:
            std::cout<< "you are stpid mi**r";
            break;

    }


    return 0;
}