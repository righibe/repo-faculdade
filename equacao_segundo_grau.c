#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, delta;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    delta = sqrt(b * b - 4 * a * c);
    calculo1 = (-b + delta) / (2 * a);
    calculo2 = (-b - delta) / (2 * a);
    printf("O valor de delta é: %d\n", delta);
    printf("O valor de x1 é: %d\n", calculo1);
    printf("O valor de x2 é: %d\n", calculo2);
    return 0;
} 