#include <stdio.h>

int main(){
    int num;

    printf("Informe um numero e eu vou dizer se ele e par ou impar: ");
    scanf(" %d", &num);

    if (num % 2 == 0){
        printf("O numero e par!");
    }
    else{
        printf("O numero e impar!");
    }
}