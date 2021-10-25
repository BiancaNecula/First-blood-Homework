#include <stdio.h>
// functie care returneaza numarul cu cifrele ordonate crescator
long ord_asc(long numar) {
  int cifra;
  long aux, nr_final = 0;
  for (cifra = 0; cifra <= 9; cifra++)
    for (aux = numar; aux > 0; aux /= 10)
      if (aux % 10 == cifra) nr_final = (nr_final * 10 + cifra);
  return nr_final;
}
// functie care returneaza numarul cu cifrele ordonate descrescator
long ord_desc(long numar) {
  int cifra;
  long aux, nr_final = 0;
  for (cifra = 9; cifra >= 0; cifra--)
    for (aux = numar; aux > 0; aux /= 10)
      if (aux % 10 == cifra) nr_final = (nr_final * 10 + cifra);
  return nr_final;
}

int main() {
  // declaratii
  long numar, v[100], dif;
  int x = 1;
  long numar_cresc, numar_desc;
  // citire input de la tastatura
  scanf("%ld", &numar);
  // crearea numarului crescator si descrescator
  numar_cresc = ord_asc(numar);
  numar_desc = ord_desc(numar);
  // se fac scaderile succesive si se printeaza dupa cate scaderi se repeta si
  // ciclul de repetitii
  for (int i = 0; x == 1; i++) {
    dif = (numar_desc - numar_cresc);
    v[i] = dif;
    if (i != 0) {
      for (int j = 0; j < i; j++) {
        if (v[i] == v[j]) {
          x = 0;
          printf("%d\n", j);
          for (int k = j; k < i; k++) printf("%ld ", v[k]);
        }
      }
    }
    numar_cresc = ord_asc(dif);
    numar_desc = ord_desc(dif);
  }

  return 0;
}

