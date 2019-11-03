
# Laboratorium 5

1. Znajdź w swoim katalogu domowym (bez podkatalogów) wszystkie pliki, które zostały zmodyfikowane w ciągu ostatnich dziesięciu dni i wyświetl ich nazwy.

```sh
find . -iname "*" -atime -10 -type f
```

1. Znajdź wszystkie pliki zwykłe w systemie, które mają w nazwie ciąg znaków „conf” i wyświetl ich nazwy na ekranie.

```sh
find / -iname "*.conf" -type f
```

1. Znajdź w swoim katalogu domowym wszystkie pliki, które nie były używane w ciągu ostatnich 20 dni.

```sh
find /home/username -type f -mtime +20
```

1. Znajdź w katalogu /etc wszystkie niepuste podkatalogi i pliki o nazwach zaczynających się na literę „a”.

```sh
 find /etc/. -mindepth 1 -not -empty -type d
```
