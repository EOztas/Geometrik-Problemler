#include "Ucgen.h"
#include <iostream>
#include <iostream>

#ifndef M_PI
#define M_PI 3.141592653589793238462643383279502884L
#endif
// Parametreli constructor, üç nokta kullanarak bir üçgen oluþturur
Ucgen::Ucgen(const Nokta& nokta1_, const Nokta& nokta2_, const Nokta& nokta3_) : nokta1(nokta1_), nokta2(nokta2_), nokta3(nokta3_) {}
// Nokta1'i döndürür
Nokta Ucgen::getNokta1() const {
    return nokta1;
}
// Nokta2'yi döndürür
Nokta Ucgen::getNokta2() const {
    return nokta2;
}
// Nokta3'ü döndürür
Nokta Ucgen::getNokta3() const {
    return nokta3;
}
// Nokta1'i ayarlar
void Ucgen::setNokta1(const Nokta& nokta1_) {
    nokta1 = nokta1_;
}
// Nokta2'yi ayarlar
void Ucgen::setNokta2(const Nokta& nokta2_) {
    nokta2 = nokta2_;
}
// Nokta3'ü ayarlar
void Ucgen::setNokta3(const Nokta& nokta3_) {
    nokta3 = nokta3_;
}
// Üçgeni string formatýnda temsil eder
std::string Ucgen::toString() const {
    return "Ucgen; Nokta1: " + nokta1.toString() + ", Nokta2: " + nokta2.toString() + ", Nokta3: " + nokta3.toString();
}
// Üçgenin alanýný hesaplar
double Ucgen::alan() const {
    // Üçgenin kenar uzunluklarý
    double a = nokta1.mesafe(nokta2);
    double b = nokta2.mesafe(nokta3);
    double c = nokta3.mesafe(nokta1);
    // Yarý çevre
    double s = (a + b + c) / 2;
    // Heron formülü kullanýlarak üçgenin alaný hesaplanýr
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
// Üçgenin çevresini hesaplar
double Ucgen::cevre() const {
    // Kenar uzunluklarý için doðru parçalarý oluþturur
    DogruParcasi kenar1(nokta1, nokta2);
    DogruParcasi kenar2(nokta2, nokta3);
    DogruParcasi kenar3(nokta3, nokta1);
    // Kenar uzunluklarýný toplar
    return kenar1.uzunluk() + kenar2.uzunluk() + kenar3.uzunluk();
}
// Cosinus teoremi ile üçgenin açýlarýný hesaplar
double* Ucgen::acilar() const {
    // Kenar uzunluklarýný hesaplar
    double a = nokta1.mesafe(nokta2);
    double b = nokta2.mesafe(nokta3);
    double c = nokta3.mesafe(nokta1);
    // Açýlarý hesaplar
    double alfa = acos((b * b + c * c - a * a) / (2 * b * c));
    double beta = acos((c * c + a * a - b * b) / (2 * c * a));
    double gama = acos((a * a + b * b - c * c) / (2 * a * b));
    // Açýlarý dereceye dönüþtürür
    double* acilar = new double[3];
    acilar[0] = alfa * 180 / M_PI;
    acilar[1] = beta * 180 / M_PI;
    acilar[2] = gama * 180 / M_PI;

    return acilar;
}
