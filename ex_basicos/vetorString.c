#include <stdio.h>
#include <locale.h> 

int main() {
    setlocale(LC_ALL, "Portuguese");
    char str[10] = "Juliana";
    printf("\nString: %s", str); 

    printf("\nSegunda letra: %c", str[1]);
    printf("\nMudando de U para O:\n");
    str[1] = 'O';
    printf("\nNova string: %s\n", str);

    return 0;
}