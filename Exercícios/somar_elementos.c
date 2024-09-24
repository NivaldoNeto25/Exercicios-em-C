#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i, s, soma = 0, vetor[s];

    srand(time(0));

    printf("Informe o tamanho de um vetor. Irei gerar valores aleatorios paara esse vetor e somar seus elementos.\n");
    printf("Informe o tamanho: ");
    scanf(" %d", &s);

    printf("O vetor gerado foi: ");
    for(i = 0; i < s; i++){
        vetor[i] = rand() % 100;
        soma += vetor[i];
        printf("%d\t", vetor[i]);
        printf("\n");
    }

    printf("\n");
    printf("A soma dos elementos do vetor e: %d", soma);
}