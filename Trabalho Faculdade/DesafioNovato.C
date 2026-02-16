#include <stdio.h>

int main (){
  char estado;
  char codigo[10];
  char cidade[20];
  int populaçao;
  float area;
  float PIB;
  float NPT;

  scanf("%d",&estado);
  scanf("%c",&codigo);
  fgets(cidade,sizeof(cidade),stdin);
  scanf("%d",&populaçao);
  scanf("%f",&area);
  scanf ("%f",&PIB);
  scanf("%d",&NPT);


  return 0 ;
};




