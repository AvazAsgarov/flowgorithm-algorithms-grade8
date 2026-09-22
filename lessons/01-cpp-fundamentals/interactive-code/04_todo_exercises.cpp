/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Sagird Interaktiv Praktika 04: Addim-addim Kodlama (TODO Exercises)
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * TELIMAT:
 * Asagidaki TODO addimlarini ardicil olaraq yerine yetirin.
 * Her bir TODO addiminda teleb olunan kodu qeyd edilen hisseye yazin.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "=== SAGIRD UGUR KARTI KALKULYATORU ===" << endl;

    // TODO 1: 
    // - sagirdin adi ucun 'studentName' adli string deyisen elan edin
    // - sagirdin yasi ucun 'studentAge' adli int deyisen elan edin
    // - sagirdin imtahan bali ucun 'examScore' adli double deyisen elan edin
    string studentName;
    int studentAge;
    double examScore;

    // TODO 2: 
    // cout ile ekrana istifadeciye xeberdarliq cixarin ve cin ile bu melumatlari daxil edin.
    cout << "Sagirdin adini daxil edin: ";
    cin >> studentName;

    cout << "Sagirdin yasini daxil edin: ";
    cin >> studentAge;

    cout << "Informatika imtahan balini daxil edin (0 - 100): ";
    cin >> examScore;

    // TODO 3:
    // 100 bala catmaq ucun nece bal catismadigini 'pointsNeeded' deyiseninde hesablayin:
    // pointsNeeded = 100.0 - examScore
    double pointsNeeded = 100.0 - examScore;

    // TODO 4:
    // Formatlanmis sekilde ekrana cap edin:
    cout << "\n========================================" << endl;
    cout << "        RESMI NETICE MELUMATNAMESI      " << endl;
    cout << "========================================" << endl;
    cout << "Sagird:           " << studentName << endl;
    cout << "Yas:              " << studentAge << " yas" << endl;
    cout << "Toplanan bal:     " << examScore << " bal" << endl;
    cout << "Maksimuma catismazliq: " << pointsNeeded << " bal" << endl;
    cout << "========================================" << endl;

    return 0;
}
