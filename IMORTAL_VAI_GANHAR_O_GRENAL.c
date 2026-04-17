#include <stdio.h>
#include <math.h>

float max_aceito = 0.0;
float min_aceito = 0.0;

double calcular_media(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

double encontrar_maximo(double a, double b, double c) {
    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

double encontrar_minimo(double a, double b, double c) {
    double min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

void verificar_faixa(double a, double b, double c, double min_ac, double max_ac) {
    printf("\n--- Verificacao de Faixa Segura ---\n");
    printf("Faixa aceitavel: [%.2f, %.2f]\n", min_ac, max_ac);

    printf("Valor A (%.2f): %s\n", a, (a >= min_ac && a <= max_ac) ? "DENTRO da faixa" : "FORA da faixa");
    printf("Valor B (%.2f): %s\n", b, (b >= min_ac && b <= max_ac) ? "DENTRO da faixa" : "FORA da faixa");
    printf("Valor C (%.2f): %s\n", c, (c >= min_ac && c <= max_ac) ? "DENTRO da faixa" : "FORA da faixa");
}

void exibir_barra_grafica(double media) {
    printf("\n--- Barra Grafica de Intensidade Media ---\n");
    printf("Media: %.2f\n", media);
    printf("[");
    for (int i = 0; i <= media; i++)   printf("*");
    printf("] %.1f%%\n", media);
}

void exibir_relatorio_completo(double a, double b, double c, double min_ac, double max_ac) {
    double media  = calcular_media(a, b, c);
    double maximo = encontrar_maximo(a, b, c);
    double minimo = encontrar_minimo(a, b, c);

    printf("\n====================================\n");
    printf("        RELATORIO COMPLETO          \n");
    printf("====================================\n");
    printf("Valores inseridos: A=%.2f  B=%.2f  C=%.2f\n", a, b, c);
    printf("Media            : %.2f\n", media);
    printf("Valor maximo     : %.2f\n", maximo);
    printf("Valor minimo     : %.2f\n", minimo);

    printf("\nDesvios em relacao a media:\n");
    printf("  A: %.2f  (desvio: %.2f)\n", a, a - media);
    printf("  B: %.2f  (desvio: %.2f)\n", b, b - media);
    printf("  C: %.2f  (desvio: %.2f)\n", c, c - media);

    verificar_faixa(a, b, c, min_ac, max_ac);
    exibir_barra_grafica(media);
    printf("====================================\n");
}

int main() {
    printf("\n\n");
    printf("                                              *            \n");
    printf("                                         *    *    *       \n");
    printf("\n");
    printf("                              @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                    \n");
    printf("                         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                \n");
    printf("                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@            \n");
    printf("                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       \n");
    printf("               @@@@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@      \n");
    printf("             @@@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@    \n");
    printf("            @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@   \n");
    printf("           @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@@   \n");
    printf("          @@@@@ @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@@@@@  \n");
    printf("          @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@@@@  \n");
    printf("          @@@@@ @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@@@@@  \n");
    printf("          @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@@@@  \n");
    printf("          @@@@@ @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@@@@@  \n");
    printf("          @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@  @@@@@@@@ \n");
    printf("          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  \n");
    printf("          @@@@@@@            _      _____      _____    ________          @@@@@@@   \n");
    printf("          @@@@@@@           /|     |     |    |     |          |          @@@@@@@   \n");
    printf("          @@@@@@@          / |     |     |    |     |          |          @@@@@@@   \n");
    printf("          @@@@@@@         /  |     |_____|    |     |   _______|          @@@@@@@   \n");
    printf("          @@@@@@@            |           |    |     |          |          @@@@@@@   \n");
    printf("          @@@@@@@            |           |    |     |          |          @@@@@@@   \n");
    printf("          @@@@@@@            |           |    |     |          |          @@@@@@@   \n");
    printf("          @@@@@@@            |           |    |_____|   _______|          @@@@@@@   \n");
    printf("          @@@@@@@                                                         @@@@@@@   \n");
    printf("          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  \n");
    printf("          @@@@@@@                                                         @@@@@@@   \n");
    printf("          @@@@@@@                                                         @@@@@@@   \n");
    printf("          @@@@@@@                                                         @@@@@@@   \n");
    printf("          @@@@@@@      @@@@@@  @@@@@@@  @@@@@@@ @@@@@@@@  @@@@  @@@@@@    @@@@@@@   \n");
    printf("          @@@@@@@     @@       @@   @@  @@      @@  @  @@  @@  @@    @@   @@@@@@@   \n");
    printf("          @@@@@@@     @@ @@@@  @@@@@@   @@@@@   @@ @@@ @@  @@  @@    @@   @@@@@@@   \n");
    printf("          @@@@@@@     @@   @@  @@  @@   @@      @@     @@  @@  @@    @@   @@@@@@@   \n");
    printf("          @@@@@@@      @@@@@@  @@   @@  @@@@@@@ @@     @@ @@@@  @@@@@@    @@@@@@@   \n");
    printf("          @@@@@@@                                                         @@@@@@@   \n");
    printf("          @@@@@@@                                                         @@@@@@@   \n");
    printf("          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  \n");
    printf("          @@@@@@@                                                         @@@@@@@   \n");
    printf("          @@@@@@@              FOOT - BALL    PORTO  ALEGRENSE            @@@@@@@   \n");
    printf("          @@@@@@@                                                         @@@@@@@   \n");
    printf("           @@@@@@                   F  .  B  .  P  .  A                  @@@@@@     \n");
    printf("            @@@@@@                                                      @@@@@@      \n");
    printf("             @@@@@@@                                                  @@@@@@@       \n");
    printf("               @@@@@@@@                                            @@@@@@@@         \n");
    printf("                 @@@@@@@@@@                                    @@@@@@@@@@            \n");
    printf("                    @@@@@@@@@@@@@                       @@@@@@@@@@@@@                \n");
    printf("                       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                    \n");
    printf("                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                          \n");
    printf("                                  @@@@@@@@@@@@@@@@@@@@                               \n");
    printf("                                        @@@@@@@@                                    \n");
    printf("\n");
    printf("                                  ***  I M O R T A L  ! ***\n");
    printf("\n");
    printf("=====================================================\n");
    printf("  IMORTAL VAI GANHAR O GRENAL!              \n");
    printf("  BEM VINDO AO PROGRAMA DO MEU TRABALHO DA FACULDADE!   \n");
    printf("=====================================================\n\n");
    
    double a, b, c;
    printf("Informe os tres valores de leitura:\n");
    printf("Valor A: "); scanf("%lf", &a);  
    printf("Valor B: "); scanf("%lf", &b);
    printf("Valor C: "); scanf("%lf", &c);

    printf("\nInforme a faixa segura:\n");
    printf("Minimo aceito: "); scanf("%f", &min_aceito);
    printf("Maximo aceito: "); scanf("%f", &max_aceito);

    int opcao;
    do {
        printf("\n--- MENU ---\n");
        printf("1 - Calcular media\n");
        printf("2 - Calcular valor maximo e minimo\n");
        printf("3 - Calcular desvio de cada leitura em relacao a media\n");
        printf("4 - Verificar se valores estao dentro de faixa segura\n");
        printf("5 - Exibir barra grafica de intensidade media\n");
        printf("6 - Gerar relatorio completo\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nMedia: %.2f\n", calcular_media(a, b, c));
                break;
            case 2:
                printf("\nMaximo: %.2f\n", encontrar_maximo(a, b, c));
                printf("Minimo: %.2f\n", encontrar_minimo(a, b, c));
                break;
            case 3: {
                double media = calcular_media(a, b, c);
                printf("\nMedia: %.2f\n", media);
                printf("Desvio A: %.2f\n", a - media);
                printf("Desvio B: %.2f\n", b - media);
                printf("Desvio C: %.2f\n", c - media);
                break;
            }
            case 4:
                verificar_faixa(a, b, c, min_aceito, max_aceito);
                break;
            case 5:
                exibir_barra_grafica(calcular_media(a, b, c));
                break;
            case 6:
                exibir_relatorio_completo(a, b, c, min_aceito, max_aceito);
                break;
            case 0:
                printf("\nFechando... IMORTAL SEMPRE!\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
