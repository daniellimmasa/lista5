#include<stdio.h>
int main(){
int idade, tempo;

 printf("digite sua idade: ");
 scanf("%d",&idade);
 printf("digite o tempo de servico: ");
 scanf("%d", &tempo);

if(idade>=65){
    printf("voce pode aposentar");

}else if(tempo >= 30){
    printf("voce pode aposentar");

}else if(idade>=60 && tempo >=25){
    printf("voce pode aposentar");

}else{
    printf("voce nao pode aposentar");
}







}
