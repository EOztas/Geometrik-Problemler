#include "Daire.h"
#include <iostream>
#include <iostream>

#ifndef M_PI
#define M_PI 3.141592653589793238462643383279502884L
#endif
// Parametreli constructor, merkez noktas� ve yar��ap� belirterek bir daire olu�turur
Daire::Daire(const Nokta& merkez_, double yaricap_) : merkez(merkez_), yaricap(yaricap_) {}
// Kopya constructor, ba�ka bir daire nesnesini kopyalar
Daire::Daire(const Daire& other) : merkez(other.merkez), yaricap(other.yaricap) {}
// Yeni bir daire olu�turur
Daire::Daire(const Daire& other, double carpan) : merkez(other.merkez), yaricap(other.yaricap* carpan) {}
// Dairenin alan�n� hesaplar
double Daire::alan() const {
    return M_PI * yaricap * yaricap;
}
// Dairenin �evresini hesaplar
double Daire::cevre() const {
    return 2 * M_PI * yaricap;
}
// �ki dairenin kesi�im durumunu kontrol eder

int Daire::kesisim(const Daire& diger) const {
    double mesafe = merkez.mesafe(diger.merkez);
    double toplamYaricap = yaricap + diger.yaricap;

    if (mesafe < toplamYaricap) {
        if (mesafe + diger.yaricap < yaricap || mesafe + yaricap < diger.yaricap) {
            return 0; // Kesi�im var
        }
        else if (mesafe == 0 && yaricap == diger.yaricap) {
            return 1; // �ki daire birbiri ile e�it
        }
        else {
            return 2;  // Kesi�im yok
        }
    }
    else {
        return 2;
    }
}
// Dairenin merkezi ve yar��ap�n� String halinde d�nd�r�r
std::string Daire::toString() const {
    return "Merkez: " + merkez.toString() + "\nYaricap: " + std::to_string(yaricap);
}

void Daire::yazdir() const {
    std::cout << toString() << std::endl;
}
