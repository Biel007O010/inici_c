#include <iostream>

int main(){

    int d,m,a, c, y, resultat;
    int d1, m1, a1;

    double f;

    std::cout << "Introdueix el dia: ";
    std::cin >> d; 
    std::cout << "Introdueix el mes: ";
    std::cin >> m;
    std::cout << "Introdueix l'any: ";
    std::cin >> a;
    if (m-2 <= 0){
        m1 = m - 2 + 12;
        a1 = a - 1;
    }
    else{
        m1 = m;
        a1 = a;
    }

    c = a1/100;
    y = a1%100;

    f = (2.6*m1 - 0.2) + d + y + (y/4) + (c/4) - 2*c;
    resultat = (int)f;
    resultat = resultat % 7;

    switch (resultat){
        case 1:
            std::cout << "Dilluns" << std::endl;
            break;
        case 2:
            std::cout << "Dimarts" << std::endl;
            break; 
        case 3:
            std::cout << "Dimecres" << std::endl;
            break; 
        case 4:
            std::cout << "Dijous" << std::endl;
            break; 
        case 5:
            std::cout << "Divendres" << std::endl;
            break; 
        case 6:
            std::cout << "Dissabte" << std::endl;
            break; 
        case 0:
            std::cout << "Diumenge" << std::endl;
            break; 
        default:
            break;
    }



}