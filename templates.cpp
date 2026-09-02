#include <iostream>
//Function template = describes what a function look like
//                    can be used to generate as many overloaded functions
//                    as needed ,  each using different data types
template <typename T , typename U >
auto max(T x , U y){
    return (x > y) ? x : y;
}
int main() {

    std::cout << max(1, 2) << '\n'; // integer
    std::cout << max('1', '2')<< '\n'; // char
    std::cout << max(1.2, 2.2) << '\n';// double
    std::cout << max(1 , 2.3) << '\n'; // mixed

    return 0;
}