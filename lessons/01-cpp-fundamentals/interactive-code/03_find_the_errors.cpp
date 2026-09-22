/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Sagird Interaktiv Praktika 03: Sehvi Tap ve Duzelt (Find & Fix the Errors)
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * TELIMAT:
 * Proqramlasdirmada en vacib bacariqlardan biri "kompilyasiya xetalarini oxumaq"
 * ve kodda olan xetalari musteqil askarlayib aradan qaldirmaqdir.
 * 
 * Asagida 8-ci sinif sagirdlerinin C++ oyrenende EN COX etdiyi 6 xeta toplusu var.
 * Her bir sehvi serhden cixarib ne xetasi verdiyine baxin, sonra duzelis edin!
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "=== EN COX RAST GELINEN 6 C++ XETASI VE IZAHI ===" << endl;

    // XETA 1: Noqte-vergulun (;) unudulmasi
    // SEHV:  cout << "Salam"
    // DUZGUN:
    cout << "1. Noqte-vergul xetasi: Her bir emrin sonunda ';' olmalidir!" << endl;

    // XETA 2: cout ve cin operatorlarinin oxlarinin sehv qoyulmasi
    // SEHV:  cin << score;  (cin ile << islenmez!)
    // SEHV:  cout >> "Bal"; (cout ile >> islenmez!)
    // DUZGUN:
    int sampleScore = 100;
    cout << "2. Oxlarin istiqameti xetasi: cout << (cixis), cin >> (giris). Bal: " << sampleScore << endl;

    // XETA 3: Metnlerin dırnaqsız yazılması
    // SEHV:  cout << Salam Dunya; (Kompilyator bunu elan edilmemis deyisen hesab edir)
    // DUZGUN:
    cout << "3. Dirnaq xetasi: Butun metnler mutleq qosa dirnaq \"...\" icinde olmalidir!" << endl;

    // XETA 4: Boyuk ve kicik herflerin qarisdirilmasi (Case Sensitivity)
    // SEHV:  Cout << "Test"; ve ya INT a = 5; (C++ boyuk-kicik herfe hessasdir!)
    // DUZGUN:
    int correctLowerVariable = 10;
    cout << "4. Reqistr xetasi: cout, cin, int kicik herflerle yazilir! Qiymet: " << correctLowerVariable << endl;

    // XETA 5: Deyiseni elan etmezden once istifade etmek
    // SEHV:
    //   total = 50; // XETA: 'total' was not declared in this scope!
    //   int total;
    // DUZGUN:
    int total = 50;
    cout << "5. Elan xetasi: Deyisenden istifade etmezden ONCE onun tipi qeyd olunmalidir. Total: " << total << endl;

    // XETA 6: Tam bolmede kesr gozlemek (Menteqi xeta)
    // SEHV GOZLENTI: int a = 5; int b = 2; double c = a / b; (Cavab 2.0 olur, 2.5 yox!)
    // DUZGUN:
    int a = 5;
    int b = 2;
    double correctDivision = (double)a / b;
    cout << "6. Tam bolme xetasi: 5 / 2 = 2 olur! Kesr almaq ucun (double)5 / 2 = " << correctDivision << endl;

    cout << "\nTebrikler! Butun xetalari oyrendiniz ve kod ugurla isledi!" << endl;

    return 0;
}
