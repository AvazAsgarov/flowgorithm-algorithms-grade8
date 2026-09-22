/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Musteqil Praktika: Tapsiriq 4 - Zaman Ceviricisi (Hours and Minutes Converter)
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * MESELE:
 * Istifadeciden deqiqe ile umumi vaxti qebul eden (meselen, 145 deqiqe),
 * tam bolme (/) ve qaliq tapma (%) operatorlarindan istifade ederek
 * hemin muddetin nece saat ve nece deqiqe oldugunu hesablayib ekrana
 * cixaran proqram yazin.
 * 
 * IPUCU:
 * 1 saat = 60 deqiqedir.
 * saat = umumiDeqiqe / 60
 * qaliqDeqiqe = umumiDeqiqe % 60
 */

#include <iostream>

using namespace std;

int main() {
    int totalMinutes;

    cout << "=== ZAMAN CEVIRICI KALKULYATORU ===" << endl;
    cout << "Umumi deqiqe sayini daxil edin: ";
    cin >> totalMinutes;

    int hours = totalMinutes / 60;
    int remainingMinutes = totalMinutes % 60;

    cout << "\n----------------------------------------" << endl;
    cout << "Giris: " << totalMinutes << " deqiqe" << endl;
    cout << "Netice: " << hours << " saat ve " << remainingMinutes << " deqiqe." << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
