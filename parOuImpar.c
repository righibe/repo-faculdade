#include <stdio.h>

int main() {
    printf("Digite um numero: ");
    int num;
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("O numero %d eh par\n", num);
    }else{
        printf("O numero %d eh impar\n", num);
    }
    return 0;
}


