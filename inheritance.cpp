#include<iostream>
//inheritance = a class can recieve attributes and methods from another class
//              childfren class inherit from a parent class
//              helps to reuse similar code found within multiple classes

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
};
class Dog : public Animal{
    public:

    void bark(){
        std::cout << "The dog goes woof";
    }

};
int main(){

    Dog dog;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();
    return 0;
}