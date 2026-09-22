/**
 * ============================================================================
 * Ders 01: C++ Proqramlasdirmaya Giris
 * Muellim Demo 05: Hesab Operatorlari ve Qisa Yazilislar (Arithmetic & Shortcuts)
 * Muellim: Avaz Asgarov
 * Mekteb:  Baki Ali Neft Mektebinin (BANM) nezdinde Reqemsal Bilikler Liseyi
 * Sinif:   8-ci sinif
 * ============================================================================
 * 
 * Bu numunede oyreneceyik:
 * 1. Esas hesab emelleri: +, -, *, /, %
 * 2. VACIB TELE: Tam eded bolunmesi (Integer Division)
 *    - 7 / 2 cavabi 3 verir (kesr hisse atilir!)
 *    - Kesr cavab almaq ucun tereflerden biri kesr olmalidir: 7.0 / 2 = 3.5
 * 3. Qaliq tapma operatoru: % (Modulus)
 *    - Yalniz int (tam ededler) ucun kecerlidir.
 * 4. Qisa menimsedilmeler ve artim operatorlari:
 *    - ++ (1 vahid artir), -- (1 vahid azalt)
 *    - +=, -=, *=, /=
 */

#include <iostream>

using namespace std;

int main() {
    int a = 17;
    int b = 5;

    cout << "=== 1. ESAS HESAB EMELLERI (a = 17, b = 5) ===" << endl;
    cout << "Toplama (a + b): " << a + b << endl;
    cout << "Cixma   (a - b): " << a - b << endl;
    cout << "Vurma   (a * b): " << a * b << endl;

    cout << "\n=== 2. BOLME VE QALIQ EMELLIKLERI ===" << endl;
    // Tam eded bolunmesi:
    cout << "Tam bolme (17 / 5): " << a / b << " (Diqqet: 3.4 yox, 3 verir!)" << endl;
    // Qaliq emeli:
    cout << "Qaliq     (17 % 5): " << a % b << " (17-ni 5-e bolende qaliq 2-dir)" << endl;

    // Kesr netice almaq ucun double istifade edirik:
    double x = 17.0;
    double y = 5.0;
    cout << "Kesr bolme (17.0 / 5.0): " << x / y << " (Kesr hisse qorunur!)" << endl;

    cout << "\n=== 3. QISA MENIMSEDILMELER VE ARTIM (SHORTCUTS) ===" << endl;
    int score = 50;
    cout << "Ilkin xal: " << score << endl;

    score += 10; // score = score + 10 ile eynidir
    cout << "10 xal bonusdan sonra (score += 10): " << score << endl;

    score *= 2;  // score = score * 2 ile eynidir
    cout << "Iki qat artımdan sonra (score *= 2): " << score << endl;

    score++;     // score = score + 1 ile eynidir
    cout << "Bir vahid artimdan sonra (score++): " << score << endl;

    score--;     // score = score - 1 ile eynidir
    cout << "Bir vahid azalmadan sonra (score--): " << score << endl;

    return 0;
}
