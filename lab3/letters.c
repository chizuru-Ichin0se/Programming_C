#include <stdio.h>
#include <stdlib.h>

int main() {  
  char str[81];
  printf("do 80 simvolov: ");
  fgets(str, sizeof(str), stdin);
  int i;
  for (i = 0; str[i] != '0'; i++) {
    if (str[i] == 'a') {
      str[i] = 'A';
    } 
    else if (str[i] == 'b') {
      str[i] = 'B';
    }
  }
  
  printf("vivod: %s", str);
  
  return 0;
}
