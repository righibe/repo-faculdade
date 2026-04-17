#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool aprovado = false;
bool recuperacao = false;
bool reprovado = false;

float verificarMedia(float n1, float n2){
    float media = (n1 + n2) / 2.0;
    return media;
}

void verificarAprovacao(float media){
    aprovado = false;
    recuperacao = false;
    reprovado = false;

    if(media >= 6.0){
        aprovado = true;
    }else if(media >= 4.0){
        recuperacao = true;
    }else{
        reprovado = true;
    }
}

int main(){

    float nota1, nota2;

    while(1){
    char nome_aluno[50];
    printf("Digite o nome do aluno: ");
    scanf("%s", nome_aluno);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    if (nota1 < 0 || nota1 > 10){
        printf("Nota invalida!\n");
        break;
    }
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    if (nota2 < 0 || nota2 > 10){
        printf("Nota invalida!\n");
        break;
    }
    
    float media_final = verificarMedia(nota1, nota2);
    
    verificarAprovacao(media_final);
    
    if(aprovado == true){
        printf("%s foi aprovado!\n", nome_aluno);
    }else if(recuperacao == true){
        printf("%s está em recuperação!\n", nome_aluno);
    }else{
        printf("%s foi reprovado!\n", nome_aluno);
    }
    }
    
    return 0;
}