#include <stdio.h>


int main(){


    int a =0,b = 5;
    int y =1,x = 0;
    int d = -5;

    //Operador Logico em que as duas condições tem que ser verdadeira
    if(a > 0 && b > 0){
        printf("Os dois Numero são positvos\n");
    }else
    {
        printf("Pelo menos 1 das condições é negativa\n");
    }
    printf("\n");

    ///Operador Logico em que ao menos 1 condição tem que ser verdadeira
     if(y > 0 || x > 0){
        printf("Ao menos 1 das condições é verdadeira\n");
    }else
    {
        printf("as 2  condições são negativa negativa\n");
    }
    
   printf ("\n");
    
    ///Operador Logico em que se inverte o valor logico da condição 
     if(!(d > 0)){
        printf("A variavel é zero\n");
    }else{
        printf("A varivael é diferente de zero\n");
    }
   
}