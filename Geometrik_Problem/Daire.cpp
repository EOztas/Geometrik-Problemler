#include "Daire.h"
#include <iostream>
#include <iostream>

#ifndef M_PI
#define M_PI 3.141592653589793238462643383279502884L
#endif
// Parametreli constructor, merkez noktasý ve yarýçapý belirterek bir daire oluþturur
Daire::Daire(const Nokta& merkez_, double yaricap_) : merkez(merkez_), yaricap(yaricap_) {}
// Kopya constructor, baþka bir daire nesnesini kopyalar
Daire::Daire(const Daire& other) : merkez(other.merkez), yaricap(other.yaricap) {}
// Yeni bir daire oluþturur
Daire::Daire(const Daire& other, double carpan) : merkez(other.merkez), yaricap(other.yaricap* carpan) {}
// Dairenin alanýný hesaplar
double Daire::alan() const {
    return M_PI * yaricap * yaricap;
}
// Dairenin çevresini hesaplar
double Daire::cevre() const {
    return 2 * M_PI * yaricap;
}
// Ýki dairenin kesiþim durumunu kontrol eder

int Daire::kesisim(const Daire& diger) const {
    double mesafe = merkez.mesafe(diger.merkez);
    double toplamYaricap = yaricap + diger.yaricap;

    if (mesafe < toplamYaricap) {
        if (mesafe + diger.yaricap < yaricap || mesafe + yaricap < diger.yaricap) {
            return 0; // Kesiþim var
        }
        else if (mesafe == 0 && yaricap == diger.yaricap) {
            return 1; // Ýki daire birbiri ile eþit
        }
        else {
            return 2;  // Kesiþim yok
        }
    }
    else {
        return 2;
    }
}
// Dairenin merkezi ve yarýçapýný String halinde döndürür
std::string Daire::toString() const {
    return "Merkez: " + merkez.toString() + "\nYaricap: " + std::to_string(yaricap);
}

void Daire::yazdir() const {
    std::cout << toString() << std::endl;
}
