#ifndef NOKTA_H_INCLUDED
#define NOKTA_H_INCLUDED

#include <string>
#include <cmath>
class Nokta {
private:
    double x; // Noktanın x koordinatı
    double y; // Noktanın y koordinatı

public:
    // Varsayılan constructor,noktanın koordinatlarını (0, 0) olarak ayarlar
    Nokta();
    Nokta(double x_, double y_); // Parametreli constructor, belirtilen koordinatlarla bir nokta oluşturur
    Nokta(const Nokta& other, double ofset_x, double ofset_y);

    double getX() const;  // Noktanın x koordinatını döndürür
    void setX(double x_); // Noktanın x koordinatını ayarlar

    double getY() const;  
    void setY(double y_);

    double mesafe(const Nokta& diger) const;    // İki nokta arasındaki mesafeyi hesaplayar
    void set(double x_, double y_);
    std::string toString() const; // Noktanın koordinatlarının String gösterimini döndürür
    void yazdir() const; // Noktanın koordinatlarını ekrana yazdırır
};


#endif 