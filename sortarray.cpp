#include <iostream>
void sort(int numbers[] ,int size);
int main(){

    int numbers[] = {10,7,6,3,9,1,5,2,4,8};
    int size = sizeof(numbers)/ sizeof(numbers[0]);

    sort(numbers , size);

    for(int element : numbers){
        std :: cout << element << " ";
    }

    return 0;
}
void sort(int numbers[] ,int size){
    int temp;
    for(int i = 0 ; i < size - 1 ; i++){ 
        for(int j = 0 ; j < size - i -1 ; j++){
            if(numbers[j] > numbers[j + 1]){
                temp = numbers[j];
                numbers[j] = numbers[j +1];
                numbers[j + 1] = temp;  
            }
        }
    }
} 