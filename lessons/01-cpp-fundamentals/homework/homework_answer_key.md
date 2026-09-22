# Ev Tapşırığı 01 — Müəllim Cavab Açarı və Qiymətləndirmə Təlimatı

**Məktəb:** Bakı Ali Neft Məktəbinin (BANM) nəzdində Rəqəmsal Biliklər Liseyi  
**Müəllim:** [Avaz Əsgərov](https://www.linkedin.com/in/avaz-asgarov/)  
**Fənn:** İnformatika (8-ci sinif)  
**Mövzu:** C++ Dilinin Əsasları və Xətti Alqoritmlər  

---

> [!NOTE]
> Bu sənəd yalnız fənn müəllimi üçün nəzərdə tutulub. Şagirdlərə paylanan iş vərəqələrində və tapşırıq sənədlərində heç bir cavab və ya həll kodu yer almır.

---

## HİSSƏ A: Nəzəriyyə və Kod Analizi Cavabları (30 Bal)

### Sual 1 (5 bal)
- **Cavab:**
  - `#include <iostream>` C++ dilində standart giriş/çıxış axınları kitabxanasını (Input/Output Stream) koda qoşur. Bu kitabxana olmadan kompilyator `cout` və `cin` əmrlərini tanıya bilməz.
  - `using namespace std;` standart C++ kitabxanasındakı bütün adları (`cout`, `cin`, `endl`, `string` və s.) prefikssiz yazmağa imkan verir. Əks halda hər dəfə `std::cout`, `std::cin` yazmalı olardıq.
- **Qiymətləndirmə:**
  - `iostream` izahı: 3 bal
  - `namespace std` izahı: 2 bal

### Sual 2 (5 bal)
- **Cavab:**
  - `\n` yeni sətrə keçid escape simvoludur. `endl` həm yeni sətrə keçir, həm də çıxış buferini boşaldır (flush).
  - `\t` bir tab məsafəsi qədər (adətən 4 və ya 8 boşluq) üfüqi məsafə qoyur; sütunlu məlumatları və cədvəlləri nizamlamaq üçündür.
  - `\"` C++ dilində qoşa dırnağı mətn daxilində simvol kimi ekrana çap etmək üçündür, çünki adi `"` işarəsi mətnin bitdiyini bildirir.
- **Qiymətləndirmə:**
  - `\n` və `endl`: 2 bal
  - `\t`: 1.5 bal
  - `\"`: 1.5 bal

### Sual 3 (10 bal)
- **Cavab:**
  ```text
  Netice 1: 5
  Netice 2: 3
  Netice 3: 31
  ```
- **İzah:**
  - `23 / 4`: hər ikisi `int` olduğu üçün tam bölmə icra olunur, kəsr hissə atılır: `5` alınır. (3 bal)
  - `23 % 4`: 23-ü 4-ə böldükdə qalıq `3` qalır. (3 bal)
  - `a + b * 2`: əməllərin prioriteti qaydasına əsasən əvvəlcə vurma `4 * 2 = 8`, sonra toplama `23 + 8 = 31` hesablanır. (4 bal)

### Sual 4 (10 bal)
- **Xətalar və Düzəlişlər:**
  1. `int qiymet = 12.5;` $\rightarrow$ `qiymet` kəsr ədəddir, buna görə tipi `double` olmalıdır (`double qiymet = 12.5;`). Əks halda 12.5 kəsri 12-yə yuvarlaqlaşır. (2.5 bal)
  2. `cin << say;` $\rightarrow$ `say` dəyişəni elan edilməyib (`int say;`) və `cin` ilə `>>` istifadə olunmalıdır: `cin >> say;`. (2.5 bal)
  3. `cout >> "Cemi: " >> ...` $\rightarrow$ `cout` ilə çıxış operatoru `<<` olmalıdır və sətrin sonunda nöqtə-vergül `;` çatışmır. (2.5 bal)
  4. `return 0` $\rightarrow$ Sətrin sonunda nöqtə-vergül `;` qoyulmalıdır (`return 0;`). (2.5 bal)

---

## HİSSƏ B: Praktik Proqramlaşdırma Həlləri (70 Bal)

### Məsələ 1 Həlli: Valyuta Kalkulyatoru (20 bal)
```cpp
#include <iostream>

using namespace std;

int main() {
    double aznAmount;
    double exchangeRate;

    cout << "=== VALYUTA DEYISME HESABLAYICISI ===" << endl;
    cout << "Deyisilecek meblegi daxil edin (AZN): ";
    cin >> aznAmount;

    cout << "Cari dollar mezennesini daxil edin (1 USD = ? AZN): ";
    cin >> exchangeRate;

    double usdAmount = aznAmount / exchangeRate;

    cout << "\n----------------------------------------" << endl;
    cout << aznAmount << " AZN = " << usdAmount << " USD teskil edir." << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
```

---

### Məsələ 2 Həlli: Yanacaq Sərfiyyatı və Xərc (25 bal)
```cpp
#include <iostream>

using namespace std;

int main() {
    double distanceKm;
    double fuelPer100Km;
    double pricePerLiter;

    cout << "=== AVTOMOBIL YANACAQ VE XERC KALKULYATORU ===" << endl;
    cout << "Mesafeni daxil edin (km): ";
    cin >> distanceKm;

    cout << "100 km-e serfiyyati daxil edin (litr): ";
    cin >> fuelPer100Km;

    cout << "1 litr benzinin qiymetini daxil edin (AZN): ";
    cin >> pricePerLiter;

    double totalFuelNeeded = (distanceKm / 100.0) * fuelPer100Km;
    double totalFuelCost = totalFuelNeeded * pricePerLiter;

    cout << "\n========================================" << endl;
    cout << "            SERFIYYAT HESABATI          " << endl;
    cout << "========================================" << endl;
    cout << "Qet edilen mesafe:    " << distanceKm << " km" << endl;
    cout << "Teleb olunan yanacaq: " << totalFuelNeeded << " litr" << endl;
    cout << "Umumi yanacaq xerci:  " << totalFuelCost << " AZN" << endl;
    cout << "========================================" << endl;

    return 0;
}
```

---

### Məsələ 3 Həlli: Saniyə Ölçən və Vaxt Bölgüsü (25 bal)
```cpp
#include <iostream>

using namespace std;

int main() {
    int totalSeconds;

    cout << "=== SANIYE OLCON VE VAXT BOLGUSU ===" << endl;
    cout << "Umumi saniye sayini daxil edin: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int remainingSeconds = totalSeconds % 3600;
    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;

    cout << "\n----------------------------------------" << endl;
    cout << totalSeconds << " saniye = " 
         << hours << " saat, " 
         << minutes << " deqiqe, " 
         << seconds << " saniyedir." << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
```
