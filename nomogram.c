#include <stdio.h>

int main() {
  // declaratii
  int nr_puzzle, linii, coloane, matrice_linii[100][100] = {0}, nr_casute, ok,
                                 sume_linii[50], suma_o_linie,
                                 suma_linie_puzzle, suma_puzzle_l[100], temp;
  // citire numar de puzzle-uri
  scanf("%d", &nr_puzzle);
  // se incepe citirea pentru fiecare puzzle
  for (int z = 0; z < nr_puzzle; z++) {
    ok = 0;  // se initializeaza ok pentru fiecare puzzle
    suma_o_linie = 0;
    suma_linie_puzzle = 0;
    scanf("%d %d", &linii,
          &coloane);  // se citesc nr de linii si coloane si restrictiile
    int puzzle[linii][coloane];
    for (int a = 0; a < linii; a++) {
      scanf("%d", &nr_casute);
      matrice_linii[a][0] = nr_casute;
      for (int b = 1; b <= nr_casute; b++) scanf("%d", &matrice_linii[a][b]);
    }

    for (int c = 0; c < coloane; c++) {
      scanf("%d", &nr_casute);
      for (int d = 1; d <= nr_casute; d++) scanf("%d", &temp);
    }

    // se citeste puzzle-ul
    for (int i = 0; i < linii; i++) {
      for (int j = 0; j < coloane; j++) {
        scanf("%d", &puzzle[i][j]);
      }
    }
    // se calculeaza suma pentru fiecare linie din matricea cu restrictiile
    // liniilor
    for (int a = 0; a < linii; a++) {
      for (int b = 1; b <= matrice_linii[a][0]; b++) {
        suma_o_linie += matrice_linii[a][b];
      }
      sume_linii[a] = suma_o_linie;
      suma_o_linie = 0;
    }
    // se calculeaza suma pentru fiecare linie din puzzle
    for (int i = 0; i < linii; i++) {
      for (int j = 0; j < coloane; j++) {
        suma_linie_puzzle += puzzle[i][j];
      }
      suma_puzzle_l[i] = suma_linie_puzzle;
      suma_linie_puzzle = 0;
    }
    // se compara cele doua valori; daca acestea sunt diferite, puzzle-ul a fost
    // rezolvat gresit
    for (int t = 0; t < linii; t++) {
      if (suma_puzzle_l[t] != sume_linii[t]) {
        ok = 1;
        break;
      }
    }
    if (ok == 1) {
      printf("Eroare\n");
    } else {
      printf("Corect\n");
    }
  }
  return 0;
}

