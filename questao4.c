#include <stdio.h>

int somar_multiplos(int valor1, int valor2){
    if (valor1 > valor2){
        int temp = valor1;
        valor1 = valor2;
        valor2 = temp;
    }
    int soma = 0;
    for (int i = valor1; i <= valor2; i++){
        if (i % 13 != 0){
            soma += i;
        }
    }
    return soma;
}


int main(){
    int valor1;
    int valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    int soma = somar_multiplos(valor1, valor2);
    printf("Soma dos valores não múltiplos de 13 entre %d e %d é: %d\n", valor1, valor2, soma);
    return 0;
}

