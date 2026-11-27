#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "What is your name? ";
    std::cin >> name;

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "Next year you will be " << age + 1 << "." << std::endl;

    return 0;
}
