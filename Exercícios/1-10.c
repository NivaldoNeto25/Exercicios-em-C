#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float media(int vetor[10]){
    int i, soma = 0;
    float md;
    for(i = 0; i < 10; i++){
        soma += vetor[i];
    }
    md = soma/10;
    return md;
}

int menor(int vetor[10]){
    int i, menor = vetor[0];

    for(i = 0; i < 10; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    return menor;
}

int maior(int vetor[10]){
    int i, maior = vetor[0];

    for(i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main(){
    int i, vetor[10];
    
    srand(time(0));
    
    printf("Vou gerar um vetor com 10 numeros inteiros aleatorios e vou te informar a media dos valores do vetor; O menor e o maior numero entre eles\n");

    for(i = 0; i < 10; i++){
        vetor[i] = rand() % 100;
        printf("%d,", vetor[i]);
    }
    printf("\n");
    printf("A media dos valores do vetor e: %.2f\n", media(vetor));
    printf("O menor valor do vetor e: %d\n", menor(vetor));
    printf("O maior valor do vetor e: %d\n", maior(vetor));
}

