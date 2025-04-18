#include <iostream>
#include <string>

// Let's pretend that I didn't fix that in the first part of the homework
// using namespace std;

int main() {
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Hello, World from " << name << "!\n";
}
