#include <stdio.h>

int main() {
  // declaratii
  int nr_puzzle, linii, coloane, matrice_linii[100][100] = {0}, nr_casute, ok,
                                 n, m, contor, j =0,
				 matrice_coloane[100][100]={0};
  // citire numar de puzzle-uri
  scanf("%d", &nr_puzzle);
  for (int z = 0; z < nr_puzzle; z++) {
    ok = 0;
    scanf("%d %d", &linii, &coloane);
    int puzzle[linii][coloane];
    for (int a = 0; a < linii; a++) {
      scanf("%d", &nr_casute);
      matrice_linii[a][0] = nr_casute;
      for (int b = 1; b <= nr_casute; b++) scanf("%d", &matrice_linii[a][b]);
    }


    for (int c = 0; c < coloane; c++) {
      scanf("%d", &nr_casute);
      matrice_coloane[c][0] = nr_casute;
      for (int d = 1; d <= nr_casute; d++) scanf("%d", &matrice_coloane[c][d]);
    }

    for (int i = 0; i < linii; i++) {
      for (j = 0; j < coloane; j++) {
        scanf("%d", &puzzle[i][j]);
      }
    }
    for (int m = 0; m < linii; m++) {
      j =0;    
      contor = 1;
      for(int k = 1; k <= matrice_linii[m][0]; k++){
	while(ok == 0 && j < coloane){
		printf("a %d %d\n", m, k);
      for (n = 0; n < coloane && puzzle[m][n] == 0; n++);
      for(j = (n+1); puzzle[m][j]; j++){
	 
	 if (puzzle[m][j + 1] == 0) {
            if (matrice_linii[m][k] != contor) {
              ok = 1;
	      printf("b %d %d", m, contor);
	      printf("j %d k %d", j, k);
              break;
	    }
            }
	 contor++;
          }
        }
      }
    }
    for (int n = 0; n < coloane; n++) {
      contor = 1;
      for(int k = 0; k<matrice_coloane[n][0]; k++){
	while(ok == 0 && j<linii){
      for (m = 0; m < linii && !puzzle[n][m]; m++);
      for(j = ( m + 1); puzzle[j][n]; j++){
	 contor++;
	 if (puzzle[j+1][n] != 1) {
            if (matrice_linii[n][k+1] != contor) {
              ok = 1;
              break;
	    }
            }
          }
        }
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

