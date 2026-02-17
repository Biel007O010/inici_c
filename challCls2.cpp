#include <iostream>
#include <string>

class Dog{
    public:
        void bark(){
            std::cout << "Woof!!!" << std::endl;
        }
};

int main(){
    Dog dog1;
    dog1.bark();
}