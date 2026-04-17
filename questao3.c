#include <stdio.h>


void tabuada(int numero){
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main(){
    int numero;
    do {
        printf("Digite um número entre 2 e 1000: ");
        scanf("%d", &numero);
    }while(numero < 2 || numero > 1000);
    tabuada(numero);
    return 0;
}
