#include <stdio.h>

int main() {
    int litrosUsuario;
    int reaisGastos;
    int larguraParede;
    int alturaParede;

    printf("Digite a quantidade de litros de tinta que deseja comprar: ");
    scanf("%d", &litrosUsuario);
    printf("Digite o valor em reais que deseja gastar: ");
    scanf("%d", &reaisGastos);
    printf("Digite a altura da parede: ");
    scanf("%d", &alturaParede);
    printf("Digite a largura da parede: ");
    scanf("%d", &larguraParede);

    int areaTinta = alturaParede * larguraParede;
    int custoLitro = litrosUsuario / reaisGastos;
    int areaLitros = ((areaTinta * custoLitro)/5)*2;



    printf("O custo total da tinta é de: %d reais", custoArea);
    printf("A area total da parede é de: %d metros quadrados", areaTinta);
    
    

    return 0;
}