#include <stdio.h>

    int salario;
    int alimentacao;
    int descontos;

void main(){
    
    printf("Insira o salário recebido.\n");      //Pede o valor recebido ao utilizador.
    scanf(" %d",&salario);                        //Guarda o valor inserido pelo utilizador.

    printf("Insira o valor do subsidio de alimentação.\n");       //Pede do subsidio de alimentação ao utilizador.
    scanf(" %d",&alimentacao);                                    //Guarda o valor inserido pelo utilizador.

    printf("Insira o valor dos seus descontos.\n");              //Pede do valor dos  descontos do utilizador.
    scanf(" %d",&descontos);                                    //Guarda o valor inserido pelo utilizador.


    printf("O seu salário liquído é equivalente a %d€.\n",salario+alimentacao-descontos); //Mostra ao utilizador a diferença entre a (soma do salário com subsidio) e descontos (Salário Liquído)

}