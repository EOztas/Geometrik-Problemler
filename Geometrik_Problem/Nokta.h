#ifndef NOKTA_H_INCLUDED
#define NOKTA_H_INCLUDED

#include <string>
#include <cmath>
class Nokta {
private:
    double x; // Noktanýn x koordinatý
    double y; // Noktanýn y koordinatý

public:
    // Varsayýlan constructor,noktanýn koordinatlarýný (0, 0) olarak ayarlar
    Nokta();
    Nokta(double x_, double y_); // Parametreli constructor, belirtilen koordinatlarla bir nokta oluþturur
    Nokta(const Nokta& other, double ofset_x, double ofset_y);

    double getX() const;  // Noktanýn x koordinatýný döndürür
    void setX(double x_); // Noktanýn x koordinatýný ayarlar

    double getY() const;  
    void setY(double y_);

    double mesafe(const Nokta& diger) const;    // Ýki nokta arasýndaki mesafeyi hesaplayar
    void set(double x_, double y_);
    std::string toString() const; // Noktanýn koordinatlarýnýn String gösterimini döndürür
    void yazdir() const; // Noktanýn koordinatlarýný ekrana yazdýrýr
};


#endif 