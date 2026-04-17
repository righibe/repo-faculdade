#include <stdio.h>

int main() {
    char jogador, computador;

    printf("R = Pedra | P = Papel | T = Tesoura | L = Lagarto | S = Spock\n");

    printf("Jogador: ");
    scanf(" %c", &jogador);

    printf("Computador: ");
    scanf(" %c", &computador);

    if (
        (jogador == 'R' && (computador == 'T' || computador == 'L')) ||
        (jogador == 'P' && (computador == 'R' || computador == 'S')) ||
        (jogador == 'T' && (computador == 'P' || computador == 'L')) ||
        (jogador == 'L' && (computador == 'S' || computador == 'P')) ||
        (jogador == 'S' && (computador == 'T' || computador == 'R'))
    ) {
        printf("Voce venceu!\n");
    } else if (jogador == computador) {
        printf("Empate!\n");
    } else {
        printf("Computador venceu!\n");
    }

    return 0;
}
