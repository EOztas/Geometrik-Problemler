#ifndef NOKTA_H_INCLUDED
#define NOKTA_H_INCLUDED

#include <string>
#include <cmath>
class Nokta {
private:
    double x; // Noktan�n x koordinat�
    double y; // Noktan�n y koordinat�

public:
    // Varsay�lan constructor,noktan�n koordinatlar�n� (0, 0) olarak ayarlar
    Nokta();
    Nokta(double x_, double y_); // Parametreli constructor, belirtilen koordinatlarla bir nokta olu�turur
    Nokta(const Nokta& other, double ofset_x, double ofset_y);

    double getX() const;  // Noktan�n x koordinat�n� d�nd�r�r
    void setX(double x_); // Noktan�n x koordinat�n� ayarlar

    double getY() const;  
    void setY(double y_);

    double mesafe(const Nokta& diger) const;    // �ki nokta aras�ndaki mesafeyi hesaplayar
    void set(double x_, double y_);
    std::string toString() const; // Noktan�n koordinatlar�n�n String g�sterimini d�nd�r�r
    void yazdir() const; // Noktan�n koordinatlar�n� ekrana yazd�r�r
};


#endif 