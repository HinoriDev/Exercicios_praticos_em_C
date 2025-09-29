#include <stdio.h>

int main(){
    int numero[10];
    int buscado, encontrou = 0;

    for(int cont = 0; cont < 10; cont++){
    printf("digite um valor inteiro: ");
    scanf("%d", &numero[cont]);
    }
    printf("Digite o número que deseja buscar: ");
    scanf("%d", &buscado);

    for(int cont = 0; cont < 10; cont++){
        if(numero[cont] == buscado);
        encontrou++;
    }
    printf("o Numero %d aparece %d vezes.\n", buscado, encontrou);

    return 0;
}
