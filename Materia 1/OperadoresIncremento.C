#include <stdio.h>

int main(){

int incremento = 1;
int decremento = 5;


//Pré-Decremento
printf("Antes do incremento: %d" "\n",incremento);
++incremento;
printf("Depois do incremento: %d""\n",incremento);

printf("Antes do decremento: %d" "\n",decremento);
--decremento;
printf("Depois do decremento: %d""\n",decremento);

//Pos decremento
printf("Antes do incremento: %d""\n",incremento);
incremento++;
printf("Depois do incremento: %d""\n",incremento);

printf("Antes do decremento: %d" "\n",decremento);
decremento--;
printf("Depois do decremento: %d""\n",decremento);



return 0;

}