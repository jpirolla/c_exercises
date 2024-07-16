#include <stdio.h>

int main(void) {
  
  int vet[5];//declarando um vetor de inteiros com cinco posições
   //O nome do vetor (sem  índice) é apenas um  ponteiro que aponta  para o primeiro elemento do vetor.
  int *p; //declaração de um ponteiro p do tipo inteiro
  p = vet; //p recebe o endereço do primeiro elemento do vetor vet

  printf("Valor do endereço armazenado no ponteiro p é %p\n",p);
  printf("Valor do endereço do vetor vet é %p\n",&vet);
  printf("Valor do endereço do primeiro elemento do vetor vet[0] é %p\n",&vet[0]);


  /*Os colchetes [ ] substituem o uso conjunto de operações aritméticas e de acesso ao
conteúdo (operador “*”) no acesso ao conteúdo de uma posição de um vetor ou ponteiro. O valor entre colchetes é o deslocamento a partir da posição inicial do vetor.*/
  //printf("Terceiro elemento de vet: %d ou %d",p[2],*(p+2));

  printf("\n\n Leitura de valores para o vetor vet: \n");
  //Leitura do vetor de forma tradicional
  for(int i=0;i<5;i++){
    printf("vet[%d] : ",i);
    scanf("%d",&vet[i]);
  }
  printf("\n\n Impressão de valores para o vetor vet: \n");
  //impressão do vetor de forma tradicional
  for(int i=0;i<5;i++){
    printf("vet[%d] = %d\n",i,vet[i]);
  }
  
  printf("\n\n Leitura de valores para o vetor usando ponteiro: \n");
  //Leitura do vetor de forma indireta
  for(int i=0;i<5;i++){
    printf("*(p+%d) : ",i);
    scanf("%d",(p+i));
  }
  
  printf("\n\n Impressão de valores para o vetor vet após leitura com ponteiro: \n");
  //impressão do vetor de forma tradicional
  for(int i=0;i<5;i++){
    printf("vet[%d] = %d\n",i,vet[i]);
  }
  
  printf("\n\n Impressão de valores para o vetor usando ponteiro: \n");
  //impressão do vetor usando ponteiro
  for(int i=0;i<5;i++){
    printf("*(p+%d) = %d \n",i,*(p+i));
  }
  
  return 0;
}