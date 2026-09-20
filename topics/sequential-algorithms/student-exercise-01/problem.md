# Dəftərxana ləvazimatı alış-verişi və qalıq pulun hesablanması

### Məsələ

Şagird məktəb ləvazimatı mağazasından eyni qiymətə bir neçə ədəd dəftər alır və kassirə nağd pul ödəyir. Proqram bir dəftərin qiymətini, alınan dəftərlərin sayını və müştərinin kassirə ödədiyi məbləği qəbul etməlidir.

Proqram əvvəlcə ümumi ödənilməli məbləği, daha sonra isə müştəriyə qaytarılmalı olan qalıq pulu hesablayıb ekranda əks etdirməlidir.

Hesablama qaydası:
- $\text{Ümumi məbləğ} = \text{qiymət} \times \text{say}$
- $\text{Qalıq pul} = \text{ödənilən məbləğ} - \text{ümumi məbləğ}$

### Giriş

İstifadəçi ardıcıl olaraq 3 məlumat daxil edir:
1. Bir dəftərin qiyməti (`price`) — manatla (müsbət həqiqi ədəd).
2. Alınan dəftərlərin sayı (`quantity`) — tam ədəd.
3. Kassirə təqdim edilən pul məbləği (`payment`) — manatla (müsbət həqiqi ədəd).

### Gözlənilən çıxış

Proqram hesablanan nəticələri aydın izahat mətni ilə iki sətirdə təqdim etməlidir:
- Ümumi məbləğ (AZN ilə).
- Qaytarılacaq qalıq pul (AZN ilə).

### Nümunə

**Daxil edilən məlumatlar:**
```text
Bir dəftərin qiymətini daxil edin (AZN):
0.80
Alınan dəftərlərin sayını daxil edin:
5
Kassirə verilən məbləği daxil edin (AZN):
10.00
```

**Gözlənilən nəticə:**
```text
Ümumi məbləğ: 4 AZN
Qaytarılacaq qalıq: 6 AZN
```
