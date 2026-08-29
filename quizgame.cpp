#include <iostream>
#include <cmath>

int main() {
    
    std::string questions[] = {"1. In what year C++ was created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. is the earth flat?"};
    
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1966", "D. 1985"},
                                {"A. Guido van", "B. John", "C. Bjarne", "D. Mark zuck"},
                                {"A. C", "B. Python", "C. C#", "D. Java"},
                                {"A. Yes", "B. No", "C. Sometime", "D. Whats earth"}};
    
    char answerkey[] = {'D', 'C','A', 'B'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0 ; i < size ; i++){
        std::cout << "****************"<< '\n';
        std::cout << questions[i] << '\n';
        std::cout << "****************"<< '\n';

        for(int j = 0 ; j < sizeof(options[i])/sizeof(options[i][0]) ; j++){
            std::cout << options[i][j] << '\n';
        }
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerkey[i]){
            std::cout << "CORRECT\n";
            score++;
        }
        else{
            std::cout << "WRONG!\n";
            std::cout << "Answer: " << answerkey[i] <<'\n';
        }
    }

    std::cout << "Results: " << score << " out of 4 correct";

    return 0;
}