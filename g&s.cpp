#include <iostream>
//abstraction = hiding unnecessary data from outside a class
//getter = function that makes a private attribute readable
//setter = function that makes a private attribute writable

class Stove{
    private:
        int temperature = 0;
    public:

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = temperature;
        }
        else if(temperature >=10){
            this->temperature = 10;
        }
        else{
            this-> temperature = temperature;
        }   
    }

};

int main(){ 

    Stove stove;

    stove.setTemperature(66);



    std::cout << "The temperature is : " << stove.getTemperature();


    return 0;
}