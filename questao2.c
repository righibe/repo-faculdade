#include <stdio.h> 

int verificar_numero(numero_de_numeros){
    int contar = 0;
    for (int i = 0; i < numero_de_numeros; i++){
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);
        if (numero > 0){
            contar++;
        }
    }
    return contar;
}


int main(){
    int numero_de_numeros;
    printf("Quantas vezes quer digitar números?");
    scanf("%d", &numero_de_numeros);
    int positivos = verificar_numero(numero_de_numeros);
    printf("O número de positivos digitados é: %d\n", positivos);
}
