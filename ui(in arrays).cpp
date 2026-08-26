#include<iostream>

int main(){

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0 ;i < size; i++){
        std::cout << "Enter a Food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin , temp);
        if(temp == "q"){ // to quit if not 5 like food
            break;
        }
        else{
            foods[i] = temp;
        }
    } 

    std::cout << "you like the following food:\n";

    for(int i = 0 ; !foods[i].empty(); i++){ // to clear any blank spaces in output
        std::cout << foods[i] << '\n';
    }

    return 0;
}