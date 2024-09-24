#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void trocar(int matriz[5][5]){
    int i, j, x;

    for(i = 0; i < 5; i++){
        for(j = i + 1; j < 5; j++){
            x = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = x;
        }
    }
}

int main(){
    int i, j, matriz[5][5];

    srand(time(0));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    trocar(matriz);

    printf("Matriz com as posicoes de x e y invertidas:\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
