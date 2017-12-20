===========================================
Konwersja liczb z systemu 10 na 2.
---------------------------------------------
-## 1 metoda(dzielenie) liczbe zapisaną w systemie dziesiętnym dzielimy przez 2 jeśli wynik jest bez reszty piszemy 0 jeśli z resztą 1 tak do końca
+##### 1 metoda(dzielenie) liczbe zapisaną w systemie dziesiętnym dzielimy przez 2 jeśli wynik jest bez reszty piszemy 0 jeśli z resztą 1 tak do końca
 
 | liczba dziesiętna |wynik dzielenia przez 2 |reszta 0 V 1|
 | ------ | ------ |  ------ |
@@ -19,32 +19,32 @@ Wynik odczytujemy od dołu do góry 11111011
 
 251(<sub>10</sub>)=11111011(<sub>2</sub>)
 
-## 2 metoda (odejmowanie) to wykorzystanie tabelki z kolejnymi wagami bitów. 
->Polega na tym, że znajdujemy w górnej pozycji potęgę liczby 2 o największej wartości która mieści się w szukanej liczbie dziesiętnej i odejmuje je od siebie:
+##### 2 metoda (odejmowanie) to wykorzystanie tabelki z kolejnymi wagami bitów. 
+Polega na tym, że znajdujemy w górnej pozycji wagę bitu o największej wartości która mieści się w szukanej liczbie dziesiętnej i odejmuje je od siebie:
 
     251 - 128 = 123
 
->szukamy kolejnej potegi liczby  o największej wartości która mieści się w 123 i odejmujemy:
+szukamy kolejnej potegi liczby  o największej wartości która mieści się w 123 i odejmujemy:
     
     123 - 64 = 59
 
->szukamy kolejnej potegi liczby  o największej wartości która mieści się w 59 i odejmujemy:
+szukamy kolejnej potegi liczby  o największej wartości która mieści się w 59 i odejmujemy:
     
     59 - 32 = 27
 
->szukamy kolejnej potegi liczby  o największej wartości która mieści się w 32 i odejmujemy:
+szukamy kolejnej potegi liczby  o największej wartości która mieści się w 32 i odejmujemy:
     
     27 - 16 = 11
 
->szukamy kolejnej potegi liczby  o największej wartości która mieści się w 11 i odejmujemy:
+szukamy kolejnej potegi liczby  o największej wartości która mieści się w 11 i odejmujemy:
     
     11 - 8 = 3
 
->szukamy kolejnej potegi liczby  o największej wartości która mieści się w 3 i odejmujemy:
+szukamy kolejnej potegi liczby  o największej wartości która mieści się w 3 i odejmujemy:
     
     3 - 2 = 1
 
->szukamy kolejnej potegi liczby  o największej wartości która mieści się w 1 i odejmujemy:
+szukamy kolejnej potegi liczby  o największej wartości która mieści się w 1 i odejmujemy:
     
      1 - 1 = 0
 
@@ -61,7 +61,7 @@ Otrzymujwynik zero koniec operacji. Teraz w tabelce wpisujemy 1 po tymi potęgam
  
  Konwersja liczb z systemu 2 na 10.
 ---------------------------------------------
-## 1 metoda (potęgowanie) polega na dodawaniu kolejnych potęg liczby 2:
+#### 1 metoda (potęgowanie) polega na dodawaniu kolejnych potęg liczby 2:
 11111011(<sub>2</sub>)
 
 >1x2<sup>7</sup>+1x2<sup>6</sup>+1x2<sup>5</sup>+1x2<sup>4</sup>+1x2<sup>3</sup>+0x2<sup>2</sup>+1x2<sup>1</sup>+1x2<sup>0</sup> =1x128 + 1x64 + 1x32 + 1x16 + 1x8 + 0x4 + 1x2 + 1x1 = 128 + 64 + 32 + 16 + 8 + 2 + 1 = 251(<sub>10</sub>)
@@ -78,7 +78,7 @@ Otrzymujwynik zero koniec operacji. Teraz w tabelce wpisujemy 1 po tymi potęgam
  Konwersja liczb z systemu dziesiętnego na ósemkowy.
 ---------------------------------------------
 
-## metoda(dzielenie) liczbe zapisaną w systemie dziesiętnym dzielimy przez 8 jeśli wynik jest bez reszty piszemy 0 jeśli z resztą przepisujemy resztę, tak do końca:
+##### metoda(dzielenie) liczbe zapisaną w systemie dziesiętnym dzielimy przez 8 jeśli wynik jest bez reszty piszemy 0 jeśli z resztą przepisujemy resztę, tak do końca:
 251(<sub>10</sub>)
 
 | liczba dziesiętna |wynik dzielenia przez 8 |reszta  z dzielenia|
@@ -97,7 +97,7 @@ Wynik odczytujemy od dołu do góry 373(<sub>8</sub>)
 
  Konwersja liczb z systemu ósemkowego na binarny
  -----------------------------------------------
- ## Każdą cyfrę ósemkową zastępujemy grupą 3 bitów wg tabelki konwersji. Grupy łączymy w jedną liczbę binarną, pomijamy skrajne zera z lewej strony.
+ ##### Każdą cyfrę ósemkową zastępujemy grupą 3 bitów wg tabelki konwersji. Grupy łączymy w jedną liczbę binarną, pomijamy skrajne zera z lewej strony.
 
     Tabela konwersji dwójkowo ósemkowa
     
@@ -118,7 +118,7 @@ Wynik odczytujemy od dołu do góry 373(<sub>8</sub>)
 
  Konwersja liczb z systemu binarnego na ósemkowy
  -----------------------------------------------
- ## Liczbę binarną rozdzielamy na grupy 3 bitowe idąc od strony prawej ku lewej. Jeśli w ostatniej grupie jest mniej bitów, to brakujące bity uzupełniamy zerami. Teraz każdą z 3 bitowych grup zastępujemy cyfrą ósemkową zgodnie z tabelką konwersji.
+ ##### Liczbę binarną rozdzielamy na grupy 3 bitowe idąc od strony prawej ku lewej. Jeśli w ostatniej grupie jest mniej bitów, to brakujące bity uzupełniamy zerami. Teraz każdą z 3 bitowych grup zastępujemy cyfrą ósemkową zgodnie z tabelką konwersji.
  
    Tabela konwersji dwójkowo ósemkowa
     
@@ -137,7 +137,7 @@ Wynik odczytujemy od dołu do góry 373(<sub>8</sub>)
  
   Konwersja liczb z systemu dziesiętnego na szesnastkowy.
 ---------------------------------------------
-## metoda(dzielenie) liczbe zapisaną w systemie dziesiętnym dzielimy przez 16 jeśli wynik jest bez reszty piszemy 0 jeśli z resztą przepisujemy resztę, tak do końca:
+##### metoda(dzielenie) liczbe zapisaną w systemie dziesiętnym dzielimy przez 16 jeśli wynik jest bez reszty piszemy 0 jeśli z resztą przepisujemy resztę, tak do końca:
 251(<sub>10</sub>)
 
 >W systemie szesnastkowym używamy 16 znaków:
@@ -154,12 +154,12 @@ Wynik odczytujemy od dołu do góry FB(<sub>16</sub>)
 
 Konwersja liczb z systemu szesnastkowego na dziesiętny.
 ---------------------------------------------
-## Dodajemy kolejne potęgi liczby 16 pomnożone przez ich wartości:
+##### Dodajemy kolejne potęgi liczby 16 pomnożone przez ich wartości:
 FB(<sub>16</sub>)= 15x16<sup>1</sup> + 11x16<sup>0</sup> = 240 + 11 = 251(<sub>10</sub>)
 
  Konwersja liczb z systemu szesnastkowego na binarny
  -----------------------------------------------
- ## Każdą cyfrę szesnastkową zastępujemy grupą 4 bitów wg tabelki konwersji. Grupy łączymy w jedną liczbę binarną, pomijamy skrajne zera z lewej strony.
+ ##### Każdą cyfrę szesnastkową zastępujemy grupą 4 bitów wg tabelki konwersji. Grupy łączymy w jedną liczbę binarną, pomijamy skrajne zera z lewej strony.
 
     Tabela konwersji dwójkowo ósemkowa
     
@@ -187,7 +187,7 @@ F_________B(<sub>16</sub>) =>
 
  Konwersja liczb z systemu binarnego na szesnastkowy.
  -----------------------------------------------
- ## Liczbę binarną rozdzielamy na grupy 4 bitowe idąc od strony prawej ku lewej. Jeśli w ostatniej grupie jest mniej bitów, to brakujące bity uzupełniamy zerami. Teraz każdą z 4 bitowych grup zastępujemy znakiem szesnastkowym zgodnie z tabelką konwersji.
+ ##### Liczbę binarną rozdzielamy na grupy 4 bitowe idąc od strony prawej ku lewej. Jeśli w ostatniej grupie jest mniej bitów, to brakujące bity uzupełniamy zerami. Teraz każdą z 4 bitowych grup zastępujemy znakiem szesnastkowym zgodnie z tabelką konwersji.
 
     Tabela konwersji dwójkowo ósemkowa
