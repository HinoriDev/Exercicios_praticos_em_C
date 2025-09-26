#include <stdio.h>

int main() {

    int numA, numB, numC, maior;

    printf("digite um número inteiro: ");
    scanf("%d", &numA);
    printf("digite um número inteiro: ");
    scanf("%d", &numB);
    printf("digite um número inteiro: ");
    scanf("%d", &numC);

    maior = numA;
    if(numB > maior){
        maior = numB;
    }
    if(numC > maior) {
        maior = numC;
    }

    printf("O número maior é %d\n", maior);

    return 0;
}