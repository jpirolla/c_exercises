/*

*/

#include<stdio.h>

int main(){ 

int i, j, linhaA, colunaA, linhaB, colunaB, x, aux;

// Dados das matrizes
linhaA = 3;
linhaB = 2;

colunaA = 2;
colunaB = 3;

int matrizA[linhaA][colunaA], matrizB[linhaB][colunaB], matrizC[linhaA][colunaB];

if(colunaA == linhaB){

    // percorre cada linha de matrizA.
    for( int i = 0; i < linhaA; i++){

        // percorre cada linha coluna de matrizb
        for (int j = 0; j < colunaA; j++){

            matrizC[i][j] = 0;
            
            for(int x = 0; x < linhaB; x++){
                aux +=  matrizA[i][x] * matrizB[x][j];
            }

        matrizC[i][j] = aux;
		aux = 0;
        }
    }
    for(i = 0; i < linhaA; i++) {
		for(j = 0; j < colunaB; j++) {
			printf("%6.f", matrizC[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");

    } else {
	printf("\n\n Nao ha com multiplicar as matrizes dadas ");
}






}
    
}