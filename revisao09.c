#include <stdio.h>

int main(){
    int vetor[6];

    
    for(int cont = 0; cont < 6; cont++){
        printf("Digite um número inteiro [%d / 6]: ", cont + 1);
        scanf("%d", &vetor[cont]);
    }
    for(int cont = 0; cont < 6; cont++){
        printf("\n%d", vetor[cont]);
    }

    for(int cont = 0; cont < 6; cont++){
        printf("\n%d", vetor[5 - cont]);
    }
    printf("\n");

    return 0;
}