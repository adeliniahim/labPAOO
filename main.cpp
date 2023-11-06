#include <iostream>
#include <cstring>
#include "Jucator/jucator.hpp"

using namespace jucatorfotbal;
int main() {
    JucatorFotbal jucator1("Cristiano Ronaldo", 38, 60000000);
    JucatorFotbal jucator2 = jucator1;  // Utilizare copy constructor
    JucatorFotbal jucator3("Lionel Messi", 36, 65000000);

    // Afișare informații despre jucători
    cout << "Jucator 1: ";
    jucator1.Afisare();
    cout << "Jucator 2: ";
    jucator2.Afisare();
    cout << "Jucator 3: ";
    jucator3.Afisare();


    jucator2 = jucator3;  // Utilizare operator de atribuire
    cout << "Utilizare operator de atribuire: \n";
    jucator2.Afisare();

    return 0;
}
