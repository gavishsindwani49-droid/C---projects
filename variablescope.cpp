#include <iostream>

int mynum = 3;// global variable

void printnum();

int main() {

    //int mynum = 1; // local variable
    printnum();
    std::cout << mynum;

    return 0;
}
void printnum(){
    std::cout << mynum;
}