#include <iostream>

//pointers = variable that stores a memory address of another variable
//           sometimes it's easier to work with an address

// & address of operator
// * dereference operator
int main(){ 
    std::string name = "Bro";
    int age = 21;
    std::string freepizza[5] = {"pizza1", "pizza2","pizza3","pizza4","pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std :: string *pFreepizza = freepizza;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreepizza << '\n';

    return 0;
}