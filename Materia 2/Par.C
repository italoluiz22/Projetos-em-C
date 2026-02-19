#include <stdio.h>


int main(){

    int numero = 4,resultado;

    resultado = numero % 10;


    printf("A variavel é: %d\n",resultado);

    if (resultado == 0)
    {
        printf("O numero é par");
    }else{
        printf("O numero é impar");
    }
    
    
   return 0;

}