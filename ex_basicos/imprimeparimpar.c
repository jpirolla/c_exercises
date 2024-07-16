#include<stdio.h>

void imprimePar(int num)
{
  // for (condição inicial; condição final; passo)
  printf("Os primeiros %d números naturais pares são:\n", num);
  for (int i = 0; i <= num; i+=2){
  printf("%d\n", i);
  }
}

void imprimeImpar(int num)
{
  printf("Os primeiros %d números naturais pares são:\n", num);
  for (int i = 1; i <= num; i+=2){
  printf("%d\n", i);
  }
}

int main(){
    int n;
    puts("Digite um numero inteiro");
    scanf("%d", &n);
    puts("Os valores sao:");
    
    if (n%2 == 0){
      imprimePar(n);
    } 
    else{
      imprimeImpar(n);  
    }
    
    return 0;
}


