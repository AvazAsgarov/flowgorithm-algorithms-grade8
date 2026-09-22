# Dərs 01 üzrə 10 Dəqiqəlik Təkrar Quiz — Müəllim Cavab Açarı

**Məktəb:** Bakı Ali Neft Məktəbinin (BANM) nəzdində Rəqəmsal Biliklər Liseyi  
**Müəllim:** [Avaz Əsgərov](https://www.linkedin.com/in/avaz-asgarov/)  
**Fənn:** İnformatika (8-ci sinif)  
**Təyinat:** Dərs 02-nin əvvəlində 30 şagirdin nəticəsini 5 dəqiqədə sürətli yoxlamaq üçün qiymətləndirmə matrisi.  

---

## 🔑 Sürətli Yoxlama Cədvəli

| Sual № | Düzgün Cavab | Bal | Qeyd / Tez-tez edilən səhvlər |
| :---: | :--- | :---: | :--- |
| **1** | **B) double** | 4 bal | Şagirdlər bəzən `int` seçir, lakin 93.75 kəsr ədəddir. |
| **2** | **C) 2** | 4 bal | 17 / 5 = 3 edir, qalıq isə 2 qalır. Şagirdlər bəzən 3 ilə qarışdırır. |
| **3** | `cin >> studentAge;` | 4 bal | `cin` operatorunda oxlar sağa (`>>`) yönəlməlidir, `<<` yalnız `cout` üçündür. |
| **4** | **15** | 4 bal | $10 + 6 = 16$, sonra $16 - 1 = 15$. |
| **5** | *(3 sətir kod - aşağıda)* | 4 bal | Hər düzgün sətir üçün bal bölgüsü (1.5 + 1.5 + 1 bal). |

---

## Sual 5 üçün Nümunəvi Kod və Bal Bölgüsü

```cpp
double radius;                     // 1.5 bal (tipin double və ya float seçilməsi)
cin >> radius;                     // 1.5 bal (cin və >> düzgün yazılışı)
cout << 2 * 3.14 * radius << endl; // 1.0 bal (riyazi düstur və cout <<)
```

> [!TIP]
> Əgər şagird `cin >> radius;`-dən əvvəl `cout << "Radius daxil edin: ";` yazıbsa, bu əlavə müsbət haldır, lakin yazmasa belə bal çıxılmır (çünki sualda sırf funksional 3 addım soruşulub).
