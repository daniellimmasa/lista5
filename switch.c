#include<stdio.h>

int main(void){
 int opcao;
 printf("digite a opcao da semana: ");
 scanf("%d, &opcao");

 switch(opcao){

    case 1:
    printf("domingo");
    break;

    case 2:
    printf("\nsegunda");
    break;

    case 3:
    printf("\nterca");
    break;
    
    case 4:
    printf("\nquarta");
    break;

    case 5:
    printf("\nquinta");
    break;
    case 6:
    printf("\nsexta");
    break;

    case 7:
    printf("\nsabado");
    break;
    default:
    printf("nenhuma d as opcoes acima");

   

 }




}