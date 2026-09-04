#include <iostream>
//Enums = a user defined data type consists of paired named - integer
//        constants. Great if have a set of potential option 
enum Day {sunday , monday , tuesday , wednasday , thursday , fridat , saturday };
int main(){

    Day today = sunday;

    switch(today){
        case sunday:
            std::cout << "Today is sunday";
            break;
        case monday:
            std::cout << "Today is monday";
            break;
        case tuesday:
            std::cout << "Today is tuesday";
            break;
        case wednasday:
            std::cout << "Today is wednasday";
            break;
        case thursday:
            std::cout << "Today is thursday";
            break;
        case fridat:
            std::cout << "Today is fridat";
            break;        
        case saturday:
            std::cout << "Today is saturday";
            break;
    }


    return 0;
}