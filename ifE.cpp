#include <iostream>

int main(){

    int a, b;
    std::cout << "Introdueix dos nombres enters: " << std::endl;
    std::cin >> a >> b;

    if (a>b){
        std::cout << "El primer nombre és més gran" << std::endl;
    } 
    else if (a<b){
        std::cout << "El segon nombre és més gran" << std::endl;
    }

    int time = 20;
    std::string result = (time < 18) ? "Good day." : "Good evening."; //If simplificat --> variable = (condition) ? expressionTrue : expressionFalse;
    std::cout << result << std::endl;

    std::string message = (time < 12) ? "Good morning."
    : (time < 18) ? "Good afternoon.": "Good evening.";
    std::cout << message << std::endl;
}