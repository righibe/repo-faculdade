#include <stdio.h>

char verificaLetra(char letra){
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        return "vogal";
    }else{
        return "consoante";
    }
}

char verificarTexto(char letra){
    if (isupper(letra)){
        return "maiuscula";
    }else{
        return "minuscula";
    }
}
    
int main(){
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    tipo = verificarTexto(letra);
    vogalOuConsoante = verificarLetra(letra);

    printf("A letra %c é %s e %s\n", letra, tipo, vogalOuConsoante);

}