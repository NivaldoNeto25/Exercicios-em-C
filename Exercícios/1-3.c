#include <stdio.h>

void converter(float celsius){
    float fah;

    fah = (celsius * 1.8) + 32;

    printf("Temperatura em Fahrenheit: %.2f", fah);
}

int main(){
    float celsius;

    printf("Informe uma temperatura em graus Celsius e eu vou converter para Fahrenheit\n");
    printf("Informe a temperatura: ");
    scanf(" %f", &celsius);

    converter(celsius);
}
