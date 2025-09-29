#include <stdio.h>

int main(){
    int numero[9];

    for(int cont = 0; cont < 10; cont++){
    printf("digite um valor inteiro: ");
    scanf("%d", &numero[cont]);
}

  int encontrou = 0;

    printf("Numeros pares: ");
    for (int cont = 0; cont < 10; cont++) {
        if (numero[cont] % 2 == 0) {
            printf("%d, ", numero[cont]);
            encontrou = 1;
        }
    }
    return 0;
}