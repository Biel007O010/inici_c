#include <iostream>

int main() {
    bool isCodingFun = true;

    std::cout << std::boolalpha;   // print as true/false
    std::cout << isCodingFun << "\n";  // Outputs true

    std::cout << std::noboolalpha; // reset to 1/0
    std::cout << isCodingFun << "\n";  // Outputs 1
}