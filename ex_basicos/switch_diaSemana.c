/* 
Escreva um programa que pede para o
usuário entrar um número correspondente
a um dia da semana e que então apresente
na tela o nome do dia.
*/

#include<stdio.h>

int main(){
    int dia;

    printf("Entre com o número correspondente ao dia da semana\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
    if (dia == 1){
        printf("Domingo\n");
    }

    case 2:
    if (dia == 2){
        printf("Segunda\n");
    }
    
    case 3:
    if (dia == 3){
        printf("Terça\n");
    }
    case 4:
    if (dia == 4){
        printf("Quarta\n");
    }
    case 5:
    if (dia == 5){
        printf("Quinta\n");
    }
    case 6:
    if (dia == 6){
        printf("Sexta\n");
    }
    case 7:
    if (dia == 7){
        printf("Sábado\n");
    }
    
    default:
        break;
    }

    return 0;
}