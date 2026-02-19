#include <stdio.h>

int main(){

    //conversão implicita
    int a =10;
    float b = 3.5;
    float resultado = a + b;

    printf("Resultado :%2.f",resultado);


    //conversão explicita
    int c = 10;
    float d = 3;
    float quocionante = (float) a / b;

    printf("Quocionante é: %.2f\n",quocionante);

    return 0;



}