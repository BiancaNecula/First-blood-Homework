#include <stdio.h>

int main() {
  // declaratii
  int nr_puzzle, linii, coloane, matrice_linii[100][100] = {0}, nr_casute, ok,
                                 n, m, p, j =0,
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

    for(int a =0; a<linii; a++){
	for(int b=0; b<= matrice_linii[a][0]; b++){
	    printf("%d ", matrice_linii[a][b]);
	}
        printf("\n");
    }

	for(int m = 0; m<linii; m++) {
		j =0;
		n =0;
		for(int k=1; k<= matrice_linii[m][0] ; k++){
                    while(j <=n && n <=n){
			for(n = n+p+1; n <= coloane && puzzle[m][n-1] ==0; n++);
			for(j =(n+1); puzzle[m][j-1] == 1 && j<coloane; j++);
			p = j-n;
		    }	
			if(matrice_linii[m][k] != p) {
				printf("n: %d, m: %d, k:%d, p:%d, j:%d\n",n, m, k, p, j);
				ok =1;
				break;
			
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
				




