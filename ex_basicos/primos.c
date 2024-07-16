#include<stdlib.h>
#include<stdio.h> 
#include<math.h>


int main(int argc, char *argv[]){
	
	int n;
	printf("Digite o número:\n");
	scanf("%d", &n);

	if (n == 2 || n == 1){
		printf("Não é primo\n");	
	}
	else { 
		for( int i = 3; i <= sqrt(n)+1; i+=2){
			if (n % i == 0){
				printf("Não é primo\n");
			}
		}
		printf("É primo\n");
	}
	return 0;
}

// precisei usar gcc primos.c -o primos -lm para rodar 
// o que significa o -lm?