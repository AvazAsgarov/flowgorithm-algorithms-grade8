# Kafe hesabı: Xidmət haqqı və adambaşına düşən payın hesablanması

### Məsələ

Bir qrup dost dərsdən sonra kafedə əyləşir və müxtəlif təamlar sifariş edir. Sifarişin ilkin məbləği (`subtotal`), kafenin tətbiq etdiyi xidmət haqqı faizi (`serviceRate`) və masadakı dostların sayı (`friendCount`) məlumdur.

Proqramdan aşağıdakı ardıcıllıqla hesablamalar aparmaq tələb olunur:
1. Xidmət haqqının məbləğini hesablamaq: $\text{xidmət haqqı} = \text{ilkin məbləğ} \times \frac{\text{faiz}}{100}$
2. Ümumi ödənilməli yekun hesabı tapmaq: $\text{yekun hesab} = \text{ilkin məbləğ} + \text{xidmət haqqı}$
3. Hesabın dostlar arasında bərabər bölünməsi üçün adambaşına düşən məbləği müəyyən etmək: $\text{adambaşına pay} = \frac{\text{yekun hesab}}{\text{dostların sayı}}$

Proqram hesablanmış hər üç nəticəni müvafiq izahat mətni ilə ekranda əks etdirməlidir.

### Giriş

İstifadəçi ardıcıl olaraq 3 parametr daxil edir:
1. Sifarişin ilkin məbləği (`subtotal`) — AZN ilə (müsbət həqiqi ədəd).
2. Xidmət haqqı faizi (`serviceRate`) — faizlə (məsələn, 10% üçün 10 daxil edilir, həqiqi ədəd).
3. Masadakı dostların sayı (`friendCount`) — tam ədəd (müsbət tam ədəd).

### Gözlənilən çıxış

Proqram hesablanan dəyərləri müvafiq izahat mətni ilə 3 sətirdə ekrana çıxarmalıdır:
- Xidmət haqqı məbləği (AZN ilə).
- Ümumi ödənilməli yekun hesab (AZN ilə).
- Hər bir dostun ödəməli olduğu pay (AZN ilə).

### Nümunə

**Daxil edilən məlumatlar:**
```text
Sifarişin ilkin məbləğini daxil edin (AZN):
50.00
Xidmət haqqı faizini daxil edin (%):
10
Dostların sayını daxil edin:
4
```

**Gözlənilən nəticə:**
```text
Xidmət haqqı: 5 AZN
Yekun hesab: 55 AZN
Adambaşına düşən pay: 13.75 AZN
```
