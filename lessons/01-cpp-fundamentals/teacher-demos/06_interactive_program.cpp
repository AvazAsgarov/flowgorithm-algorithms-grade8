/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Muellim Demo 06: Real Heyat Tetbiqi - Otaq Olculeri ve Xercler Kalkulyatoru
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * Flowgorithm-den C++ diline kecid:
 * Bu proqram evvel blok-sxemde qurdugumuz "Xetti Alqoritm" modelinin
 * C++ dilinde tam, pesekar metn esasli realization-dur.
 * 
 * Alqoritmin merheleleri:
 * 1. Giris: Otaqin uzunlugu, eni ve 1 m^2 laminatin qiymeti
 * 2. Emeliyyat:
 *    - perimetr = 2 * (uzunluq + en)
 *    - sahe = uzunluq * en
 *    - umumiXerc = sahe * birKvadratinQiymeti
 * 3. Cixis: Formatlasdirilmis hesabat
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "==========================================================" << endl;
    cout << "  BANM REQEMSAL BILIKLER LISEYI - KOMPUTER LABORATORIYASI " << endl;
    cout << "       OTAQ TEMIRI VE DOSEME XERCLERI KALKULYATORU        " << endl;
    cout << "==========================================================" << endl;

    // Deyisenlerin elan edilmesi
    string roomName;
    double roomLength;
    double roomWidth;
    double pricePerSquareMeter;

    // Istifadeciden melumatlarin qebulu
    cout << "\nLaboratoriya otaqinin adini daxil edin: ";
    cin >> roomName;

    cout << "Otaqin uzunlugunu daxil edin (metrle): ";
    cin >> roomLength;

    cout << "Otaqin enini daxil edin (metrle): ";
    cin >> roomWidth;

    cout << "1 kvadrat metr laminatin qiymetini daxil edin (AZN): ";
    cin >> pricePerSquareMeter;

    // Hesablamalar
    double perimeter = 2.0 * (roomLength + roomWidth);
    double area = roomLength * roomWidth;
    double totalCost = area * pricePerSquareMeter;

    // Neticelerin seliqeli formatda teqdim edilmesi
    cout << "\n==========================================================" << endl;
    cout << "                     HESABAT NETICESI                     " << endl;
    cout << "==========================================================" << endl;
    cout << "Otaq:                       " << roomName << endl;
    cout << "Uzunluq:                    " << roomLength << " m" << endl;
    cout << "En:                         " << roomWidth << " m" << endl;
    cout << "Perimetr (kant / plintus):  " << perimeter << " m" << endl;
    cout << "Doseme sahesi:              " << area << " m^2" << endl;
    cout << "1 m^2 laminat qiymeti:      " << pricePerSquareMeter << " AZN" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "YEKUN DOSEME XERCI:         " << totalCost << " AZN" << endl;
    cout << "==========================================================" << endl;

    return 0;
}
