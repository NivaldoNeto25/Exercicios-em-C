#include <stdio.h>
#include <math.h>
#include <time.h>

float func_media(int vetor[]){
    int i, soma = 0, tamanho = 15;
    float media;

    for(i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    media = (float)soma / tamanho;
    return media;
}

float func_variancia(int vetor[], float media){
    int i, tamanho = 15;
    float variancia = 0;

    for(i = 0; i <tamanho; i++){
        variancia += pow(vetor[i] - media, 2);
    }
    return variancia / tamanho;
}

int main(){
    int i, tamanho = 15, vetor[15];
    float media, variancia;

    srand(time(0));

    for(i = 0; i < tamanho; i++){
        vetor[i] = rand() % 100;
        printf("%d\t", vetor[i]);
    }

    printf("\n");

    media = func_media(vetor);
    variancia = func_variancia(vetor, media);

    printf("Media: %.2f\n", media);
    printf("Variancia: %.2f\n", variancia);

    return 0;
}