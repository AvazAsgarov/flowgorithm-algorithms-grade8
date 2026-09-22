/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Muellim Demo 02: Xususi Simvollar (Escape Sequences) ve Serhler (Comments)
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * Bu numunede oyreneceyik:
 * 1. Teksetirli serhler: //
 * 2. Coxsetirli serhler: coxsetirli blok qeydleri
 * 3. Yeni setire kecid simvolu: \n (newline)
 * 4. Tab (bosluq sutunlandirma) simvolu: \t (tab)
 * 5. Dirnaq simvolunu cap etmek: \"
 */

#include <iostream>

using namespace std;

int main() {
    // BU TEKSETIRLI SERHDIR: Kompilyator bu setri oxumur ve nezere almir.
    // Proqramci qeydleri ucun nezerde tutulub.

    /*
     * BU ISE COXSETIRLI SERHDIR.
     * Istediyimiz qeder setirde
     * izahatlar ve qeydler yaza bilerik.
     */

    cout << "=== 1. Yeni Setir: \\n istifadesi ===" << endl;
    cout << "Setir 1\nSetir 2\nSetir 3\n\n";

    cout << "=== 2. Cedvel Qurulusu: \\t (Tab) istifadesi ===" << endl;
    cout << "No\tAd\t\tFenn\t\tBal" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "1\tAli\t\tInformatika\t95" << endl;
    cout << "2\tLeyla\t\tInformatika\t98" << endl;
    cout << "3\tMurad\t\tInformatika\t90" << endl;

    cout << "\n=== 3. Qosa Dirnaq Simvolunun Cixarilmasi: \\\" ===" << endl;
    cout << "Muellim dedi: \"C++ oyrenmek alqoritmik tefekkurunuzu inkisaf etdirir!\"" << endl;

    return 0;
}
