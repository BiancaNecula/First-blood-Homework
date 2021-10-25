#include <stdio.h>

int main() {
  // declaratii
  int n, contor, m_i, m_f, x[100], c[100], rez[100];
  int aux;
  m_i = 0;
  contor = 0;
  // citire numar de note si credite(ponderi)
  scanf("%d", &n);
  // citire note
  for (int i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }
  // citire credite
  for (int j = 0; j < n; j++) {
    scanf("%d", &c[j]);
  }
  // initializarea vectorului a cu 0
  for (int a = 0; a <= n; a++) {
    rez[a] = 0;
  }
  // citirea mediei dorite
  scanf("%d", &m_f);
  // calculul mediei actuale
  for (int k = 0; k < n; k++) {
    m_i += x[k] * c[k];
  }
  // stocarea maririlor posibile
  for (int t = 0; t <= n; t++) {
    if (x[t] < 10) rez[t] = c[t] * (10 - x[t]);
  }
  // sortare vector
  for (int a = 0; a < n; a++) {
    for (int b = a + 1; b < n; b++) {
      if (rez[a] < rez[b]) {
        aux = rez[a];
        rez[a] = rez[b];
        rez[b] = aux;
      }
    }
  }
  // aflarea numarului de mariri necesare prin variabila contor
  while (m_i < m_f) {
    m_i += rez[contor];
    contor++;
  }

  printf("%d ", contor);

  return 0;
}

