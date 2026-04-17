#include <stdio.h>

double calcularSerie(int n){
    double soma = 0;
    for(int i = 1; i <= n; i++){
        soma += (1.0/i);
    }
    return soma;
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("A soma da serie e: %.2f\n", calcularSerie(numero));
}