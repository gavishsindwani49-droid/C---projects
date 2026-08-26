#include <iostream>

int main(){

    const int SIZE = 100;
    std::string foods[SIZE];

    fill(foods , foods + SIZE , "Pizza"); // for full
    fill(foods , foods + (SIZE/2) , "Hamburger"); // for first half
    fill(foods + (SIZE/2), foods + SIZE, "LND"); // for second half

    for(std::string food : foods){
        std::cout << food << '\n';
    }
    return 0;
}