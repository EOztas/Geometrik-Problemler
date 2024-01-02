#include "DogruParcasi.h"
#include <cmath>
#include <iostream>

DogruParcasi::DogruParcasi(const Nokta& baslangic, const Nokta& bitis) : baslangicNoktasi(baslangic), bitisNoktasi(bitis) {}

DogruParcasi::DogruParcasi(const DogruParcasi& other) : baslangicNoktasi(other.getBaslangicNoktasi()), bitisNoktasi(other.getBitisNoktasi()) {}
// Orta nokta, uzunluk ve eðim bilgilerini kullanarak x ve y koordinatlarýný hesaplar
DogruParcasi::DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim) {
    double deltaX = uzunluk / (2 * sqrt(1 + pow(egim, 2)));
    double deltaY = egim * deltaX;

    baslangicNoktasi = Nokta(ortaNokta.getX() - deltaX, ortaNokta.getY() - deltaY);
    bitisNoktasi = Nokta(ortaNokta.getX() + deltaX, ortaNokta.getY() + deltaY);
}
// Baþlangýç noktasýný döndürür
Nokta DogruParcasi::getBaslangicNoktasi() const {
    return baslangicNoktasi;
}
// Bitiþ noktasýný döndürür
Nokta DogruParcasi::getBitisNoktasi() const {
    return bitisNoktasi;
}
// Baþlangýç noktasýný deðiþtirir
void DogruParcasi::setBaslangicNoktasi(const Nokta& baslangic) {
    baslangicNoktasi = baslangic;
}
// Bitiþ noktasýný deðiþtirir
void DogruParcasi::setBitisNoktasi(const Nokta& bitis) {
    bitisNoktasi = bitis;
}
// Doðru parçasýnýn uzunluðunu hesaplar
double DogruParcasi::uzunluk() const {
    double deltaX = bitisNoktasi.getX() - baslangicNoktasi.getX();
    double deltaY = bitisNoktasi.getY() - baslangicNoktasi.getY();
    return sqrt(pow(deltaX, 2) + pow(deltaY, 2));
}
// Verilen bir nokta ile doðru parçasýnýn kesiþim noktasýný bulur
Nokta DogruParcasi::kesismeNoktasi(const Nokta& nokta) const {
    return Nokta((baslangicNoktasi.getX() + bitisNoktasi.getX()) / 2, (baslangicNoktasi.getY() + bitisNoktasi.getY()) / 2);
}
// Doðru parçasýnýn orta noktasýný bulur
Nokta DogruParcasi::ortaNokta() const {
    return Nokta((baslangicNoktasi.getX() + bitisNoktasi.getX()) / 2, (baslangicNoktasi.getY() + bitisNoktasi.getY()) / 2);
}

std::string DogruParcasi::toString() const {
    return "Baslangic Noktasi: " + baslangicNoktasi.toString() + "\nBitis Noktasi: " + bitisNoktasi.toString();
}

void DogruParcasi::yazdir() const {
    std::cout << toString() << std::endl;
}
