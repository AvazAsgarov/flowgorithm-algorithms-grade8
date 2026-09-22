/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Muellim Demo 04: Istifadeciden Melumat Qebulu: cin Operatoru
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * Bu numunede oyreneceyik:
 * 1. cin operatoru nedir? (Console Input - Klaviaturadan daxiletme)
 * 2. Oxlarin istiqameti: cin >> deyisen; (cout << eksine!)
 * 3. QIZIL QAYDA: cin-den once mutleq cout ile melumatverici bildiris cixarilmalidir!
 * 4. Muxtelif tiplerde daxiletme (int, double, string)
 * 5. Bir nece deyeri ardicil oxumaq: cin >> a >> b;
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string studentName;
    int birthYear;
    double dailyAllowance;

    cout << "=== SAGIRD QEYDIYYAT PROQRAMI ===" << endl;

    // 1. Metn daxiletme
    cout << "Adinizi daxil edin: ";
    cin >> studentName;

    // 2. Tam eded daxiletme
    cout << "Dogum ilinizi daxil edin (meselen, 2012): ";
    cin >> birthYear;

    // 3. Kesr eded daxiletme
    cout << "Gunluk cib xercliyinizi daxil edin (AZN): ";
    cin >> dailyAllowance;

    // 4. Hesablama ve netice
    int currentYear = 2026;
    int calculatedAge = currentYear - birthYear;
    double weeklyAllowance = dailyAllowance * 5; // 5 ders gunu

    cout << "\n----------------------------------------" << endl;
    cout << "Xos geldin, " << studentName << "!" << endl;
    cout << "Sizin hesablanan yasiniz: " << calculatedAge << " yas" << endl;
    cout << "5 gunluk mekteb xercliyiniz: " << weeklyAllowance << " AZN" << endl;
    cout << "----------------------------------------" << endl;

    // 5. Bir setirde iki eded oxumaq numunesi:
    int num1, num2;
    cout << "\nIki tam eded daxil edin (aralarinda bosluq qoyaraq): ";
    cin >> num1 >> num2;
    cout << "Daxil edilen ededlerin cemi: " << num1 + num2 << endl;

    return 0;
}
