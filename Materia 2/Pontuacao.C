#include <stdio.h>

int main(){

    int nota;

    printf("Digite sua nota: ");
    scanf("%d",&nota);


    if(nota >= 90){
        printf("Conceito A!");
    }else if(nota > 80){
        printf("Conceito é B!");
    }else if(nota >= 70){
        printf("Conceito é C!");
    }else if(nota >= 60){
        printf("Conceito é D!");
    }else if(nota >= 50){
        printf("Conceito é E!");
    }else{
        printf("Conceito é E!");
    }

    return 0;
}