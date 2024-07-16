#include<stdio.h>

int opc;

long int somaInteiros(int x, int y) {
    if (x <= y) {
        return x + somaInteiros(x + 1, y);
    } else {
        return 0;
    }
}

long int produtoInteiros(int x, int y) { 
    if (x <= y) {
        return x * produtoInteiros(x + 1, y);
    } else {
        return 1; 
    }
}

float calculaPotencia(int x, int y) {
    if (y == 0){
        return 1;
    }
    else if (y > 0){
        return x * calculaPotencia(x, y - 1);
    }
    else{
        float pot = 1.0/x;
        return pot * calculaPotencia(x, y + 1);
    }
}

int menu() {
    printf("\n\nDigite a opcao:\n1 - para somatoria;\n2 - para produtorio;\n3 - para potencia;\nDigite outro numero para sair.\n");
    scanf("%i", &opc);
    
    return opc;
}

int main() {
    int x, y;
    char continuar;
    
    do {
        menu();
        
        printf("\nDigite o valor de x: ");
        scanf("%i", &x);

        printf("\nDigite o valor de y: ");
        scanf("%i", &y);

        switch (opc) {
            case 1: 
                if (y >= 0) {
                    
                    printf("A somatoria dos numeros em [%d, %d] e %ld\n", x, y,  somaInteiros(x, y));
                }else {
                    printf("Nao ha numeros a serem somados, pois nao foi definido um intervalo valido\n");
                }
                break;
                
            case 2: 
                if (x != y) {
                    printf("O produtorio dos numeros em [%d, %d] e %ld\n", x, y, produtoInteiros(x, y));
                } else {
                    printf("Erro! Os numeros selecionados nao formam um intervalo valido\n");
                }
                break;
                
            case 3: 
                if (x == 0 & y < 0){
                     printf("Erro! Divisão indefinida\n");
                }
                else{ 
                    printf("A potencia %d^%d e %f\n", x, y, calculaPotencia(x, y));
                }
                break; 
                
            default:
                printf("Opcao invalida!\n");
                break;
        }
        
        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar); 
        
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
