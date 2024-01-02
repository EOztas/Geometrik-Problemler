#ifndef UCGEN_H_INCLUDED
#define UCGEN_H_INCLUDED

#include "Nokta.h"
#include "DogruParcasi.h"
// Ucgen s�n�f�, �� nokta kullanarak bir ��geni temsil eder
class Ucgen {
private:
    Nokta nokta1, nokta2, nokta3; // ��genin �� k��e noktas�

public:
    Ucgen(const Nokta& nokta1_, const Nokta& nokta2_, const Nokta& nokta3_);

    Nokta getNokta1() const;
    Nokta getNokta2() const;
    Nokta getNokta3() const;

    void setNokta1(const Nokta& nokta1_);
    void setNokta2(const Nokta& nokta2_);
    void setNokta3(const Nokta& nokta3_);

    std::string toString() const;
    double alan() const; // ��genin alan�n� hesaplar
    double cevre() const; // ��genin �evresini hesaplar
    double* acilar() const; // ��genin �evresini hesaplar
};

#endif 