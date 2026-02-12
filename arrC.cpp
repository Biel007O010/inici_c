#include <iostream>

int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]); //Sizeof retorna la mida en bytes de l'array i del tipus d'element, així obtenim el nombre d'elements a l'array
    std::cout << getArrayLength << std::endl; // Imprimeix la longitud de l'array, que és 5

    std::cout << myNumbers[0] << " " << myNumbers[4] << std::endl; // Imprimeix el cinquè element de l'array, que és 50
}