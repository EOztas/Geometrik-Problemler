#ifndef DAIRE_H_INCLUDED
#define DAIRE_H_INCLUDED

#include "Nokta.h"

class Daire {
private:
    Nokta merkez;   // Dairenin merkez noktasý
    double yaricap; // Dairenin yarýçapý

public:
    Daire(const Nokta& merkez_, double yaricap_);
    Daire(const Daire& other);
    Daire(const Daire& other, double carpan);

    double alan() const;      // Dairenin alanýný hesaplar
    double cevre() const;     // Dairenin çevresini hesaplar
    int kesisim(const Daire& diger) const;   // Ýki dairenin kesiþim durumunu kontrol eder

    std::string toString() const;
    void yazdir() const;
};

#endif 
