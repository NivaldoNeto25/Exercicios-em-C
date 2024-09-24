#include <stdio.h>

void achar_alvo(int alvo, int vetor[], int tamanho){
    int i, j;

    for(i = 0; i < tamanho; i++){
        for(j = i + 1; j < tamanho; j++){
            if(vetor[i] + vetor[j] == alvo){
                printf("%d + %d = %d\n", vetor[i], vetor[j], alvo);
                return;
            }
        }
    }
}

int main(){
    int i, alvo, vetor[10], tamanho = sizeof(vetor) / sizeof(vetor[0]);

    for(i = 0; i < tamanho; i++){
        vetor[i] = i;
        printf("%d\t", vetor[i]);
    }

    printf("\n");

    while(1){
        
        printf("Informe um numero de 1 ate 17: ");
        scanf("%d", &alvo);
        printf("\n");

        if(alvo < 1 || alvo > 17){
            printf("Valor invalido!\n");
        }
        else{
            printf("Vou tentar achar dois numeros do vetor que somados dao o numero que voce escolheu!\n");
            break;
        }
    }

    achar_alvo(alvo, vetor, tamanho); 
    
    return 0;
}
