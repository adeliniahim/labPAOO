#ifndef ECHIPA_HPP
#define ECHIPA_HPP
#include <iostream>
#include <cstring>
#include <memory>
#include <vector>
using namespace std;

namespace Fotbal{
    template <typename T>
    class Echipa{
        private:
            vector<shared_ptr<T>> echipaFotbal;   //vectorul echipaFotbal poate contine obiecte din clase diferite

        public:
            void adaugaJucator(shared_ptr<T> jucator){
                echipaFotbal.push_back(jucator);
            }

            void afisareEchipa(){
                for(const auto& jucator : echipaFotbal){
                    cout << "Nume: " << jucator->getNume()<< endl;
                    cout << "Varsta: " << jucator->getVarsta()<< endl;
                    cout << endl;
                }
            }

            vector<shared_ptr<T>>& getEchipaFotbal()  {
                return echipaFotbal;
            }
    };  

    template <typename T>
    void pozitieJucator(T& jucator) {
        cout << jucator.getPozitieJoc() << endl;
    }
    
}
#endif