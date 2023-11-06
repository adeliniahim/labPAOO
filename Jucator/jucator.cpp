#include "jucator.hpp"
using namespace jucatorfotbal;

// Constructorul
JucatorFotbal::JucatorFotbal(const char* nume, int varsta, double salariu) {
    this->nume = new char[strlen(nume) + 1];
        strcpy(this->nume, nume);
    this->varsta = varsta;
    this->salariu = salariu;
}

// Destructorul
JucatorFotbal::~JucatorFotbal() {
    delete[] nume;
}

// Copy constructor
JucatorFotbal::JucatorFotbal(const JucatorFotbal& other) {
    this->nume = new char[strlen(other.nume) + 1];
        strcpy(this->nume, other.nume);
    this->varsta = other.varsta;
    this->salariu = other.salariu;
}

// Operatorul de atribuire
JucatorFotbal& JucatorFotbal::operator=(const JucatorFotbal& other) {
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
void JucatorFotbal::Afisare() const {
    cout << "Nume: " << nume << ",\nVarsta: " << varsta << ",\nSalariu: " << fixed << salariu << endl;
    cout << endl; 
}


