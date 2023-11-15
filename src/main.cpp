#include <iostream>
#include <cstring>
#include "../Jucator/JucatorFotbal.hpp"
#include "../Portar/Portar.hpp"
#include "../Istoric/Istoric.hpp"
#include "../Echipa/Echipa.hpp"

using namespace std;

using namespace Fotbal;

int main() {
    /*JucatorFotbal jucator1("Cristiano Ronaldo", 38, "atacant");
    JucatorFotbal jucator2 = jucator1;  // Utilizare copy constructor
    JucatorFotbal jucator3("Lionel Messi", 36, "mijlocas");

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

    cout << "set - functionalitate:" << endl;
    jucator1.setNume("Adrian Mutu");
    jucator1.Afisare();

    cout << "get - functionalitate:" << endl;
    cout << jucator3.getNume() << " joaca pe pozitia: " << jucator3.getPozitieJoc() << endl;
    cout << endl;

    cout << "Exemplu move constructor:" << endl;
   //Istoric ex();
    
    Istoric ex("Cristian Chivu", 43, "fundas", 2022, "activ");
        
    Istoric jucator4(std::move(ex));
    jucator4.Afisare();

    jucator4.estePortar();*/

    Echipa<JucatorFotbal> echipa1;

    unique_ptr<JucatorFotbal> jucator1 = make_unique<JucatorFotbal>("Cristiano Ronaldo", 38, "atacant");
    echipa1.adaugaJucator(shared_ptr<JucatorFotbal>(move(jucator1)));  

    //adaugaJucator() foloseste shared pointer
    //se muta resursele din jucator1 către shared_ptr -> jucator1 nu mai detine resursele, doar shared_ptr

    shared_ptr<JucatorFotbal> jucator2 = make_shared<JucatorFotbal>("Lionel Messi", 36, "mijlocas");

    echipa1.adaugaJucator(jucator2);

    shared_ptr<Istoric> jucator3 = make_shared<Istoric>("Cristian Chivu", 43, "fundas", 2022, "activ");
    echipa1.adaugaJucator(jucator3);

    echipa1.afisareEchipa();

    cout << "Echipa contine urmatorele pozitii de joc: " << endl;
    for (const auto& jucator : echipa1.getEchipaFotbal()) {  //auto: deduce tipul variabilei
        pozitieJucator(*jucator);
    }

    return 0;
}
