#include <stdio.h>
#include <stdlib.h>

int main() {
	int n; 
	
	printf("Razmer matrici: \n");
	scanf("%d", &n);
	
	double matrix[n][n];
	
	printf("Matrica(n x n):\n");
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++){
			scanf("%lf", &matrix[i][j]);
		}
	}
	
	double mainn = 0.0;
	double dop = 0.0;
	
	for (i = 0; i < n; i++){
		mainn += matrix[i][i];
		dop += matrix[i][n-1-i];
	}
	
	printf("Glavnaya: %.2lf", mainn);
	printf("Pobochnaya: %.2lf", dop);
	
	
	return 0;
}
