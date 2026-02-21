#include <stdio.h>

int main(){
 
    int idade;

    printf("Digite a sua idade:");
    scanf("%d",&idade);

    if(idade < 12){
        printf("VocÊ é uma criança\n");
    }else if (idade >= 12 && idade < 18)
    {
        printf("vocÊ é um adolescente\n");
    } else if (idade >= 18 && idade < 60)
    {
        printf("vocÊ é um adolescente\n");
    }else{
        printf("VocÊ é um idoso");
        
    }
    


return 0;


}