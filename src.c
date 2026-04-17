#include <stdio.h>
#include <string.h>

struct Agenda{
    char usuario[50];
    char senha[50];
};

struct Agenda usuarios[100];
int totalUsuarios = 0;

int buscarUsuario(char nome[]);

int buscarUsuario(char nome[]) {

    for(int i = 0; i < totalUsuarios; i++) {

        if(strcmp(usuarios[i].usuario, nome) == 0) {
            return i;
        }

    }

    return -1;
}

void adicionarUsuario(){
    printf("Digite um nome de usuario: ");
    scanf("%s", usuarios[totalUsuarios].usuario);
    printf("Digite uma senha: ");
    scanf("%s", usuarios[totalUsuarios].senha);

    if(strcmp(usuarios[totalUsuarios].usuario, "0") == 0){
        usuarios[totalUsuarios].usuario[0] = '\0';
        usuarios[totalUsuarios].senha[0] = '\0';
        return;
    }
    if(strcmp(usuarios[totalUsuarios].senha, "0") == 0){
        usuarios[totalUsuarios].usuario[0] = '\0';
        usuarios[totalUsuarios].senha[0] = '\0';
        return;
    }else{
        totalUsuarios++;
    }
}

void listarUsuario(){
    for(int i = 0; i < totalUsuarios; i++){
        printf("Usuario %d: %s\n", i + 1, usuarios[i].usuario);
    }
}

void mudarSenha(){
    char nome[50];
    char senhaAtual[50];
    char novaSenha[50];

    printf("Digite o usuario: ");
    scanf("%s", nome);

    if(strcmp(nome, "0") == 0) return;

    int posicao = buscarUsuario(nome);

    if(posicao != -1){
        printf("Digite a senha atual: ");
        scanf("%s", senhaAtual);

        if(strcmp(usuarios[posicao].senha, senhaAtual) == 0){
            printf("Digite a nova senha: ");
            scanf("%s", novaSenha);
            strcpy(usuarios[posicao].senha, novaSenha);
            printf("Senha alterada com sucesso!\n");
        }else{
            printf("Senha atual incorreta!\n");
        }
    }else{
        printf("Usuario nao encontrado!\n");
    }
}

void removerUsuario(){

    char nome[50];

    printf("Digite o nome do usuario que deseja remover: ");
    scanf("%s", nome);

    int posicao = buscarUsuario(nome);

    if(posicao != -1){
        for(int i = posicao; i < totalUsuarios - 1; i++){
            usuarios[i] = usuarios[i + 1];
        }

        totalUsuarios--;

        printf("Usuario removido com sucesso!\n");
    }else{
        printf("Usuario nao encontrado!\n");
    }

}

int main(){

    printf("Bem vindo a sua agenda de usuario e senha!\n");

    int opcao;

    while(1){

        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("3 - Mudar senha\n");
        printf("4 - Remover\n");
        printf("5 - Sair\n");

        scanf("%d", &opcao);

        if (opcao == 1) adicionarUsuario();
        if (opcao == 2) listarUsuario();
        if (opcao == 3) mudarSenha();
        if (opcao == 4) removerUsuario();
        if (opcao == 5) break;

    }

    return 0;
}