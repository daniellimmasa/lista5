#include<stdio.h>
int main(){
float nota1, nota2, nota3, media;
    
    printf("digite sua nota da prova1: ");
    scanf("%f", &nota1);
    
    printf("digite sua nota da prova2: ");
    scanf("%f", &nota2);
    
    printf("digite sua nota da prova3: ");
    scanf("%f", &nota3 );
    nota3 = nota3 *2;

    media= (nota1 + nota2 + nota3) /3;
    printf("\n a media do aluno e: %.2f \n ", media);
    
    
    if(media >=7){
        printf("\n O aluno esta APROVADO");
    }else{
        printf("\n o aluno esta REPROVADO");


    }




    


    




}