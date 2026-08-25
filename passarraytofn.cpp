#include <iostream>

double gettotal(double prices[], int size);

int main(){
    double prices[] = {49.99 , 50.32, 75 , 8.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = gettotal(prices, size);

    std::cout << "$" << total;

    return 0;
}
double gettotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}