#ifndef JUCATORFOTBAL_HPP
#define JUCATORFOTBAL_HPP

#include "../Portar/Portar.hpp"

using namespace std;
namespace Fotbal
{
    class JucatorFotbal : public Portar{
        private:
            char* nume;
            int varsta;
            char* pozitieJoc;
            
        public:
            // constructor
            JucatorFotbal(const char* nume, int varsta, const char* pozitieJoc);

            // destructor
            ~JucatorFotbal();

            // copy constructor
            JucatorFotbal(const JucatorFotbal& jucator);

            // assignment operator
            JucatorFotbal& operator=(const JucatorFotbal& jucator);

            // move constructor
            JucatorFotbal(JucatorFotbal&& jucator);

            // afisare
            void Afisare() const;

            // metoda virtuale
            void estePortar() override;

            // setters
            void setNume(const char* newNume);
            void setVarsta(int newVarsta);
            void setPozitieJoc(const char* newPozitieJoc);

            // getters
            const char* getNume();
            int getVarsta();
            const char* getPozitieJoc();
        };
}

#endif //JUCATOR_HPP