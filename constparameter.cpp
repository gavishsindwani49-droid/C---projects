#include <iostream>
void printinfo(const std::string name ,const int age);
//const parameter = parameter that is efffectively read - only
//                  code is more secure & conveys intent                                 
//                  useful for pointers and references
int main(){

    std::string name = "Gavish";
    int age = 21;

    printinfo(name , age);

    return 0;
}
void printinfo(const std::string name ,const int age) {
    std::cout << name << '\n';
    std::cout << age << '\n';
}