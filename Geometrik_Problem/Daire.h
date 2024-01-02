#ifndef DAIRE_H_INCLUDED
#define DAIRE_H_INCLUDED

#include "Nokta.h"

class Daire {
private:
    Nokta merkez;   // Dairenin merkez noktas�
    double yaricap; // Dairenin yar��ap�

public:
    Daire(const Nokta& merkez_, double yaricap_);
    Daire(const Daire& other);
    Daire(const Daire& other, double carpan);

    double alan() const;      // Dairenin alan�n� hesaplar
    double cevre() const;     // Dairenin �evresini hesaplar
    int kesisim(const Daire& diger) const;   // �ki dairenin kesi�im durumunu kontrol eder

    std::string toString() const;
    void yazdir() const;
};

#endif 
