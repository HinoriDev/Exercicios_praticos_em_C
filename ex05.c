#include <stdio.h>

int main(){

    int notas[3];
    int media;
    
    printf("Digite a primeira nota: ");
    scanf("%d", &notas[0]);
        printf("Digite a segunda nota: ");
    scanf("%d", &notas[1]);
        printf("Digite a terceira nota: ");
    scanf("%d", &notas[2]);

        media = (notas[0] + notas[1] + notas[2]) / 3;

    printf("Media: %d\n", media);

    if (media >=7 ){
        printf("Aprovado\n");
    } else if (media >= 5){
        printf("Recuperação\n");
    } else{
        printf ("Reprovado\n");
    }
    
    return 0;

}