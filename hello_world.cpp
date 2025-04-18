#include <iostream>
#include <string>

// Let's pretend that I didn't fix that in the first part of the homework!
// Getting rid of this shit --> using namespace std;

int main() {
    // Get user name here!
    std::string name;
    std::getline(std::cin, name);

    // Greet the user now!
    std::cout << "Hello, World from " << name << "!\n";
}
