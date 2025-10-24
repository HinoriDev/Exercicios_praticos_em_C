#include <stdio.h>

int main(){
    char palavra [50];
    int cont = 0;

    printf("digite uma palavra: ");
    scanf("%50[^\n]", palavra);

    printf("Palavra digitada: %s\n", palavra);

    while (palavra[cont] != '\0') {
        cont++;
    }

    printf("Qauntidade de caracteres: %d\n", cont);

    return 0;
}