#include <stdio.h>



int main(){
    int idade = 16;
    int resultado;

    int temperatura = 28;
    int resultado1;

    int num1 = 40,num2 = 20;
    int maior;

//Desafio da idadae
   resultado= idade >= 18 ? 1 : 0;

   if (resultado == 1)
   {
     printf("VocÊ é maior de idade\n") ;

   }else{
    printf("VocÊ é menor de idade\n");
   }
//Desafio Temperatura
   resultado1 = temperatura > 30 ? 1 : 0;
    if (resultado1 == 1)
    {
        printf("Está calor \n");
    }else{
        printf("Está frio\n");
    }


    num1 > num2 ? maior = num1 :maior ; num2;
    printf("o numero maior é:%d\n",maior);
    


}