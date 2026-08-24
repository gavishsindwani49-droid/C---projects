#include <iostream>

int main() {
    // example 1
    //int x = 3.14; // output = 3
    //double x = 3.14; // output = 3.14
    double x = (int) 3.14 ;// 3.14 stored as 3

    std :: cout << x<< '\n';
    std :: cout << (char) 100 << '\n';

    // example 2
    int correct_question = 8;
    int tot_ques = 10;
    double score = correct_question/(double) tot_ques * 100;
    std::cout << score << "%";

    return 0;
}