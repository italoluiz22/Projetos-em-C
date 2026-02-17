#include <stdio.h>

int main(){
    float n1,n2,n3;
    float resultado;


    printf("Digite o primeiro valor: ");
    scanf("%f",&n1);
    printf("Digite o segundo valor: ");
    scanf("%f",&n2);
    printf("Digite o segundo valor: ");
    scanf("%f",&n3);


    resultado = ( n1 + n2 + n3) / 3;
//também pode ser usar o casting pra conversão de dados
// resultado = (float)(n1 + n2 + n3) / 3;

    printf("Esse é o resultado: %.2f",resultado);


    return 0;



}