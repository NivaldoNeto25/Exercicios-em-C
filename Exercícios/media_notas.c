#include <stdio.h>

void media(float n1, float n2, float n3){
    float media;

    media = (n1 + n2 + n3) / 3;
    printf("Sua media e: %.2f", media);
}

int main(){
    float n1, n2, n3;

    printf("Digite tres notas para receber sua media\n");
    printf("Informe a primeira nota: ");
    scanf(" %f", &n1);
    printf("Informe a segunda nota: ");
    scanf(" %f", &n2);
    printf("Informe a terceira nota: ");
    scanf(" %f", &n3);

    media(n1, n2, n3);
}