#include <stdio.h>
#include <time.h>


void preencher_vetor(int vetor1[], int tamanho){
    int i, j, x = 0, y = 0, vetor2[15] = {0};


    printf("Vetor (valores unicos): ");


    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            if(vetor1[i] == vetor2[j]){
                x = 1;
                break;
            }
        }

        if(!x){
            vetor2[y] = vetor1[i];
            y++;
        }
    }


    for(i = 0; i < tamanho; i++){
        printf("%d\t", vetor2[i]);
    }
    printf("\n");
}

int main(){
    int i, vetor1[15], tamanho = sizeof(vetor1) / sizeof(vetor1[0]);

    srand(time(0));

    printf("Vetor = ");
    for(i = 0; i < tamanho; i++){
        vetor1[i] = rand() % 10;
        printf("%d\t", vetor1[i]);
    }
    printf("\n");

    preencher_vetor(vetor1, tamanho);
}
