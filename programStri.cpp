#include <iostream>
#include <string>

int main(){
    std::string firstName = "John ";
    std::string lastName = "Doe";
    std::string fullName = firstName.append(lastName);
    std::cout << fullName << std::endl;

    std::string x = "10";
    std::string y = " 20";
    std::string z = x + y;
    std::cout << z << std::endl;
}