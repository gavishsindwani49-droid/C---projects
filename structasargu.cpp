#include <iostream>

struct Car
{
    std::string model;
    int year;  
    std::string color;
};
void printcar(Car &car);
void paintcar(Car &car , std::string color);
int main() {
    
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color= "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color= "blue";

    paintcar(car1 , "Gold");
    paintcar(car2 , "Silver");

    printcar(car1);
    printcar(car2);
    return 0;
}
void printcar(Car &car){
    std::cout << &car<< '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintcar(Car &car , std::string color){
    car.color = color;
}