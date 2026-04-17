#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(num % 20 != 0){
        printf("Digite um numero: ");
        scanf("%d", &num);
    }
    printf("O numero %d eh multiplo de 20\n", num);
    return 0;
}
    