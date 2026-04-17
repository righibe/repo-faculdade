include <stdio.h>

int main() {
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);

    for(int i = valor; i <= 10; i++){
        printf("%d x %d = %d\n", valor, i, valor * i);
    }
    
    return 0;
}