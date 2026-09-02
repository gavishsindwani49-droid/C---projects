#include <iostream>
int factorialbyiteration(int num);
int factorialbyrecursion(int num);
int main (){

    std::cout << factorialbyiteration(10) << '\n';
    std::cout << factorialbyrecursion(10);
    return 0;
} 
int factorialbyiteration(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}
int factorialbyrecursion(int num){
    if(num > 1){
        return num * factorialbyrecursion(num - 1);
    }
    else{
        return 1;
    }
}