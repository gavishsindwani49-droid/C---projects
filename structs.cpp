#include <iostream>
//structs = a structure that groups related variable under one name
//          structs can contain amny different data types(string, integer ,etc)
//          variables in a struct are known as "members"
//          members can be access with "Class Member Access Operation
struct student{
    std::string name;
    double gpa;
    bool enrolled;
};
int main(){

    student student1;
    student1.name = "spongebob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';
    return 0;
}