/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Sagird Interaktiv Praktika 02: Bosluqlari Doldur (Fill in the Blanks)
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * TELIMAT:
 * Asagidaki kodda bezi acar sozler, melumat tipleri ve operatorlar [???]
 * kimi qeyd edilib. 
 * Her bir suali diqqetle oxuyun ve hemin yerlere duzgun C++ sintaksisini yazaraq
 * proqrami sehv-siz sekilde isleyin!
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "=== BOSLUQLARI DOLDURMA PRAKTIKASI ===" << endl;

    // SUAL 1: Tam eded saxlamaq ucun hansi melumat tipi yazilmalidir?
    // /* ??? */ studentAge = 14;
    int studentAge = 14;
    cout << "1. Sagirdin yasi: " << studentAge << endl;

    // SUAL 2: Kesr eded saxlamaq ucun hansi melumat tipi yazilmalidir?
    // /* ??? */ gpa = 96.5;
    double gpa = 96.5;
    cout << "2. Sagirdin orta bali: " << gpa << endl;

    // SUAL 3: Metn saxlamaq ucun hansi tip yazilmalidir?
    // /* ??? */ studentName = "Ali";
    string studentName = "Ali";
    cout << "3. Sagirdin adi: " << studentName << endl;

    // SUAL 4: Ekrana cap etmek ucun hansi operator (<< yoxsa >>) islenmelidir?
    // cout /* ??? */ "Salam, " /* ??? */ studentName /* ??? */ endl;
    cout << "4. Salam, " << studentName << endl;

    // SUAL 5: 23 ededini 5-e boldukde qaligi tapmaq ucun hansi operator yazilmalidir?
    int dividend = 23;
    int divisor = 5;
    // int remainder = dividend /* ??? */ divisor;
    int remainder = dividend % divisor;
    cout << "5. 23 % 5 qaligi: " << remainder << endl;

    // SUAL 6: Proqramin ugurla tamamlandigini bildirmek ucun ne yazilmalidir?
    // /* ??? */ 0;
    return 0;
}
