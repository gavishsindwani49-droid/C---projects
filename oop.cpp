#include <iostream>
//object = a collection of attributes and methods
//         theay can have characteristics and couldperform actions
//          can be used to mimic real world items (ex. phone ,class ,book)
//          created from a class which acts as"blue - print"

class Human{
    public:
        std::string name;
        std::string ocupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This perosn is drinking\n";
        }
        void sleep() {
            std::cout << "This person is sleeping\n";
        }
};


int main(){

    Human human1;
    Human human2;

    human1.name = "Rick";
    human1.ocupation = "Scientist";
    human1.age = 70;

    human2.name = "Morty";
    human2.ocupation = "LOdu";
    human2.age = 50;

    std::cout << human2.name << '\n';
    std::cout << human2.ocupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();


    return 0;
}