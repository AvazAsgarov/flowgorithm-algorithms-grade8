/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Muellim Demo 01: C++ Proqraminin Esas Qurulusu (Basic Structure)
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * Bu numunede oyreneceyik:
 * 1. Kitabxana qosulmasi: #include <iostream>
 * 2. Ad fezasinin teyini: using namespace std;
 * 3. Esas funksiya: int main() { ... }
 * 4. Ekrana cap etme emri: cout ve << operatoru
 * 5. Metn, eded ve riyazi ifadelerin ekrana cixarilmasi
 * 6. Proqramin ugurla bitmesi: return 0;
 */

#include <iostream>

using namespace std;

int main() {
    // 1. Sadə mətn çıxışı (qoşa dırnaq içərisində)
    cout << "Salam, Dunya!";
    cout << endl; // Yeni sətirə keçid

    // 2. Ədədlərin ekrana çıxarılması (dırnaqsız yazılır)
    cout << 2026;
    cout << endl;

    // 3. Riyazi ifadələrin birbaşa hesablanaraq çıxarılması
    cout << "5 + 3 = ";
    cout << 5 + 3;
    cout << endl;

    // 4. Birdən çox məlumatın zəncirvari (<<) çıxarılması
    cout << "BANM Reqemsal Bilikler Liseyi - 8-ci Sinif Informatika" << endl;
    cout << "Dairenin sahesi dusturunda pi sabiti texminen: " << 3.14159 << endl;

    // 5. Proqramın uğurla tamamlandığını əməliyyat sisteminə bildirir
    return 0;
}
