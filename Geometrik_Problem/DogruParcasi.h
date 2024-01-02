#ifndef DOGRUPARCASI_H_INCLUDED
#define DOGRUPARCASI_H_INCLUDED

#include "Nokta.h"
// DogruParcasi sýnýfý, iki nokta arasýndaki doðru parçasýný temsil eder
class DogruParcasi {
private:
    Nokta baslangicNoktasi;
    Nokta bitisNoktasi;

public:
    DogruParcasi(const Nokta& baslangic, const Nokta& bitis); // Parametreli constructor, baþlangýç ve bitiþ noktalarý ile doðru parçasý oluþturur
    DogruParcasi(const DogruParcasi& other);     // Kopya constructor, baþka bir DogruParcasi nesnesini kopyalar
    DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim); // Orta nokta, uzunluk ve eðim kullanarak doðru parçasý oluþturur

    Nokta getBaslangicNoktasi() const;
    Nokta getBitisNoktasi() const;
    void setBaslangicNoktasi(const Nokta& baslangic);
    void setBitisNoktasi(const Nokta& bitis);

    double uzunluk() const; // Doðru parçasýnýn uzunluðunu hesaplar
    Nokta kesismeNoktasi(const Nokta& nokta) const;  // Verilen bir nokta ile doðru parçasýnýn kesiþim noktasýný bulur
    Nokta ortaNokta() const;     // Doðru parçasýnýn orta noktasýný bulur

    std::string toString() const; 
    void yazdir() const;
};

#endif 

