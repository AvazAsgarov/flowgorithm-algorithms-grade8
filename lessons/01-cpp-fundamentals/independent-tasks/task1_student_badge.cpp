/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Musteqil Praktika: Tapsiriq 1 - Sagird Yaxa Karti (Student Badge Generator)
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * MESELE:
 * Istifadeciden adini, soyadini, oxudugu sinfi ve sevimli fennini sorusan,
 * daha sonra bu melumatlari cerciveye alinmis seliqeli yaxa karti (badge)
 * seklinde ekrana cap eden proqram yazin.
 * 
 * GIRIS NUMUNESI:
 * Ad: Murad
 * Soyad: Eliyev
 * Sinif: 8A
 * Sevimli fenn: Informatika
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName;
    string lastName;
    string className;
    string favoriteSubject;

    cout << "=== SAGIRD YAXA KARTI YARATMA SISTEMI ===" << endl;
    cout << "Adinizi daxil edin: ";
    cin >> firstName;

    cout << "Soyadinizi daxil edin: ";
    cin >> lastName;

    cout << "Sinfinizi daxil edin (meselen, 8A): ";
    cin >> className;

    cout << "Sevimli fenninizi daxil edin: ";
    cin >> favoriteSubject;

    cout << "\n+--------------------------------------------------+" << endl;
    cout << "|     BAKI ALI NEFT MEKTEBININ NEZDINDE            |" << endl;
    cout << "|          REQEMSAL BILIKLER LISEYI                |" << endl;
    cout << "+--------------------------------------------------+" << endl;
    cout << "|  Sagird:      " << firstName << " " << lastName << endl;
    cout << "|  Sinif:       " << className << endl;
    cout << "|  Sevimli fenn:" << favoriteSubject << endl;
    cout << "|  Tedris ili:  2026-2027                          |" << endl;
    cout << "+--------------------------------------------------+" << endl;

    return 0;
}
