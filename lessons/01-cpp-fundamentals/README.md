# Dərs 01: C++ Proqramlaşdırma Dilinə Giriş və Xətti Alqoritmlər

**Məktəb:** Bakı Ali Neft Məktəbinin (BANM) nəzdində Rəqəmsal Biliklər Liseyi  
**Fənn:** İnformatika  
**Sinif:** 8-ci sinif (30 şagird)  
**Müəllim:** [Avaz Əsgərov](https://www.linkedin.com/in/avaz-asgarov/) (İnformatika müəllimi | BANM Proseslərin Avtomatlaşdırılması Mühəndisliyi V kurs tələbəsi)  
**Dərsin Müddəti:** 2 x 40 dəqiqə (Cəmi 80 dəqiqə)  
**Tədris Metodologiyası:** Vizual bloklardan (Flowgorithm) mətn əsaslı mühəndislik proqramlaşdırmasına (C++) keçid.

---

## 🎯 Təlim Nəticələri (Dərsin Məqsədləri)

Bu dərsin sonunda şagirdlər:
1. C++ proqramının təməl strukturunu (`#include`, `main()`, `return 0`, `;`, `{}`) izah edə və sərbəst şəkildə yaza biləcəklər.
2. `cout <<` operatoru vasitəsilə mətni, ədədləri və riyazi hesablamaları ekrana çıxara biləcəklər.
3. `\n` və `\t` xüsusi simvollarını tətbiq edərək konsolda səliqəli cədvəl və abzas formatı qura biləcəklər.
4. Yaddaş qutusu anlayışını dərk edərək `int`, `double` və `string` dəyişənlərini elan və inisializasiya edə biləcəklər.
5. `cin >>` operatoru ilə klaviaturadan məlumat qəbul edəcək və "əvvəlcə bildiriş çıxar, sonra oxu" qaydasına riayət edəcəklər.
6. `+`, `-`, `*`, `/`, `%` operatorlarını tətbiq edəcək, tam bölmə (`/`) ilə kəsr bölmənin fərqini və qalıq (`%`) əməlini düzgün fərqləndirəcəklər.

---

## 🌉 Flowgorithm-dən C++ Dilinə Körpü (Pedagogical Bridge)

Şagirdlər əvvəlki dərslərdən Flowgorithm blokları ilə alqoritmik düşüncəni mənimsəyiblər. Lövhədə aşağıdakı müqayisə cədvəlini çəkərək yeni sintaksisi onlara tanış olan anlayışlarla bağlayın:

| Flowgorithm Bloku | Nəzəri Mənası | C++ Ekvivalenti | Əsas Qeyd |
| :--- | :--- | :--- | :--- |
| **Output (Çıxış)** | Ekrana məlumat çıxarmaq | `cout << "Salam" << endl;` | Oxlar çıxışı göstərir (`<<`), sonunda mütləq `;` |
| **Input (Giriş)** | Klaviaturadan dəyər oxumaq | `cin >> age;` | Oxlar dəyişənin içinə yönəlir (`>>`) |
| **Declare (Elan)** | Yaddaşda yer ayırmaq | `int age;` və ya `double price;` | Məlumat tipi dəyişənin adından əvvəl yazılır |
| **Assign (Mənimsətmə)** | Dəyişənə qiymət yazmaq | `age = 14;` | Sağdakı dəyər soldakı dəyişən qutusuna yazılır |
| **Start / End** | Proqramın başlanğıcı və sonu | `int main() { ... return 0; }` | Bütün kodlar `{ }` fiqurlu mötərizələr içində icra olunur |

---

## ⏱️ Dərs Planı və Vaxt Bölgüsü (2 x 40 Dəqiqə)

### HİSSƏ 1: C++ Dilinin Anatomiyası və Çıxış Əməliyyatları (40 Dəqiqə)

| Vaxt | Mərhələ | Fəaliyyət və Müəllim Təlimatı | Resurslar / Kod |
| :---: | :--- | :--- | :--- |
| **00--05 dəq** | Giriş və Motivasiya | BANM mühitində C++ dilinin rolu (robototexnika, sənaye avtomatlaşdırılması, olimpiadalar). "Artıq blokları arxada qoyuruq, əsl mühəndislər kimi kod yazırıq!" | Lövhə |
| **05--15 dəq** | C++ Proqramının Anatomiyası | `#include <iostream>` (alətlər qutusu), `using namespace std;`, `int main()`, `{ }` blokları və `;` qanunu. Hər bir elementin mənası lövhədə izah edilir. | [`01_hello_structure.cpp`](./teacher-demos/01_hello_structure.cpp) |
| **15--25 dəq** | `cout` və Axın Zənciri | Mətn (`"..."`) ilə ədədlərin (`2026`) fərqi. Riyazi ifadələrin birbaşa hesablanması (`cout << 5 + 3`). `<<` ilə zəncirvari çıxış. | [`01_hello_structure.cpp`](./teacher-demos/01_hello_structure.cpp) |
| **25--33 dəq** | Escape Simvolları və Şərhlər | `\n` (yeni sətir) vs `endl`. `\t` ilə konsolda seliqəli cədvəl qurmaq. Təksetirli (`//`) və çoxsetirli qeydlər. | [`02_escape_and_comments.cpp`](./teacher-demos/02_escape_and_comments.cpp) |
| **33--40 dəq** | İnteraktiv Sinif Yoxlaması | Şagirdlər ekrandakı kodun nəticəsini proqramı işə salmadan əvvəlcədən təxmin edirlər. Səhvlər kollektiv müzakirə olunur. | [`01_predict_output.cpp`](./interactive-code/01_predict_output.cpp) |

---

### Tənəffüs (10 dəqiqə)

---

### HİSSƏ 2: Dəyişənlər, `cin` Girişi və Hesab Operatorları (40 Dəqiqə)

| Vaxt | Mərhələ | Fəaliyyət və Müəllim Təlimatı | Resurslar / Kod |
| :---: | :--- | :--- | :--- |
| **40--50 dəq** | Dəyişənlər və Məlumat Tipləri | Yaddaş qutusu bənzətməsi. Dəyişənin elanı (`int x;`) və inisializasiyası (`int x = 10;`). Əsas tiplər: `int` (tam), `double` (kəsr), `string` (mətn). İngiliscə mənalı adlandırma qaydaları (`camelCase`). | [`03_variables_and_types.cpp`](./teacher-demos/03_variables_and_types.cpp) |
| **50--60 dəq** | Klaviaturadan Giriş: `cin >>` | `cin >> variable;` mexanizmi. **Qızıl Qayda:** `cin`-dən əvvəl həmişə `cout` ilə istifadəçiyə sual/bildiriş verilməlidir! Bir neçə dəyərin oxunması (`cin >> a >> b;`). | [`04_user_input_cin.cpp`](./teacher-demos/04_user_input_cin.cpp) |
| **60--70 dəq** | Hesab Əməlləri və Qalıq (`%`) | `+`, `-`, `*`, `/`, `%`. **Ən böyük tələ:** Tam bölmə (`17 / 5 = 3`). Kəsr bölmə üçün `double` istifadəsi (`17.0 / 5 = 3.4`). Qalıq operatorunun mahiyyəti (`17 % 5 = 2`). Qısa yazılışlar: `++`, `--`, `+=`. | [`05_arithmetic_and_shortcuts.cpp`](./teacher-demos/05_arithmetic_and_shortcuts.cpp) |
| **70--77 dəq** | Canlı Birlikdə Layihə | Otaq ölçüləri, perimetr, sahə və laminat xərcləri kalkulyatorunun icrası. Flowgorithm-dən C++ dilinə tam keçidin nümayişi. | [`06_interactive_program.cpp`](./teacher-demos/06_interactive_program.cpp) |
| **77--80 dəq** | Yekunlaşdırma və Ev Tapşırığı | Şagirdlərə çap olunmuş Ev Tapşırığı vərəqlərinin paylanması. Növbəti dərsin ilk 10 dəqiqəsində qısa təkrar quizinin olacağı elanı. | [`homework_worksheet.pdf`](./homework/homework_worksheet.pdf) |

---

## ⚠️ 8-ci Sinif Şagirdlərinin Ən Çox Etdiyi 5 Xəta və Həlli

1. **Nöqtə-vergülün (`;`) unudulması:**
   - *Əlamət:* `error: expected ';' before 'return'`
   - *Pedaqoji İzah:* "Azərbaycan dilində cümlənin sonunda nöqtə qoyduğumuz kimi, C++ dilində hər bir əmrin sonunda nöqtə-vergül qoymalıyıq."
2. **`cout` və `cin` oxlarının səhv salınması:**
   - *Əlamət:* `cin << x;` və ya `cout >> "Salam";`
   - *Pedaqoji İzah:* "Oxlar məlumatın hara getdiyini göstərir: `cout <<` məlumatı ekrana göndərir, `cin >>` isə klaviaturadan alıb dəyişən qutusunun içinə tökür!"
3. **Mətnlərin dırnaqsız yazılması:**
   - *Əlamət:* `cout << Salam Lisey;` $\rightarrow$ `error: 'Salam' was not declared in this scope`
   - *Pedaqoji İzah:* "Kompilyator dırnaqsız sözləri dəyişən adı zənn edir. Bütün hazır mətnlər mütləq qoşa dırnaq `\"...\"` içində olmalıdır."
4. **Tam bölmə tələsi (`Integer Division`):**
   - *Əlamət:* `double result = 5 / 2;` yazanda nəticənin `2.0` çıxması və şagirdin təəccüblənməsi.
   - *Pedaqoji İzah:* "Hər iki tərəf tam ədəddirsə, C++ kəsr hissəni amansızcasına kəsib atır! Kəsr cavab almaq üçün ən azı biri kəsr olmalıdır: `5.0 / 2`."
5. **Böyük/kiçik hərflərə qarşı həssaslıq (Case Sensitivity):**
   - *Əlamət:* `Cout << x;` və ya `Int a;` yazılması.
   - *Pedaqoji İzah:* "C++ çox dəqiq dildir. Bütün əsas açar sözlər kiçik hərflərlə yazılır."

---

## 📋 Lövhə Planı (Board Layout)

Dərs zamanı sinif yazı lövhəsini 3 sütuna bölün:

```text
+-------------------------+-------------------------+-------------------------+
| SÜTUN 1: QAYDALAR       | SÜTUN 2: CANLI KOD      | SÜTUN 3: YADDAŞ QUTULARI|
|                         |                         |                         |
| #include <iostream>     | int main() {            |  [ studentAge ]         |
| using namespace std;    |     string name;        |  +-----------+          |
|                         |     int age;            |  |    14     | (int)    |
| cout << (Ekrana çıxış)  |     cout << "Ad: ";     |  +-----------+          |
| cin  >> (Giriş oxumaq)  |     cin >> name;        |                         |
|                         |     cout << "Yas: ";    |  [ gpa ]                |
| int    -> Tam (-5, 10)  |     cin >> age;         |  +-----------+          |
| double -> Kəsr (3.14)   |     cout << "Salam, "   |  |   94.5    | (double) |
| string -> Mətn ("Bakı") |          << name;       |  +-----------+          |
|                         |     return 0;           |                         |
| 17 / 5 = 3   (Tam hissə)| }                       |                         |
| 17 % 5 = 2   (Qalıq)    |                         |                         |
+-------------------------+-------------------------+-------------------------+
```

---

## 📦 Sinif Paketi Qovluq Bələdçisi

- **[`teacher-demos/`](./teacher-demos/)**: Müəllimin dərs zamanı birbaşa proyeksiya edib işə salacağı 6 ədəd hazır, səhvsiz C++ kodu.
- **[`interactive-code/`](./interactive-code/)**: Dərs zamanı şagirdlərin aktiv iştirakı üçün proqnozlaşdırma, boşluq doldurma və səhv axtarma məşğələləri.
- **[`independent-tasks/`](./independent-tasks/)**: Kompüter arxasında şagirdlərin fərdi icra edəcəyi 4 praktik tapşırıq.
- **[`homework/`](./homework/)**: Çap üçün 2 səhifəlik `homework_worksheet.pdf`, `homework_assignment.md` və müəllim üçün `homework_answer_key.md`.
- **[`recap-quiz/`](./recap-quiz/)**: Növbəti dərsin ilk 10 dəqiqəsində keçiriləcək 1 səhifəlik `recap_quiz.pdf` və müəllim üçün sürətli yoxlama matrisi.
