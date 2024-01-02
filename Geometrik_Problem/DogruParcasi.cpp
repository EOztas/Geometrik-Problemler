#include "DogruParcasi.h"
#include <cmath>
#include <iostream>

DogruParcasi::DogruParcasi(const Nokta& baslangic, const Nokta& bitis) : baslangicNoktasi(baslangic), bitisNoktasi(bitis) {}

DogruParcasi::DogruParcasi(const DogruParcasi& other) : baslangicNoktasi(other.getBaslangicNoktasi()), bitisNoktasi(other.getBitisNoktasi()) {}
// Orta nokta, uzunluk ve e�im bilgilerini kullanarak x ve y koordinatlar�n� hesaplar
DogruParcasi::DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim) {
    double deltaX = uzunluk / (2 * sqrt(1 + pow(egim, 2)));
    double deltaY = egim * deltaX;

    baslangicNoktasi = Nokta(ortaNokta.getX() - deltaX, ortaNokta.getY() - deltaY);
    bitisNoktasi = Nokta(ortaNokta.getX() + deltaX, ortaNokta.getY() + deltaY);
}
// Ba�lang�� noktas�n� d�nd�r�r
Nokta DogruParcasi::getBaslangicNoktasi() const {
    return baslangicNoktasi;
}
// Biti� noktas�n� d�nd�r�r
Nokta DogruParcasi::getBitisNoktasi() const {
    return bitisNoktasi;
}
// Ba�lang�� noktas�n� de�i�tirir
void DogruParcasi::setBaslangicNoktasi(const Nokta& baslangic) {
    baslangicNoktasi = baslangic;
}
// Biti� noktas�n� de�i�tirir
void DogruParcasi::setBitisNoktasi(const Nokta& bitis) {
    bitisNoktasi = bitis;
}
// Do�ru par�as�n�n uzunlu�unu hesaplar
double DogruParcasi::uzunluk() const {
    double deltaX = bitisNoktasi.getX() - baslangicNoktasi.getX();
    double deltaY = bitisNoktasi.getY() - baslangicNoktasi.getY();
    return sqrt(pow(deltaX, 2) + pow(deltaY, 2));
}
// Verilen bir nokta ile do�ru par�as�n�n kesi�im noktas�n� bulur
Nokta DogruParcasi::kesismeNoktasi(const Nokta& nokta) const {
    return Nokta((baslangicNoktasi.getX() + bitisNoktasi.getX()) / 2, (baslangicNoktasi.getY() + bitisNoktasi.getY()) / 2);
}
// Do�ru par�as�n�n orta noktas�n� bulur
Nokta DogruParcasi::ortaNokta() const {
    return Nokta((baslangicNoktasi.getX() + bitisNoktasi.getX()) / 2, (baslangicNoktasi.getY() + bitisNoktasi.getY()) / 2);
}

std::string DogruParcasi::toString() const {
    return "Baslangic Noktasi: " + baslangicNoktasi.toString() + "\nBitis Noktasi: " + bitisNoktasi.toString();
}

void DogruParcasi::yazdir() const {
    std::cout << toString() << std::endl;
}
