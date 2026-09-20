# Şagirdin üç fənn üzrə orta balı və çəkili qiyməti

### Məsələ

Şagird üç fənn üzrə (Riyaziyyat, İnformatika və İngilis dili) 100 ballıq şkala ilə qiymətləndirilir. İmtahan qaydalarına görə fənlərin yekun nəticədəki çəkisi fərqlidir:
- Riyaziyyat: 40% (əmsal $0.40$)
- İnformatika: 35% (əmsal $0.35$)
- İngilis dili: 25% (əmsal $0.25$)

Proqram hər üç fənn üzrə toplanan balları qəbul etməli və iki fərqli göstəricini hesablamalıdır:
1. Sadə ədədi orta: $\text{orta} = \frac{\text{bal}_1 + \text{bal}_2 + \text{bal}_3}{3}$
2. Çəkili yekun bal: $\text{yekun} = (\text{bal}_1 \times 0.40) + (\text{bal}_2 \times 0.35) + (\text{bal}_3 \times 0.25)$

### Giriş

İstifadəçi ardıcıl olaraq 3 fənnin balını daxil edir:
1. Riyaziyyat balı (`mathScore`) — 0 ilə 100 arasında həqiqi ədəd.
2. İnformatika balı (`csScore`) — 0 ilə 100 arasında həqiqi ədəd.
3. İngilis dili balı (`englishScore`) — 0 ilə 100 arasında həqiqi ədəd.

### Gözlənilən çıxış

Proqram hər iki nəticəni uyğun başlıqla iki sətirdə ekrana çıxarmalıdır:
- Sadə ədədi orta.
- Çəkili yekun bal.

### Nümunə

**Daxil edilən məlumatlar:**
```text
Riyaziyyat balını daxil edin:
90
İnformatika balını daxil edin:
80
İngilis dili balını daxil edin:
70
```

**Gözlənilən nəticə:**
```text
Sadə ədədi orta: 80
Çəkili yekun bal: 81.5
```
