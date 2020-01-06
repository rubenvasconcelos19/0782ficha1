#include <stdio.h>

    int receitas;
    int despesas;

void main(){
    
    printf("Insira o valor recebido.\n");     //Pede o valor recebido ao utilizador.
    scanf(" %d",&receitas);                  //Guarda o valor inserido pelo utilizador.

    printf("Insira o valor das dispesas.\n"); //Pede o valor das despesas do utilizador.
    scanf(" %d",&despesas);                  //Guarda o valor inserido pelo utilizador.

    printf("O seu saldo é equivalente a %d€.\n",receitas-despesas); //Mostra ao utilizador a diferença entre receitas e despesas (saldo)

}