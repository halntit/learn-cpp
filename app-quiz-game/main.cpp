#include <iostream>

int main() {
    std::string questions[] ={
        "Who is the current president of the United States?",
        "What is the capital of the United States?",
        "What is the largest state in the United States?"
    };

    std::string answers[][4] = {
        {"A. Donald Trump", "B. Joe Biden", "C. Barack Obama", "D. George Bush"},
        {"A. New York", "B. Washington D.C.", "C. California", "D. Alaska"},
        {"A. Texas", "B. Alaska", "C. California", "D. Montana"}
    };

    std::string correctAnswers[] = {
        "B",
        "B",
        "B"
    };

    int score = 0;
    char guess;
    int size = sizeof(questions) / sizeof(questions[0]);
    for (int i = 0; i < size; i++) {
        std::cout << questions[i] << std::endl;
        for (int j = 0; j < 4; j++) {
            std::cout << j + 1 << ". " << answers[i][j] << std::endl;
        }

        std::cout << "Enter your answer: ";
        std::string tmp;
        std::getline(std::cin, tmp);

        if (tmp == correctAnswers[i]) {
            std::cout << "Correct!" << std::endl;
            score++;
        } else {
            std::cout << "Incorrect!" << std::endl;
        }
    }

    std::cout << "Your score is " << score << " out of " << size << std::endl;

    return 0;
}