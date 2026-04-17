#include <stdio.h>

int main() {
    int valor1;
    int valor2;
    printf("Digite um numero: ");
    scanf("%d", &valor1);
    printf("Digite um numero maior que o primeiro: ");
    scanf("%d", &valor2);

    for(int i = valor1; i < valor2; i++){
        printf("%d\n", i - 1);
    }
    
    return 0;


    
}