#include <stdio.h>

int main() {
  // declaratii
  long nr, x_0, x_1, x_2;
  double suma = 0.0;
  double m_a = 0.0;
  int nr_speciali = 0;
  long x_max_impar = -1, x_min_par = 1000000;

  // citire input de la tastatura
  // se citesc inaltimile primilor 2 copaci
  scanf("%ld", &nr);
  scanf("%ld %ld", &x_0, &x_1);

  // se parcurge sirul de copaci
  for (int i = 2; i <= nr - 1; i++) {
    scanf("%ld", &x_2);

    // se compara copacul x_1 cu x_0 si x_2
    // daca este special, se calculeaza numarul, suma si se afla maximul de pe
    // pozitiile impare si minimul de pe pare
    if ((x_1 > x_0) && (x_1 > x_2)) {
      nr_speciali++;
      suma += x_1;
      if ((i - 1) % 2 == 1) {
        if (x_1 > x_max_impar) {
          x_max_impar = x_1;
        }
      }
      if ((i - 1) % 2 == 0) {
        if (x_1 < x_min_par) {
          x_min_par = x_1;
        }
      }
    }

    x_0 = x_1;
    x_1 = x_2;
  }
  // daca nu exista copaci speciali, output-ul va fi 0
  if (nr_speciali == 0) {
    printf("0");
    printf("\n");
    printf("0");
    printf("\n");
    printf("0");
    printf("\n");
    printf("0");
  }
  if (x_min_par == 1000000) x_min_par = -1;
  // output: suma, media aritmetica, maximul de pe pozitiile impare si minimul de pe pare
  if (nr_speciali != 0) {
    printf("%ld", (long)suma);

    printf("\n");

    m_a = (double)(suma / nr_speciali);
    printf("%.7lf", m_a);
    printf("\n");
    printf("%ld", x_max_impar);
    printf("\n");
    printf("%ld", x_min_par);
  }
  return 0;
}

