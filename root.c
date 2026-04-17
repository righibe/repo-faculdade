#include <stdio.h>
#include <string.h>
#include <stdbool.h>



int maiorDeIdade(int idade){
    if(idade >= 18 && idade < 40){
        return 1;
    }else if(idade >= 40){
        return 3;
    }else{
        return 2;
    }
}

int main() {
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome);

    if(strcmp(nome, "matheus") == 0){
        printf("Bem vindo matheus, nome feio né?\n");
    }else{
        printf("Olá %s, nome bonito!\n", nome);
    }

    printf("Digite sua idade: ");
    int idade;
    int deMaior;
    scanf("%d", &idade);

    deMaior = maiorDeIdade(idade);

    if(deMaior == 1){
        printf("Você é maior de idade!\n");
    }else if(deMaior == 2){
        printf("Você é menor de idade!\n");
    }else{
        printf("Ta velho em matheus!\n");
    }
    

    return 0;
}