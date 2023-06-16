#include <iostream>
#include <list>
std::string Input;
void print(std::string String) {
    std::cout << String;
}
void eprint(std::string String) {
    std::cout << String << std::endl;
}
std::string input() {
    std::cin >> Input;
    return Input;
}
void printlist(std::list<std::string> const &list) {
    for (auto const &i: list) {
        std::cout << i << std::endl;
    };
}