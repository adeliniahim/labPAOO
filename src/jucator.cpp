#include "jucator.hpp"
#include <iostream>
#include <cstring>
using namespace std;

class JucatorFotbal {
private:
    char* nume;
    int varsta;
    double salariu;

public:
    // Constructorul
    JucatorFotbal(const char* nume, int varsta, double salariu) {
        this->nume = new char[strlen(nume) + 1];
            strcpy(this->nume, nume);
        this->varsta = varsta;
        this->salariu = salariu;
    }

    // Destructorul
    ~JucatorFotbal() {
        delete[] nume;
    }

    // Copy constructor
    JucatorFotbal(const JucatorFotbal& other) {
        this->nume = new char[strlen(other.nume) + 1];
            strcpy(this->nume, other.nume);
        this->varsta = other.varsta;
        this->salariu = other.salariu;
    }

    // Operatorul de atribuire
    JucatorFotbal& operator=(const JucatorFotbal& other) {
        if (this == &other) {
            return *this;  // Evităm auto-atribuirea
        }

        delete[] nume;
        this->nume = new char[strlen(other.nume) + 1];
            strcpy(this->nume, other.nume);
        this->varsta = other.varsta;
        this->salariu = other.salariu;
        return *this;
    }

    // Metodă pentru afișare
    void Afisare() const {
        cout << "Nume: " << nume << ",\nVarsta: " << varsta << ",\nSalariu: " << fixed << salariu << endl;
        cout << endl; 
    }
};

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
