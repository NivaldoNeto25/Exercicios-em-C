#include <stdio.h>
#include <string.h>

int cadastros = 0;
const int pessoas = 10;
char nome[10][60], rg[10][11];

void cadastro(){ // Função para fazer os cadastros
    if(cadastros >= pessoas){
        printf("O limite de cadatros já foi atingido!");
        return;
    }

    printf("Informe seu nome completo: ");
    scanf(" %[^\n]", &nome[cadastros]);
    printf("Informe o seu RG (Apenas numeros): ");
    scanf(" %[^\n]", &rg[cadastros]);
    cadastros++;
    printf("Voce foi cadastrado com sucesso!\n");
}

void consultar(){ //Função para consultar o cadastro no sistema
    int i;
    char rg_consultado[11];
    printf("Informe o seu RG (Apenas numeros): ");
    scanf(" %[^\n]", &rg_consultado);

    for(i = 0; i < 10; i++){
        if(strcmp(rg[i], rg_consultado) == 0){
            printf("Nome encontrado : %s\n", nome[i]);
            return;
        }
    }
    printf("Nome nao encontrado!\n");
}

int main(){
    int opcao = 0;

    while (opcao != 3){
    
        printf("\n[1] - Cadastrar\n[2] - Consultar RG\n[3] - Sair\nEscolha uma das opcoes acima: ");
        scanf(" %d", &opcao);

        switch (opcao){
        case 1:
            cadastro();
            break;
        case 2:
            consultar();
            break;
        case 3:
            printf("Volte sempre!");
            break;
        default:
            printf("Opcao invalida! Tente novamente");
            break;
        }
    }
    return 0;
}
