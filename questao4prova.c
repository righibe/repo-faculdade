#include <stdio.h>

int main(){
    int numero;
    int numero_maior;
    int numero_menor;
    int primeiro = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero >= 0){
        if (primeiro){
            numero_maior = numero;
            numero_menor = numero;
            primeiro = 0;
        } else {
            if (numero > numero_maior){
                numero_maior = numero;
            }
            if (numero < numero_menor){
                numero_menor = numero;
            }
        }
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }

    if (!primeiro){
        printf("O maior numero e: %d\n", numero_maior);
        printf("O menor numero e: %d\n", numero_menor);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}
