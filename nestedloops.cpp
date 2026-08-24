#include <iostream>

int main() {
    for(int i = 1; i <= 10; i++) {
        for(int j = 1 ; j <= 10; j++){
            std::cout << j << ' ';
        }
        std::cout<< '\n'; // do not add i again as it repeats the column from 1-10

    }
      
    return 0;
}