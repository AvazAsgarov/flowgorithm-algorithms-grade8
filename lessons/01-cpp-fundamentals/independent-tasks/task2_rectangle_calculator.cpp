/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Musteqil Praktika: Tapsiriq 2 - Duzbucaqlinin Sahesi ve Perimetri
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * MESELE:
 * Istifadeciden duzbucaqli formasinda olan sinif otaqinin uzunlugunu ve enini
 * (kesr eded olaraq) qebul eden, onun perimetrini ve sahesini hesablayib
 * ekrana cixaran proqram yazin.
 * 
 * DUSTURLAR:
 * Perimetr = 2 * (uzunluq + en)
 * Sahe = uzunluq * en
 */

#include <iostream>

using namespace std;

int main() {
    double length;
    double width;

    cout << "=== DUZBUCAQLI OTAQ KALKULYATORU ===" << endl;
    cout << "Otaqin uzunlugunu daxil edin (metr): ";
    cin >> length;

    cout << "Otaqin enini daxil edin (metr): ";
    cin >> width;

    double perimeter = 2.0 * (length + width);
    double area = length * width;

    cout << "\n------------------------------------" << endl;
    cout << "GIRIS PARAMETRLERI:" << endl;
    cout << "Uzunluq:  " << length << " metr" << endl;
    cout << "En:       " << width << " metr" << endl;
    cout << "------------------------------------" << endl;
    cout << "HESABLANAN NETICELER:" << endl;
    cout << "Perimetr: " << perimeter << " metr" << endl;
    cout << "Sahe:     " << area << " kvadrat metr" << endl;
    cout << "------------------------------------" << endl;

    return 0;
}
