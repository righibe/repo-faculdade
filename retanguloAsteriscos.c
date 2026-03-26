#include <stdio.h>

int main() {
  int a, l;

  printf("fale um numeo para largura: ");
  scanf("%d", &l);

  printf("fale um numeo para altura: ");
  scanf("%d", &a);

  for(int i = 0; i < a; i++){
    for(int j = 0; j < l; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}