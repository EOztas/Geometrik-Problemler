#include "Ucgen.h"
#include <iostream>
#include <iostream>

#ifndef M_PI
#define M_PI 3.141592653589793238462643383279502884L
#endif
// Parametreli constructor, �� nokta kullanarak bir ��gen olu�turur
Ucgen::Ucgen(const Nokta& nokta1_, const Nokta& nokta2_, const Nokta& nokta3_) : nokta1(nokta1_), nokta2(nokta2_), nokta3(nokta3_) {}
// Nokta1'i d�nd�r�r
Nokta Ucgen::getNokta1() const {
    return nokta1;
}
// Nokta2'yi d�nd�r�r
Nokta Ucgen::getNokta2() const {
    return nokta2;
}
// Nokta3'� d�nd�r�r
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
// Nokta3'� ayarlar
void Ucgen::setNokta3(const Nokta& nokta3_) {
    nokta3 = nokta3_;
}
// ��geni string format�nda temsil eder
std::string Ucgen::toString() const {
    return "Ucgen; Nokta1: " + nokta1.toString() + ", Nokta2: " + nokta2.toString() + ", Nokta3: " + nokta3.toString();
}
// ��genin alan�n� hesaplar
double Ucgen::alan() const {
    // ��genin kenar uzunluklar�
    double a = nokta1.mesafe(nokta2);
    double b = nokta2.mesafe(nokta3);
    double c = nokta3.mesafe(nokta1);
    // Yar� �evre
    double s = (a + b + c) / 2;
    // Heron form�l� kullan�larak ��genin alan� hesaplan�r
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
// ��genin �evresini hesaplar
double Ucgen::cevre() const {
    // Kenar uzunluklar� i�in do�ru par�alar� olu�turur
    DogruParcasi kenar1(nokta1, nokta2);
    DogruParcasi kenar2(nokta2, nokta3);
    DogruParcasi kenar3(nokta3, nokta1);
    // Kenar uzunluklar�n� toplar
    return kenar1.uzunluk() + kenar2.uzunluk() + kenar3.uzunluk();
}
// Cosinus teoremi ile ��genin a��lar�n� hesaplar
double* Ucgen::acilar() const {
    // Kenar uzunluklar�n� hesaplar
    double a = nokta1.mesafe(nokta2);
    double b = nokta2.mesafe(nokta3);
    double c = nokta3.mesafe(nokta1);
    // A��lar� hesaplar
    double alfa = acos((b * b + c * c - a * a) / (2 * b * c));
    double beta = acos((c * c + a * a - b * b) / (2 * c * a));
    double gama = acos((a * a + b * b - c * c) / (2 * a * b));
    // A��lar� dereceye d�n��t�r�r
    double* acilar = new double[3];
    acilar[0] = alfa * 180 / M_PI;
    acilar[1] = beta * 180 / M_PI;
    acilar[2] = gama * 180 / M_PI;

    return acilar;
}
