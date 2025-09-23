//1- Leia a quantidade de elemetnos (numeros inteiros) que serão analisados;
//2- Leia e armazene os numeros na quantidade informada;
//3- Analise os numeros e informe quais são positivos, quais são negativos e quais são zero;
#include <stdio.h>
int main(){
    int tamanho = 0;
    do{
    printf("Quantos elementos serão analisados? ");
    scanf("%d", &tamanho);
    if(tamanho <= 0){
        printf("tamanho invalido\n");
    }
} while(tamanho <= 0);

    int  vetor[tamanho];

    for(int cont = 0; cont < tamanho; cont++){
    printf("digite os elementos [%d / %d]:", cont + 1, tamanho);
    scanf("%d", &vetor[cont]);
}
for (int cont = 0; cont < tamanho; cont++){

    printf("%d é", vetor[cont]);
    if(vetor[cont] > 0){
        printf(" positivo\n");
    } else if (vetor[cont] < 0 ){
        printf(" negativo\n");
    } else{
        printf(" igual à zero\n");
    }
 }
    return 0;        
 }