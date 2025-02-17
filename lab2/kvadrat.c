
#include <stdio.h>
#include <stdlib.h>


#define n 2
int main() {
  
  int matrix[n][n];
  
  printf("Matrica(n x n):\n");
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++){
      scanf("%d", &matrix[i][j]);
    }
  }
  
  int kvmatrix[n][n] = {0};
  
  int k;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      for (k = 0; k < n; k++) {
        kvmatrix[n][n] += matrix[i][k] * matrix[k][j];
      }
    }
  }
  
  printf("Kvadrat\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", kvmatrix[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}

