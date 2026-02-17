#include <iostream>
#include <string>

class Book{
    public:
        int year;
        std::string author;
        std::string title;
};

int main(){
    Book book1;

    book1.year = 2021;
    book1.author = "Richard Morales";
    book1.title = "Sons of the forest";

    Book book2;

    book2.year = 2017;
    book2.author = "Juan Michell";
    book2.title = "The Wind";

    std::cout << book1.author << " " << book1.title << " " << book1.year << std::endl;
    std::cout << book2.author << " " << book2.title << " " << book2.year << std::endl;
}