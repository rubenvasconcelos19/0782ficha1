#include <stdio.h>

float teste1;
float teste2;
float teste3;
float media = 0;
char nome[100];


void main(){

    printf("Insira o seu primeiro nome: ");
    scanf(" %s", nome);

    printf("Insira a sua nota no teste 1: ");
    scanf(" %f", &teste1);

    printf("Insira a sua nota no teste 2: ");
    scanf(" %f", &teste2);

    printf("Insira a sua nota no teste 3: ");
    scanf(" %f", &teste3);

    media = teste1*0.25 + teste2*0.35 + teste3*0.40;

    printf("Nome: %s \nMédia: %.2f \n", nome, media);

}