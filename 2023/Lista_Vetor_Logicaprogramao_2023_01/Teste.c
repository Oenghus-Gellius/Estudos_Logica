#include <stdio.h>
#include <string.h>

int main() {
  int X[5]={1,2,3,4,5}, Y[5]={4,5,6,7,8}, Z[5];
  int i, j, k, found;

  // inicializa o vetor Z com 0
  memset(Z, 0, sizeof(Z));

  // cria o vetor Z, que será a diferença entre X e Y
  k = 0;
  for (i = 0; i < 5; i++) {
    found = 0;
    j = 0;
    while (j < 5 && !found) {
      if (X[i] == Y[j]) {
        found = 1;
      }
      j++;
    }
    j = 0;
    while (j < 5 && found) {
      if (Y[j] == X[i]) {
        found = 0;
      }
      j++;
    }
    if (found) {
      Z[k] = X[i];
      k++;
    }
  }

  // exibe os valores do vetor Z
  printf("Diferenca entre X e Y:\n");
  for (i = 0; i < k; i++) {
    printf("%d ", Z[i]);
  }
  printf("\n");

  return 0;
}