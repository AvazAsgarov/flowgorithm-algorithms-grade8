# Avtomobilin səyahət müddəti və yanacaq sərfiyyatı

### Məsələ

Avtomobil iki şəhər arasındakı məsafəni sabit orta sürətlə qət edir. Eyni zamanda avtomobilin hər 100 kilometr məsafə üçün yandırdığı yanacaq miqdarı (litr ilə) məlumdur.

Proqram istifadəçidən iki şəhər arasındakı məsafəni, avtomobilin orta sürətini və 100 km məsafəyə sərf olunan yanacaq normasını daxil etməsini istəməlidir.

Daxil edilən parametrlər əsasında proqram:
1. Səyahətə sərf olunan vaxtı saatla ($\text{vaxt} = \frac{\text{məsafə}}{\text{sürət}}$);
2. Bütün səfər üçün tələb olunan ümumi yanacaq miqdarını litrlə ($\text{yanacaq} = \frac{\text{məsafə}}{100} \times \text{norma}$)
hesablayıb ekranda göstərməlidir.

### Giriş

İstifadəçi ardıcıl olaraq 3 müsbət ədəd daxil edir:
1. Məsafə (`distance`) — km vahidi ilə (həqiqi ədəd).
2. Orta sürət (`speed`) — km/saat vahidi ilə (həqiqi ədəd).
3. 100 km-ə yanacaq sərfiyyatı (`consumptionPer100Km`) — litr vahidi ilə (həqiqi ədəd).

### Gözlənilən çıxış

Proqram hesablanan nəticələri izahat mətni ilə iki sətirdə təqdim etməlidir:
- Səyahət müddəti (saat ilə).
- Tələb olunan ümumi yanacaq (litr ilə).

### Nümunə

**Daxil edilən məlumatlar:**
```text
Məsafəni daxil edin (km):
300
Orta sürəti daxil edin (km/saat):
75
100 km-ə yanacaq sərfiyyatını daxil edin (litr):
8.0
```

**Gözlənilən nəticə:**
```text
Səyahət müddəti: 4 saat
Tələb olunan ümumi yanacaq: 24 litr
```
