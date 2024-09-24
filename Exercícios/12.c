#include <stdio.h>

int main(){
    int n1, n2;

    printf("Informe dois numero e eu vou dizer qual o maior e qual o menor\n");
    printf("Informe o primeiro numero: ");
    scanf(" %d", &n1);
    printf("Informe o segundo numero: ");
    scanf(" %d", &n2);

    if(n1 > n2){
        printf("%d e o maior numero", n1);
    }
    else if(n2 > n1){
        printf("%d e o maior numero", n2);
    }
    else{
        printf("Os numeros sao iguais");
    }
}
