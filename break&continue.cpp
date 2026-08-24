#include <iostream>

int main() {
    //break - to break out of a loop
    //continue - to skip an itteration
    for(int i =1;i <= 20;i++){
        if(i == 13){
            continue;
        }
        std::cout << i << '\n';
    }

    return 0;
}