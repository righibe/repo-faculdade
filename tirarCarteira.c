#include <stdio.h>

int main() {
    int idade;
    int certas = 0;
    int tentativas = 3;
    char resposta;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Nao pode tirar carteira\n");
        return 0;
    }

    printf("Pode tirar carteira\n");

    printf("\n1 – Ao prestar socorro, NAO se deve:\n");
    printf("a) acionar bombeiros\n");
    printf("b) dar substancias para a vitima\n");
    printf("c) conversar com a vitima\n");
    printf("d) deixar confortavel\n");

    scanf(" %c", &resposta);
    if (resposta == 'b') {
        printf("Correto!\n");
        certas++;
    } else {
        printf("Incorreto!\n");
        tentativas--;
    }

    if (tentativas == 0) {
        printf("\nReprovado! Acabaram as tentativas.\n");
        return 0;
    }

    printf("\n2 – Sinal vermelho:\n");
    printf("a) rir\n");
    printf("b) passar rapido\n");
    printf("c) dobrar direita\n");
    printf("d) parar\n");

    scanf(" %c", &resposta);
    if (resposta == 'd') {
        printf("Correto!\n");
        certas++;
    } else {
        printf("Incorreto!\n");
        tentativas--;
    }

    if (tentativas == 0) {
        printf("\nReprovado! Acabaram as tentativas.\n");
        return 0;
    }

    printf("\n3 – Pedestre atravessando:\n");
    printf("a) buzinar\n");
    printf("b) atropelar\n");
    printf("c) dar carona\n");
    printf("d) parar\n");

    scanf(" %c", &resposta);
    if (resposta == 'd') {
        printf("Correto!\n");
        certas++;
    } else {
        printf("Incorreto!\n");
        tentativas--;
    }

    printf("\nCertas: %d\n", certas);
    printf("Tentativas restantes: %d\n", tentativas);

    if (certas >= 2) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}
    