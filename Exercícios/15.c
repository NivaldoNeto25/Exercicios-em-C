#include <stdio.h>

int primo(int num){
    int i;

    if(num <= 1){
        return 0;
    }

    for(i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;

    printf("Informe um numero e vou dizer se ele e primo ou nao\n");
    printf("Digite o numero: ");
    scanf(" %d", &num);

    printf("%d", primo(num));
}
