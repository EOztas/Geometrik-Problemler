#include "Nokta.h"
#include <iostream>
#include <cmath>
Nokta::Nokta() : x(0.0), y(0.0) {}

Nokta::Nokta(double x_, double y_) : x(x_), y(y_) {}
// Kopya constructor,other noktas�n�n x ve y de�erlerine ofset_x ve ofset_y de�erleri eklenerek yeni bir nokta olu�turulur
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
// Noktan�n koordinatlar�n�n String g�sterimini d�nd�r�r
std::string Nokta::toString() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}
double Nokta::mesafe(const Nokta& diger) const {
    // �ki nokta aras�ndaki mesafeyi hesaplamak i�in uzakl�k form�l� kullan�l�r
    return std::sqrt(std::pow(x - diger.x, 2) + std::pow(y - diger.y, 2));
}
// Noktan�n koordinatlar�n� ekrana yazd�r�r
void Nokta::yazdir() const {
    std::cout << toString() << std::endl;
}