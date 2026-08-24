#include <iostream>
#include <ctime>

int main() {
// psudo random = not truly random but close
    srand(time (NULL));

    int number = (rand() % 6) + 1 ;/* % divides the rand nuber by 6 
    and gives the remainder as result(0 - 5, adding 1 gives 1 - 6)*/ 
        std::cout << number;
    return 0;
}