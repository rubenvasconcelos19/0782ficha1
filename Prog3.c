#include <stdio.h>

float consumo;
float semiva;
float potencia = 5.42;
float kWh = 0.16;
float iva = 0.18;

int main(void){

    printf("Insira o seu consumo de energia em kW/h: "); // Pede para o utilizador inserir o seu consumo de energia
    scanf("%f", &consumo); //Guarda os valores inseridos pelo utilizador

    semiva = potencia + consumo * kWh; // Faz a conta do valor sem iva

    printf("O valor a pagar é: %.2f \n",(semiva*iva)+semiva); //Apresenta ao utilizador o valor com iva

}