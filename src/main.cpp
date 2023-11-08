#include <iostream>
#include <cstring>
#include "../Jucator/JucatorFotbal.hpp"
#include "../Portar/Portar.hpp"

using namespace std;

using namespace Fotbal;

int main() {
    JucatorFotbal jucator1("Cristiano Ronaldo", 38, "atacant");
    JucatorFotbal jucator2 = jucator1;  // Utilizare copy constructor
    JucatorFotbal jucator3("Lionel Messi", 36, "mijlocas");

    // Afișare informații despre jucători
    cout << "Jucator 1: ";
    jucator1.Afisare();
    /*cout << "Jucator 2: ";
    jucator2.Afisare();
    cout << "Jucator 3: ";
    jucator3.Afisare();


    jucator2 = jucator3;  // Utilizare operator de atribuire
    cout << "Utilizare operator de atribuire: \n";
    jucator2.Afisare();*/

    cout << "set - functionalitate:" << endl;
    jucator1.setNume("Adrian Mutu");
    jucator1.Afisare();

    cout << "get - functionalitate:" << endl;
    cout << jucator3.getNume() << " joaca pe pozitia: " << jucator3.getPozitieJoc() << endl;
    cout << endl;

    cout << "Exemplu move constructor:" << endl;
    JucatorFotbal ex("Cristian Chivu", 43, "fundas");
    
    JucatorFotbal jucator4(std::move(ex));
    
    jucator4.Afisare();

    jucator4.estePortar();

    return 0;
}
