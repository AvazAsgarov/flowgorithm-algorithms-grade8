/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Muellim Demo 03: Deyisenler ve Esas Melumat Tipleri (Variables & Data Types)
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * Bu numunede oyreneceyik:
 * 1. Deyisen nedir? (Yaddasda melumat saxlayan qutu)
 * 2. Deyisenin elan edilmesi (Declaration): int score;
 * 3. Deyisene qiymet menimsedilmesi (Assignment): score = 100;
 * 4. Elan ve ilkin qiymet (Initialization): int score = 100;
 * 5. Esas melumat tipleri:
 *    - int: Tam ededler (..., -2, -1, 0, 1, 2, ...)
 *    - double: Kesr / heqiqi ededler (3.14, 0.75, -12.5)
 *    - string: Metnler ("Salam", "BANM Liseyi")
 * 6. Deyisen adlandirma qaydalari (camelCase, reqemle baslamamaq, menali adlar)
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. TAM EDED TIPI: int (integer)
    int studentCount = 30; // 8-ci sinifdeki sagird sayi
    int classroomNumber = 304;

    // 2. KESR / HEQIQI EDED TIPI: double
    double averageScore = 94.75;
    double roomTemperature = 22.5;

    // 3. METN TIPI: string
    string schoolName = "BANM Reqemsal Bilikler Liseyi";
    string subjectName = "Informatika (C++)";
    string teacherName = "Avaz Asgarov";

    // 4. Ekrana cixarilis ve formatlama
    cout << "========================================" << endl;
    cout << "     LISSEYN TELEBE MELUMAT KARTI       " << endl;
    cout << "========================================" << endl;
    cout << "Mekteb:       " << schoolName << endl;
    cout << "Fenn:         " << subjectName << endl;
    cout << "Muellim:      " << teacherName << endl;
    cout << "Otaq:         " << classroomNumber << endl;
    cout << "Sagird sayi:  " << studentCount << " nefer" << endl;
    cout << "Orta gosterici: " << averageScore << " bal" << endl;
    cout << "Otaq temperaturu: " << roomTemperature << " C" << endl;
    cout << "========================================" << endl;

    // 5. Deyisenin qiymetinin sonradan deyisdirilmesi (Re-assignment)
    studentCount = studentCount + 1; // Yeni bir sagird sinfe elave olundu
    cout << "Yeni sagird qebulundan sonra say: " << studentCount << endl;

    return 0;
}
