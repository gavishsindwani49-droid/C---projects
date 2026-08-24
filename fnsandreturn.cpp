#include <iostream>
std::string concate(std::string string1 , std::string string2);
int main(){

    std::string firstname = "Gavish";
    std::string lastname = "Sindwani";
    std::string fullname = concate(firstname, lastname);

    std::cout << "Hello " << fullname;


    return 0;
}
std::string concate(std::string string1 , std::string string2){
    return string1 + " " + string2;
}