/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Musteqil Praktika: Tapsiriq 3 - Mektebli Levazimatlari Magaza Qebzi
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * MESELE:
 * Sagird mekteb bazarligi edir. Istifadeciden alinan defterlerin sayi ve 1 ededinin
 * qiymeti, elece de alinan qelemlerin sayi ve 1 ededinin qiymeti daxil edilir.
 * Proqram her iki mehsul ucun ayri-ayri xercleri ve yekun odenis meblegini
 * hesablayib kassa ceki formatinda ekrana cixarir.
 */

#include <iostream>

using namespace std;

int main() {
    int notebookCount;
    double notebookPrice;
    int penCount;
    double penPrice;

    cout << "=== MEKTEBLI LEVAZIMATI KASSA SISTEMI ===" << endl;

    cout << "Alinan defter sayini daxil edin: ";
    cin >> notebookCount;
    cout << "1 eded defterin qiymeti (AZN): ";
    cin >> notebookPrice;

    cout << "Alinan qelem sayini daxil edin: ";
    cin >> penCount;
    cout << "1 eded qelemin qiymeti (AZN): ";
    cin >> penPrice;

    double notebookTotal = notebookCount * notebookPrice;
    double penTotal = penCount * penPrice;
    double grandTotal = notebookTotal + penTotal;

    cout << "\n========================================" << endl;
    cout << "             MAGAZA CEKI                " << endl;
    cout << "========================================" << endl;
    cout << "Mehsul\t\tSay\tQiymet\tCem" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Defter\t\t" << notebookCount << "\t" << notebookPrice << "\t" << notebookTotal << " AZN" << endl;
    cout << "Qelem\t\t" << penCount << "\t" << penPrice << "\t" << penTotal << " AZN" << endl;
    cout << "----------------------------------------" << endl;
    cout << "YEKUN ODENIS MEBLEGI:       " << grandTotal << " AZN" << endl;
    cout << "========================================" << endl;

    return 0;
}
