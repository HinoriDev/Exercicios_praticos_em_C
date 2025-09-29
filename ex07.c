#include <stdio.h>

int main(){
    int numero[8];
    int maior, menor;

    for(int cont = 0; cont < 8; cont++){
    printf("digite um valor inteiro: ");
    scanf("%d", &numero[cont]);
}
  maior = menor = numero[0];

    for (int cont = 1; cont < 8; cont++) {
        if (numero[cont] > maior) {
            maior = numero[cont];
        } if(numero[cont] < menor){
            menor = numero[cont];
     }
 }
 printf("Maior %d\n", maior);
 printf("Menor %d\n", menor);
        return 0;
    }

