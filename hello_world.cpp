#include <iostream>
#include <string>

// Let's pretend that I didn't fix that in the first part of the homework
// using namespace std;

int main() {
    // Get user name
    std::string name;
    std::getline(std::cin, name);

    // Greet the user
    std::cout << "Hello, World from " << name << "!\n";
}
