#include<stdio.h>
#include<stdlib.h> 

int main(void){
    FILE *file;
    file = fopen("teste.txt", "w");
    fprintf(file, "oi, isso é um teste de escrita em arquivo txt");
    fclose(file);

    return 0;

}