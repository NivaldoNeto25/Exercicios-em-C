#include <stdio.h>

int main(){
    
    int cod, quant;
    float total = 0;
    float preco[5] = {2.98, 4.50, 9.98, 4.49, 6.87};

    while(1){
        printf("Informe o codigo do produto e a quantidade:\n");
        scanf("%d %d", &cod, &quant);

        if(cod >= 1 && cod <=5){
            total += preco[cod - 1]*quant;
        }
        else if(cod == 0 && quant == 0){
            break;
        }
        else{
            printf("Codigo invalido! Tente novamente.\n");
        }
    }
    printf("O total vendido foi R$%.2f", total);
    return 0;
}
