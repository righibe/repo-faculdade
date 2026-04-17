#include <stdio.h>

int main(){
    int nPatos;
    printf("Digite o numero de patinhos: ");
    scanf("%d", &nPatos);
    while(nPatos > 0){
        printf("%d patinhos\nForam passear\nAlém das montanhas\nPara brincar\nA mamãe gritou\nQuack quack quack\nMas só %d patinhos\nVoltaram de lá\n", nPatos, nPatos - 1);
        nPatos--;
        if(nPatos == 1){
            printf("1 patinho\nFoi passear\nAlém das montanhas\nPara brincar\nA mamãe gritou\nQuack quack quack\nMas nenhum patinho\nVoltou de lá\n");
        }
        
    }
    printf("A mamãe patinha\nFoi procurar\nAlém das montanhas\nNa beira do mar\nA mamãe gritou\nQuack quack quack\nE nenhum patinho voltou de lá")
    return 0;
}
    