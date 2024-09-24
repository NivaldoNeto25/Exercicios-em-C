#include <stdio.h>
#include <math.h>

void areacirculo(int raio){
    float area, pi = 3.14;

    area = pi * pow(raio, 2);

    printf("A area do circulo e: %f", area);
}

int mamin(){
    float raio;

    printf("Vamos calcular a area de um circulo!\n");
    printf("Informe o raio do círculo: ");
    scanf(" %f", &raio);

    areacirculo(raio);
}