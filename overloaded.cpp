#include <iostream>

void bakepizza();
void bakepizza(std::string top1);
void bakepizza(std::string top1, std :: string top2);

int main() {

    bakepizza("tomato", "onion");

    return 0;
}
void bakepizza(){
    std::cout << "Here is your pizza!" <<'\n';
}
void bakepizza(std::string top1){
    std::cout << "Here is your " << top1 <<  " pizza";
}
void bakepizza(std::string top1, std :: string top2){
    std::cout << "Here is your " << top1 << " and " << top2 << " pizza";
}