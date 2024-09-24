#include <stdio.h>

void mapa(int x, int y) { //Função para imprimir o mapa
    const int tamanho_mapa = 6;
    int i, j;

    for (i = 0; i < tamanho_mapa; i++) {
        for (j = 0; j < tamanho_mapa; j++) {
            if (i == x && j == y) {
                printf(" # ");
            } 
            else{
                printf(" - ");
            }
        }
        printf("\n");
    }
}

int main(){
    int x = 2, y = 2;
    char comando;
    do{
        mapa(x, y);
        printf("Informe o comando:\nO - oeste\nL - leste\nN - norte\nS - sul\nX - sair\n");
        scanf(" %c", &comando);

        switch(comando){
        case 'O':
            if(y > 0){
                y--;
            }
            break;
        case 'L':
            if(y < 5){
                y++;
            }
            break;
        case 'N':
            if(x > 0){
                x--;
            }
            break;
        case 'S':
            if(x < 5){
                x++;
            }
            break;
        case 'X':
            break;
        default:
            printf("Comando inválido! Tente novamente.\n");
        }
    } while(comando != 'X');

    return 0;
}
