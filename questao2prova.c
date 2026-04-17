#include <stdio.h>




void triangulo(int numero){
    for (int i = 1; i <= numero; i++){
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}


int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    triangulo(numero);
    return 0;
}