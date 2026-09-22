# Ev Tapşırığı 01: C++ Sintaksisinə Giriş və Xətti Hesablamalar

**Məktəb:** Bakı Ali Neft Məktəbinin (BANM) nəzdində Rəqəmsal Biliklər Liseyi  
**Fənn:** İnformatika (8-ci sinif)  
**Müəllim:** [Avaz Əsgərov](https://www.linkedin.com/in/avaz-asgarov/)  
**Mövzu:** C++ proqramının strukturu, `cout`, `cin`, dəyişənlər (`int`, `double`, `string`), riyazi operatorlar (`+`, `-`, `*`, `/`, `%`)  
**Maksimal Bal:** 100 bal  
**Təhvil forması:** Çap edilmiş iş vərəqi / Müəllimə göndərilən `.cpp` faylları  

---

## 🎯 Tapşırığın Məqsədi
Bu ev tapşırığı Flowgorithm-də öyrəndiyiniz xətti alqoritm anlayışlarını C++ mətn əsaslı proqramlaşdırma dilinə daşımaq, düzgün dəyişən tiplərini seçmək və tam bölmə (`/`) ilə qalıq tapma (`%`) operatorlarının fərqini real layihələrdə tətbiq etmək məqsədi daşıyır.

---

## HİSSƏ A: Nəzəriyyə və Kod Analizi (30 Bal)

### Sual 1: C++ Proqramının Əsas Strukturu (5 bal)
C++ proqramının başında yazılan `#include <iostream>` sətri və `using namespace std;` ifadəsi nə üçündür? Onları yazmasaq `cout` və `cin` əmrlərindən istifadə edə bilərikmi? Qısa izah edin.

### Sual 2: Xüsusi Simvollar (5 bal)
Aşağıdakı simvolların proqram çıxışında nə rol oynadığını yazın:
1. `\n` simvolu nə edir və `endl` ilə fərqi nədir?
2. `\t` simvolu nə üçün istifadə edilir?
3. Ekrana dırnaq içərisində mətn çıxarmaq üçün nə üçün `\"` yazılmalıdır?

### Sual 3: Konsol Çıxışının Təyini (Predict Output) (10 bal)
Aşağıdakı kod parçası icra olunduqda ekrana hansı sətirlər çıxacaq? Dəqiq qeyd edin:
```cpp
int a = 23;
int b = 4;
cout << "Netice 1: " << a / b << endl;
cout << "Netice 2: " << a % b << endl;
cout << "Netice 3: " << a + b * 2 << endl;
```

### Sual 4: Sintaksis Xətalarının Düzəldilməsi (10 bal)
Aşağıdakı C++ kodunda **4 ədəd sintaksis və ya məntiqi xəta** var. Hər bir xətanı tapın və düzgün variantını yazın:
```cpp
#include <iostream>
using namespace std;

int main() {
    int qiymet = 12.5;
    cin << say;
    cout >> "Cemi: " >> qiymet * say
    return 0
}
```

---

## HİSSƏ B: Praktik Proqramlaşdırma Məsələləri (70 Bal)

### Məsələ 1: Valyuta Dəyişmə Məntəqəsi Kalkulyatoru (20 bal)
İstifadəçidən konvertasiya etmək istədiyi manat məbləğini (`double aznAmount`) və cari dollar məzənnəsini (`double exchangeRate`, məsələn `1.70`) daxil etməsini istəyin. Proqram həmin məbləğin neçə ABŞ dolları etdiyini hesablamalı və səliqəli şəkildə ekrana çıxarmalıdır.
* **Düstur:** `usdAmount = aznAmount / exchangeRate`
* **Nümunə Giriş:**
  ```text
  Deyisilecek meblegi daxil edin (AZN): 340
  Cari dollar mezennesini daxil edin (1 USD nece AZN-dir): 1.70
  ```
* **Nümunə Çıxış:**
  ```text
  340 AZN = 200 USD teskil edir.
  ```

---

### Məsələ 2: Avtomobil Səyahəti və Yanacaq Xərci (25 bal)
Ailə Bakıdan Qəbələyə səyahət edir. İstifadəçidən aşağıdakı 3 məlumatı daxil etməsini istəyən C++ proqramı yazın:
1. Gedilən ümumi məsafə (`distanceKm`, km ilə)
2. Avtomobilin hər 100 km üçün sərf etdiyi yanacaq miqdarı (`fuelPer100Km`, litr ilə)
3. 1 litr benzinin qiyməti (`pricePerLiter`, AZN ilə)

Proqram səyahət üçün cəmi neçə litr benzin lazım olduğunu və ailənin yanacağa nə qədər pul xərcləyəcəyini hesablamalıdır.
* **Düsturlar:**
  * `totalFuelNeeded = (distanceKm / 100.0) * fuelPer100Km`
  * `totalFuelCost = totalFuelNeeded * pricePerLiter`
* **Nümunə Giriş:**
  ```text
  Mesafeni daxil edin (km): 250
  100 km-e serfiyyati daxil edin (litr): 8.0
  1 litr benzinin qiymeti (AZN): 1.00
  ```
* **Nümunə Çıxış:**
  ```text
  Teleb olunan yanacaq: 20 litr
  Umumi yanacaq xerci: 20 AZN
  ```

---

### Məsələ 3: Saniyə Ölçən və Saat/Dəqiqə/Saniyə Bölgüsü (25 bal)
İdman yarışında qaçışçının nəticəsi saniyəölçənlə yalnız tam saniyə ilə qeydə alınır (məsələn, 3725 saniyə).
Tam bölmə (`/`) və qalıq tapma (`%`) operatorlarından istifadə edərək bu ümumi saniyəni **saat, dəqiqə və saniyə** formatına ayıran C++ proqramı yazın.
* **İpucu:**
  * 1 saat = 3600 saniyədir.
  * 1 dəqiqə = 60 saniyədir.
  * `hours = totalSeconds / 3600;`
  * `remainingSeconds = totalSeconds % 3600;`
  * `minutes = remainingSeconds / 60;`
  * `seconds = remainingSeconds % 60;`
* **Nümunə Giriş:**
  ```text
  Umumi saniye sayini daxil edin: 3725
  ```
* **Nümunə Çıxış:**
  ```text
  3725 saniye = 1 saat, 2 deqiqe, 5 saniyedir.
  ```

---

## 📊 Qiymətləndirmə Meyarları (Rubrik)
| Meyar | Bal | Təsvir |
| :--- | :---: | :--- |
| **Nəzəri Suallar və Kod Analizi** | 30 | Konseptual anlama, çıxışın dəqiq təyini və sintaksis xətalarının düzəldilməsi |
| **Düzgün Dəyişən Tipləri** | 15 | `int` və `double` tiplərinin yerində və məqsədyönlü seçilməsi |
| **Giriş və Çıxış İstifadəçi Təcrübəsi** | 15 | Hər `cin`-dən əvvəl aydın `cout` bildirişinin olması və nəticənin oxunaqlı təqdimatı |
| **Düsturların Düzgün Hesablanması** | 30 | Riyazi hesablamaların və tam/qalıq bölmələrinin dəqiqliyi |
| **Kod Standartları və Şərhlər** | 10 | Dəyişənlərin ingilis dilində mənalı adlandırılması, səliqəli struktur |
| **CƏMİ** | **100** | |
