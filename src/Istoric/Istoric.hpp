#ifndef ISTORIC_HPP
#define ISTORIC_HPP

#include "../Jucator/JucatorFotbal.hpp"
#include "../Portar/Portar.hpp"

using namespace std;
namespace Fotbal
{
    class Istoric : public JucatorFotbal{
        private:
            int an_incepere_activitate;
            char* status;
            
        public:
            // constructor
            Istoric(const char* nume, int varsta, const char* pozitieJoc, int an_incepere_activitate, const char* status);

            // destructor
            ~Istoric();

            // copy constructor
            Istoric(const Istoric& jucator);

            // assignment operator
            Istoric& operator=(const Istoric& jucator);

            // move constructor
            Istoric(Istoric&& jucator);

            // afisare
            void Afisare();

            // metoda virtuale
            void estePortar() override;

            // setters
            void setAnIncepereActivitate(int newAn);
            void setStatus(const char* newStatus);

            // getters
            int getAnIncepereActivitate();
            const char* getStatus();
        };
}

#endif 