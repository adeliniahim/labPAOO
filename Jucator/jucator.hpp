#ifndef JUCATOR_HPP
#define JUCATOR_HPP
#include <iostream>
#include <cstring>

using namespace std;

namespace jucatorfotbal{
    class JucatorFotbal {
        private:
            char* nume;
            int varsta;
            double salariu;
            
        public:
            JucatorFotbal(const char* nume, int varsta, double salariu);
            ~JucatorFotbal();
            JucatorFotbal(const JucatorFotbal& other);
            JucatorFotbal& operator=(const JucatorFotbal& other);
            void Afisare() const;
        };
    }

#endif //JUCATOR_HPP