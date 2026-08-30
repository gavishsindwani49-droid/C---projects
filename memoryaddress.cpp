#include <iostream>

// memory address = a location in memory where data is stored
// a memory address can be accessed with & (address of operator)

int main() {

    std::string name = "Gavish";
    int age = 21;
    bool student = true;
    
    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';
    // run it for memory address
    return 0;
}