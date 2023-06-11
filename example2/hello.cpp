#include <iostream>

extern const char *getMessage();

void greet() {
    std::cout << getMessage() << "\n";
}

int main() {
    greet();
} 