#include "DogruParcasi.h"

#include "Daire.h"

#include "Ucgen.h"

#include <locale>

#include <iostream>

// Test kodu

int main() {

    setlocale(LC_ALL, "Turkish");

    //Nokta

    std::cout << "NOKTA SINIFI ÝÇÝN TEST ÇIKTILARI:" << "\n";

    Nokta n1;

    Nokta n2(5, 5);

    Nokta n3(3, 4);

    Nokta n4(n3);

    Nokta n5(n3, 1, -1);



    std::cout << "Oluþturulan 5 noktanýn x ve y deðerleri:" << "\n";

    n1.yazdir();

    n2.yazdir();

    n3.yazdir();

    n4.yazdir();

    n5.yazdir();



    std::cout << "1. ve 2. noktalarýn güncel x ve y deðerleri:" << "\n";

    n1.setX(10);

    n1.yazdir();

    n2.set(25, 30);

    n2.yazdir();



    //Dogru Parcasi

    std::cout << "\n" << "DOGRUPARCASI SINIFI ÝÇÝN TEST SONUÇLARI:" << "\n";

    Nokta n11;

    Nokta n21(3, 4);

    DogruParcasi dp(n11, n21);

    DogruParcasi dp2(dp);

    DogruParcasi dp3(n21, 10, 45);



    std::cout << "Oluþturulan 3 doðru parçasýnýn baþlangýç ve bitiþ noktalarý:" << "\n";

    dp.yazdir();

    dp2.yazdir();

    dp3.yazdir();



    std::cout << "2. doðru parçasýnýn baþlangýç ve bitiþ noktalarý:" << "\n";

    dp2.getBaslangicNoktasi();

    dp2.yazdir();



    std::cout << "1. doðru parçasý için uzunluk deðeri: " << dp.uzunluk() << "\n";

    std::cout << "1. doðru parçasý içib orta nokta: " << dp.ortaNokta().toString() << "\n";



    //Daire

    std::cout << "\n" << "DAIRE SINIFI ÝÇÝN TEST SONUÇLARI:" << "\n";

    Nokta merkez1(0, 0);

    Daire d1(merkez1, 5);

    Daire d2(d1);

    Daire d3(d2, 3);



    std::cout << "Daire 1: ";

    d1.yazdir();

    std::cout << "Alan: " << d1.alan() << ", Çevre: " << d1.cevre() << "\n";



    std::cout << "Daire 2: ";

    d2.yazdir();

    std::cout << "Alan: " << d2.alan() << ", Çevre: " << d2.cevre() << "\n";



    std::cout << "Daire 3: ";

    d3.yazdir();

    std::cout << "Alan: " << d3.alan() << ", Çevre: " << d3.cevre() << "\n";



    std::cout << "Daire 1 ve Daire 2 Kesiþim Durumu: " << d1.kesisim(d2) << "\n";

    std::cout << "Daire 1 ve Daire 3 Kesiþim Durumu: " << d1.kesisim(d3) << "\n";



    //Ucgen

    std::cout << "UCGEN SINIFI ÝÇÝN TEST SONUÇLARI:" << "\n";

    Ucgen ucgen(Nokta(0, 0), Nokta(4, 0), Nokta(0, 3));



    std::cout << ucgen.toString() << "\n";

    std::cout << "Alan: " << ucgen.alan() << "\n";

    std::cout << "Çevre: " << ucgen.cevre() << "\n";



    double* acilar = ucgen.acilar();

    std::cout << "Açýlar: " << acilar[0] << ", " << acilar[1] << ", " << acilar[2] << "\n";





    return 0;

}