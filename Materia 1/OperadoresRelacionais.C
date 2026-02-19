#include <stdio.h>

int main(){
  //operadores Relacionais
    int a = 10;
    int b = 20;
  //Conversão implicita
    int x = 5;
    float y = 5.0;
  //Conversão explicta
    int num = 10;
    float result = 10.0;
    int comparison = (float)num == result;

    printf("num == result: %d\n", comparison);

    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);
   //operadores relacionais
    printf("a > b: %d\n",a > b);
    printf("a < b: %d\n",a < b);
    printf("a == b: %d\n",a == b);
    printf("a != b: %d\n",a != b);
   //conversão de tipo de forma implicita
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);
    //conversão de tipo de forma explicita
    printf("num == result: %d\n", comparison);





    return 0;




}