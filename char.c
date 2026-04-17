#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int vogais = 0;
    
    printf("Digite 10 caracteres:\n");
    for(int i = 0; i < 10; i++) {
        scanf(" %c", &c);
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }
    
    printf("Quantidade de vogais digitadas: %d\n", vogais);
    
    return 0;
}