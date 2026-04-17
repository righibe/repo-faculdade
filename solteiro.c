#include <stdio.h>
#include <ctype.h>

int main() {
    int s = 0, c = 0, d = 0, v = 0;
    char est;
    
    for(int i = 0; i <= 5; i++) {
        printf("Digite o estado civil da pessoa %d (S, C, D, V): ", i + 1);
        scanf(" %c", &est);
        
        switch(est) {
            case 'S':
                s++;
                break;
            case 'C':
                c++;
                break;
            case 'D':
                d++;
                break;
            case 'V':
                v++;
                break;
            default:
                printf("Caractere invalido. Nao computado em nenhum estado civil válido.\n");
                i--; 
                break;
        }
    }
    
    printf("\nQuantidade de pessoas solteiras: %d\n", s);
    printf("Quantidade de pessoas casadas: %d\n", c);
    printf("Quantidade de pessoas divorciadas: %d\n", d);
    printf("Quantidade de pessoas viuvas: %d\n", v);
    
    return 0;
}
