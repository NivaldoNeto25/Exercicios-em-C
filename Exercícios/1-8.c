#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void lucro(int vetor[], int tamanho, int posicao){
    int i, venda; 
    int lucro = 0;
        for(i = posicao + 1; i < tamanho; i++){
            
            if(vetor[i] - vetor[posicao] > lucro){
                lucro = vetor[i] - vetor[posicao];
                venda = i;
            }
        }
        if(lucro > 0){
            printf("Voce deve vender a acao quando estiver na posicao %d para ter um lucro de %d", venda , lucro);
                return;
        }
        
        printf("Voce nao tera lucro se vender a acao em algum dia mais pra frente!");
}


int main(){
    
    int i, compra, posicao, vetor[10], tamanho = 10;

    srand(time(0));

    printf("Vetor: ");
    for(i = 0; i < tamanho; i++){
        vetor[i] = rand() % 100;
        printf("%d\t", vetor[i]);
    }

    printf("\n");

    printf("Posicao: ");
    for(i = 0; i < tamanho; i++){
        printf("%d\t", i + 1);
    }

    printf("\n");

    while(1){
        printf("Escolha uma posicao do vetor para comprar a acao: ");
        scanf("%d", &compra);
        if(compra < 1 || compra > 10){
            printf("Opcao invalida!");
        }
        else{
            break;
        }
        printf("\n");
    }
    posicao = compra - 1;
    
    lucro(vetor, tamanho, posicao);

    return 0;
}
