#include <stdio.h>


calcular_pares(int valor){
    for (int i = 2; i <= valor; i+=2){
        printf("%d! = %d\n", i, i*i);
    }
}
    
int main(){
    int valor;

    do{
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor < 5 || valor > 5000){
            printf("o valor digitado nao e valido\n");
            printf("Digite novamente!\n");
        }
    }while(valor < 5 || valor > 5000);

    calcular_pares(valor);

    return 0;
}