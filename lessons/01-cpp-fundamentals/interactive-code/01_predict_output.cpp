/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Sagird Interaktiv Praktika 01: Neticeni Evvelceden Texmin Et (Predict Output)
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * TELIMAT:
 * Bu proqrami run etmezden EVVEL, her bir hissenin konsolda ne cap edeceyini
 * oz defterinize qeyd edin!
 * Butun texminlerinizi yazdiqdan sonra proqrami kompile edib calisdirin ve
 * neticelerinizi muqayise edin!
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "===== TAPSHIRIQ 1: METN VE EDEDLERIN FERQI =====" << endl;
    // Texmin et: Ekrana ne cixacaq?
    cout << "10 + 20" << endl;
    cout << 10 + 20 << endl;
    cout << "Cavab: " << 10 + 20 << endl;


    cout << "\n===== TAPSHIRIQ 2: TAM BOLME VE QALIQ =====" << endl;
    // Texmin et: a / b ve a % b ne verecek?
    int a = 19;
    int b = 4;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;


    cout << "\n===== TAPSHIRIQ 3: AMELIYATLARIN ARDICILLIGI (PRECEDENCE) =====" << endl;
    // Texmin et: Riyazi emel ardicilligi nece olacaq?
    int x = 2 + 3 * 4;
    int y = (2 + 3) * 4;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;


    cout << "\n===== TAPSHIRIQ 4: DEYISENIN DEYISDIRILMESI VE ARTIM =====" << endl;
    // Texmin et: m ve n qiymetleri nece deyisir?
    int m = 10;
    int n = 5;
    m += n;    // m indi necedir?
    n++;       // n indi necedir?
    m = m - 2; // m indi necedir?
    cout << "m = " << m << ", n = " << n << endl;


    cout << "\n===== TAPSHIRIQ 5: ESCAPE SIMVOLLARI (\\n ve \\t) =====" << endl;
    // Texmin et: Setir ve bosluq duzulusu nece gorunecek?
    cout << "A\tB\tC\n1\t2\t3\n";

    return 0;
}
