#include <iostream>
#include <string>

struct student {
        std::string name;
        int age;
        char grade;

    };

int main(){

    student student1; // Create a structure variable called student1
    student1.name = "John";
    student1.age = 20;
    student1.grade = 'A';

    student student2;
    student2.name = "Alice";
    student2.age = 22;
    student2.grade = 'B';

    std::cout << student1.name << " is " << student1.age << " years old and has a grade of " << student1.grade << ".\n";
    std::cout << student2.name << " is " << student2.age << " years old and has a grade of " << student2.grade << ".\n";

}