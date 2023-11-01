#ifndef JUCATOR_HPP
#define JUCATOR_HPP

namespace jucatorfotbal{
    class JucatorFotbal {
        public:
            JucatorFotbal(const char* nume, int varsta, double salariu);
            ~JucatorFotbal();
            JucatorFotbal(const JucatorFotbal& other);
            JucatorFotbal& operator=(const JucatorFotbal& other);
            void Afisare() const;
        };
    }

#endif //JUCATOR_HPP