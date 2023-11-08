#include "JucatorFotbal.hpp"
#include <iostream>
#include <cstring>
using namespace std;

namespace Fotbal{

    // Constructorul
    JucatorFotbal::JucatorFotbal(const char* nume, int varsta, const char* pozitieJoc) {
        this->nume = new char[strlen(nume) + 1];
            strcpy(this->nume, nume);

        this->varsta = varsta;

        this->pozitieJoc = new char[strlen(pozitieJoc) + 1];
            strcpy(this->pozitieJoc, pozitieJoc);
    }

    // Destructorul
    JucatorFotbal::~JucatorFotbal() {
        delete[] nume;
        delete[] pozitieJoc;
    }

    // Copy constructor
    JucatorFotbal::JucatorFotbal(const JucatorFotbal& jucator) {
        this->nume = new char[strlen(jucator.nume) + 1];
            strcpy(this->nume, jucator.nume);

        this->varsta = jucator.varsta;

        this->pozitieJoc = new char[strlen(jucator.pozitieJoc) + 1];
            strcpy(this->pozitieJoc, jucator.pozitieJoc);
    }

    // Operatorul de atribuire
    JucatorFotbal& JucatorFotbal::operator=(const JucatorFotbal& jucator) {
        if (this == &jucator) {
            return *this;  // Evităm auto-atribuirea
        }

        delete[] nume;
        delete[] pozitieJoc;
        this->nume = new char[strlen(jucator.nume) + 1];
            strcpy(this->nume, jucator.nume);

        this->varsta = jucator.varsta;

        this->pozitieJoc = new char[strlen(jucator.pozitieJoc) + 1];
            strcpy(this->pozitieJoc, jucator.pozitieJoc);
        return *this;
    }

    // Move constructor
    JucatorFotbal::JucatorFotbal(JucatorFotbal&& jucator){
        cout << "Se apeleaza move constructor" << endl;

        this->nume = jucator.nume;
        jucator.nume = nullptr; //pointer null, nu mai indică către nicio locație de memorie

        this->varsta = jucator.varsta;

        this->pozitieJoc = jucator.pozitieJoc;
        jucator.pozitieJoc = nullptr;
    }

    // Metodă pentru afișare
    void JucatorFotbal::Afisare() const {
        cout << "Nume: " << nume << ",\nVarsta: " << varsta << ",\nPozitie joc: " << pozitieJoc << endl;
        cout << endl; 
    }

    // Implementarea metodei  virtuale
    void JucatorFotbal::estePortar() {
        if(this->getPozitieJoc() == "portar")
            cout << "Jucatorul se afla pe pozitia de portar\n";
        else
            cout << "Jucatorul nu se afla pe pozitia de portar\n";
        cout << endl;
    }

        //seters
        void JucatorFotbal::setNume(const char* newNume) {
            delete[] nume; // Eliberăm memoria veche (dacă există)
            this->nume = new char[strlen(newNume) + 1];
            strcpy(nume, newNume);
        }

        void JucatorFotbal::setPozitieJoc(const char* newPozitieJoc) {
            delete[] pozitieJoc;
            this->pozitieJoc = new char[strlen(newPozitieJoc) + 1];
            strcpy(pozitieJoc, newPozitieJoc);
        }

        void JucatorFotbal::setVarsta(int newVarsta) {
            this->varsta = newVarsta; 
        }


        //getters
        const char* JucatorFotbal::getNume() {
            return nume;
        }

        const char* JucatorFotbal::getPozitieJoc(){
            return pozitieJoc;
        }

        int JucatorFotbal::getVarsta(){
            return varsta;
        }
}

