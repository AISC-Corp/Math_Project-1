#include <list>
#include <iostream>
std::string Student_Answer;
bool Correct;
class Problem {
    public:
    std::string WordProblem; 
    std::string Answer; 
    void AskQuestion() {
        std::cout << WordProblem << std::endl;
        std::cin >> Student_Answer;
        if (Student_Answer == Answer) {
            Correct = true;
        }
    }
};
void CorrectReset() {
    Correct = false;
}
Problem P1{"X^2-10=90, what is X equal to? A: ", ""};
Problem P2{"", ""};
Problem P3{"", ""};