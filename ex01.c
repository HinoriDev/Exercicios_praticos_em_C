//Escreva um programa em C que leia um número inteiro e verifique se ele é par ou ímpa. O programa deve utilizar uma estrutura condicional (if-else). Ao final, exiba uma mensagem indicando se o número digitado é par ou ímpar.

#include <stdio.h>
int main(){
    int number;

    printf("digite um numero inteiro: ");
    scanf("%d", &number);

    if ( number % 2 == 0){ 
    printf("esse numerp e par: %d\n", number);
    } else{
        printf("esse numero é impar: %d\n", number);
    }

    return 0;
}