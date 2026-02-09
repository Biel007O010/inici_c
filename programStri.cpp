#include <iostream>
#include <string>

int main(){
    std::string firstName = "John ";
    std::string lastName = "Doe";
    std::string fullName = firstName.append(lastName);
    std::cout << fullName << std::endl;
    //.length() i size() són equivalents, totes dues retornen la longitud de la cadena.
    std::cout << "La longitud de la cadena és de " << fullName.length() << " caràcters" << std::endl;
    std::cout << "La longitud de la cadena és de " << fullName.size() << " caràcters" << std::endl;

    std::cout << fullName[0] << std::endl; // Imprimeix el primer caràcter de la cadena
    lastName[0] = 'K'; // Modifica el primer caràcter de la cadena lastName
    std::cout << lastName << std::endl;
    std::cout << fullName.at(0) << std::endl; // Imprimeix el primer caràcter de la cadena utilitzant el mètode at()


    std::string x = "10";
    std::string y = " 20";
    std::string z = x + y;
    std::cout << z << std::endl;

    std::string name;
    std::cout << "Type your full name: ";
    std::getline(std::cin, fullName); // Utilitza std::getline per llegir una línia completa de text, incloent espais, i emmagatzemar-la a la variable fullName
    std::cout << "Your name is: " << fullName << std::endl;
}