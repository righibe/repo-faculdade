#include <stdio.h>

int main(){
    printf("Digite um numero: ");
    int numero;
    scanf("%d", &numero);
    printf("Digite outro numero: ");
    int numero2;
    scanf("%d", &numero2);
    if(numero==numero2){
        printf("Os numeros sao iguais\n");
    }else if(numero > numero2){
        printf("O numero %d e maior que o numero %d\n", numero, numero2);
    }else{
        printf("O numero %d e maior que o numero %d\n", numero2, numero);
    }
    return 0;

}
    

    