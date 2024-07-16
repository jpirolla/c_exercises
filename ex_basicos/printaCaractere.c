#include<stdio.h> 
#include<ctype.h>

int main(){
    char carac; 
    
    carac =  getchar();
    // Verifica se o caractere é maiúscula ou minúscula
    if (isupper(carac)) {
        printf("%c\n", tolower(carac));
    } else if (islower(carac)) {
        printf("%c\n", toupper(carac));
    } else {
        printf("%d\n", (int)carac);
    }

    return 0;
}