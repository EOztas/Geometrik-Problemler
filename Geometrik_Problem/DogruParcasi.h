#ifndef DOGRUPARCASI_H_INCLUDED
#define DOGRUPARCASI_H_INCLUDED

#include "Nokta.h"
// DogruParcasi s�n�f�, iki nokta aras�ndaki do�ru par�as�n� temsil eder
class DogruParcasi {
private:
    Nokta baslangicNoktasi;
    Nokta bitisNoktasi;

public:
    DogruParcasi(const Nokta& baslangic, const Nokta& bitis); // Parametreli constructor, ba�lang�� ve biti� noktalar� ile do�ru par�as� olu�turur
    DogruParcasi(const DogruParcasi& other);     // Kopya constructor, ba�ka bir DogruParcasi nesnesini kopyalar
    DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim); // Orta nokta, uzunluk ve e�im kullanarak do�ru par�as� olu�turur

    Nokta getBaslangicNoktasi() const;
    Nokta getBitisNoktasi() const;
    void setBaslangicNoktasi(const Nokta& baslangic);
    void setBitisNoktasi(const Nokta& bitis);

    double uzunluk() const; // Do�ru par�as�n�n uzunlu�unu hesaplar
    Nokta kesismeNoktasi(const Nokta& nokta) const;  // Verilen bir nokta ile do�ru par�as�n�n kesi�im noktas�n� bulur
    Nokta ortaNokta() const;     // Do�ru par�as�n�n orta noktas�n� bulur

    std::string toString() const; 
    void yazdir() const;
};

#endif 

