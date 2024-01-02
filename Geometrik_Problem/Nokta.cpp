#include "Nokta.h"
#include <iostream>
#include <cmath>
Nokta::Nokta() : x(0.0), y(0.0) {}

Nokta::Nokta(double x_, double y_) : x(x_), y(y_) {}
// Kopya constructor,other noktasýnýn x ve y deðerlerine ofset_x ve ofset_y deðerleri eklenerek yeni bir nokta oluþturulur
Nokta::Nokta(const Nokta& other, double ofset_x, double ofset_y) : x(other.getX() + ofset_x), y(other.getY() + ofset_y) {}

double Nokta::getX() const {
    return x;
}

void Nokta::setX(double x_) {
    x = x_;
}

double Nokta::getY() const {
    return y;
}

void Nokta::setY(double y_) {
    y = y_;
}

void Nokta::set(double x_, double y_) {
    x = x_;
    y = y_;
}
// Noktanýn koordinatlarýnýn String gösterimini döndürür
std::string Nokta::toString() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}
double Nokta::mesafe(const Nokta& diger) const {
    // Ýki nokta arasýndaki mesafeyi hesaplamak için uzaklýk formülü kullanýlýr
    return std::sqrt(std::pow(x - diger.x, 2) + std::pow(y - diger.y, 2));
}
// Noktanýn koordinatlarýný ekrana yazdýrýr
void Nokta::yazdir() const {
    std::cout << toString() << std::endl;
}