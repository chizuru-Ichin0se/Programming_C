#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool test_error (double a, double b, double c) {
  return (a + b > c) && (a + c > b) && (a + c > b);
}

int main(int argc, char** argv) {
  
  double a, b, c;
  printf("Enter 3 sides:\n");
  
  if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
    printf ("ERROR: not 3 sides entered\n");
    return 1;
  }
  
  if (test_error(a,b,c)) {
    double perimeter = a + b + c;
    double area = sqrt((perimeter/2) * ((perimeter/2) - a) * ((perimeter/2) - b) * ((perimeter/2) - c));
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);
  }
  else {
    printf("ERROR: ne korektno");
  }
  
  return 0;
}
