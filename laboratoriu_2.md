## zadania

1. Wyświetl na ekran 2 pierwsze wiersze pliku main.c

 ```sh
 head --lines 2 helloworld/main.c # Skrypt w bashu
 head -n 2 helloworld/main.c
 head -2 helloworld/main.c # Polecenie w Terminalu
 ```
 
 2. Wyświetl na ekran 4 ostatnie wiersze pliku main.c. (head, tail)
 
 ```sh
 tail --lines 4 helloworld/main.c
 ```

3. W pliku program.c znajdź wszystkie wiersze z wystąpieniem słowa „main”. (grep)

```sh
grep -Ri "main" helloworld/main.c
```

4. Plikowi program.c nadaj następujące uprawnienia: właściciel – czytanie, pisanie, grupa – czytanie, pozostali użytkownicy: brak uprawnień. (chmod)

```sh
chmod 640 helloworld/main.c
```

5. Będąc w katalogu temp przenieś katalog wazne-sprawy do katalogu praca.

```sh
cd temp && mv wazne-sprawy praca
```

6. Zarchiwizuj cały katalog temp. (zip i tar)

```sh
zip -q1 temp ~/temp.zip
tar -c temp ~/temp.tar
```

7. Usuń katalog temp.

```sh
rm -rf temp
```

8. Odtwórz z archiwum katalog temp. (unzip i tar)

```sh
unzip -q temp.zip
tar -xf temp.tar
```

9. Posprzątaj na swoim koncie.

```sh
rm -rf temp temp.zip temp.tar praca
```
