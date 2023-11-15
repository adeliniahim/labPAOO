#include "Istoric.hpp"
#include "JucatorFotbal.hpp"
#include "Portar.hpp"
#include <iostream>
#include <cstring>
using namespace std;

namespace Fotbal{

    // Constructorul
    Istoric::Istoric(const char* nume, int varsta, const char* pozitieJoc, int an_incepere_activitate, const char* status) 
        : JucatorFotbal(nume, varsta, pozitieJoc) {

        this->an_incepere_activitate = an_incepere_activitate;

        this->status = new char[strlen(status) + 1];
            strcpy(this->status, status);
    }

    // Destructorul
    Istoric::~Istoric() {
        delete[] status;
    }

    // Copy constructor
    Istoric::Istoric(const Istoric& jucator) {
        this->nume = new char[strlen(jucator.nume) + 1];
            strcpy(this->nume, jucator.nume);

        this->varsta = jucator.varsta;

        this->pozitieJoc = new char[strlen(jucator.pozitieJoc) + 1];
            strcpy(this->pozitieJoc, jucator.pozitieJoc);

        this->an_incepere_activitate = jucator.an_incepere_activitate;

        this->status = new char[strlen(jucator.status) + 1];
            strcpy(this->status, jucator.status);
    }

    // Operatorul de atribuire
    Istoric& Istoric::operator=(const Istoric& jucator) {
        if (this == &jucator) {
            return *this;  // Evităm auto-atribuirea
        }

        delete[] nume;
        delete[] pozitieJoc;
        delete[] status;
        this->nume = new char[strlen(jucator.nume) + 1];
            strcpy(this->nume, jucator.nume);

        this->varsta = jucator.varsta;

        this->pozitieJoc = new char[strlen(jucator.pozitieJoc) + 1];
            strcpy(this->pozitieJoc, jucator.pozitieJoc);

        this->an_incepere_activitate = jucator.an_incepere_activitate;

        this->status = new char[strlen(jucator.status) + 1];
            strcpy(this->status, jucator.status);
        return *this;
    }

    // Move constructor
    Istoric::Istoric(Istoric&& jucator){
        cout << "Se apeleaza move constructor" << endl;

        this->nume = jucator.nume;
        jucator.nume = nullptr; //pointer null, nu mai indică către nicio locație de memorie

        this->varsta = jucator.varsta;

        this->pozitieJoc = jucator.pozitieJoc;
        jucator.pozitieJoc = nullptr;

        this->an_incepere_activitate = jucator.an_incepere_activitate;

        this->status = jucator.status;
        jucator.status = nullptr;
    }

    // Metodă pentru afișare
    void Istoric::Afisare() {
        cout << "Nume: " << nume << endl;
        cout << "Varsta: " << varsta << endl;
        cout << "Pozitie joc: " << pozitieJoc << endl;
        cout << "An incepere activitate: " << an_incepere_activitate << endl;
        cout << "Status:" << status << endl;
        
        cout << endl; 
    }

    // Implementarea metodei  virtuale
    void Istoric::estePortar() {
        if(this->getPozitieJoc() == "portar")
            cout << "Jucatorul se afla pe pozitia de portar\n";
        else
            cout << "Jucatorul nu se afla pe pozitia de portar\n";
        cout << endl;
    }

        //seters
        void Istoric::setStatus(const char* newStatus) {
            delete[] status;
            this->status = new char[strlen(newStatus) + 1];
            strcpy(status, newStatus);
        }

        void Istoric::setAnIncepereActivitate(int newAn) {
            this->an_incepere_activitate = newAn; 
        }


        //getters

        const char* Istoric::getStatus(){
            return status;
        }

        int Istoric::getAnIncepereActivitate(){
            return an_incepere_activitate;
        }
}

