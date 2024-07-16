#include<stdio.h>
#include<stdlib.h> 

int main(void){
    FILE *file;
    int x, y, z;

    file = fopen("numero.txt", "r");
    if(file == NULL){
        printf("O aquivo nao pode ser aberto\n");
        return 0;
    }
    // fscanf requer que o arquivo esteja formatado dessa forma

    fscanf(file, "%d %d %d", &x, &y, &z);
    printf("%d %d %d\n", x, y, z);
    fclose(file);
    return 0;

}