#include <stdio.h>

struct Question {
    char question[200];
    char options[4][50];
    char answer;
};

int main() {
    struct Question quiz[5] = {
        {"What is the capital of India?", {"A. Mumbai", "B. Delhi", "C. Kolkata", "D. Chennai"}, 'B'},
        {"Which language is used for system programming?", {"A. C", "B. Python", "C. Java", "D. HTML"}, 'A'},
        {"2 + 2 * 2 = ?", {"A. 6", "B. 8", "C. 4", "D. 2"}, 'A'},
        {"Which planet is known as Red Planet?", {"A. Earth", "B. Venus", "C. Mars", "D. Jupiter"}, 'C'},
        {"Which animal is known as King of Jungle?", {"A. Lion", "B. Tiger", "C. Elephant", "D. Bear"}, 'A'}
    };

    char guess;
    int score = 0;

    printf("=== Simple Quiz Game ===\n");

    for(int i=0;i<5;i++) {
        printf("\nQ%d: %s\n", i+1, quiz[i].question);
        for(int j=0;j<4;j++) {
            printf("%s\n", quiz[i].options[j]);
        }
        printf("Enter your answer (A/B/C/D): ");
