#include <stdio.h>

int main(void) {
  
  int x=10; //declaração e inicialização da variável x do tipo int
  int *px = &x; //declaração e inicialização do ponteiro *px do tipo int que armazena o endereço de x.
  int **ppx = &px; //declaração e inicialização do PONTEIRO PARA PONTEIRO **ppx do tipo int que armazena o endereço do ponteiro px.
  float y=5.9; //declaração e inicialização da variável y do tipo float
  float *py=&y; //declaração e inicialização do ponteiro *py do tipo float que armazena o endereço de y
  float **ppy=&py; //declaração e inicialização do PONTEIRO PARA PONTEIRO **ppy do tipo float que armazena o endereço do ponteiro py.
  
  printf("x = %d\n", x); //valor armazenado em x
  printf("&x = %p\n", &x); //endereço de x em hexadecimal
  printf("px = %p\n", px); //valor armazenado em px que é o endereço de x, em hexadecimal
  printf("*px = %d\n", *px); //valor apontado pelo ponteiro *px
  
  printf("&px = %p\n", &px); //endereço de px, em hexadecimal
  printf("*&px = %p\n", *(&px)); //valor armazenado em &ppx (o endereço de px)
  printf("ppx = %p\n", ppx); //valor armazenado em ppx é o endereço de px, em hexadecimal
  printf("**ppx = %d\n", **ppx); //valor apontado pelo ponteiro **ppx, que é o mesmo valor apontado pelo ponteiro *px, que é o valor armazenado em x
  printf("&ppx = %p\n", &ppx); //endereço de ppx, em hexadecimal
  printf("*&ppx = %p\n", *(&ppx)); //valor armazenado em &ppx (o endereço de ppx)
  
  printf("\n\n");
  
  printf("y = %0.1f\n", y); //valor armazenado em y
  printf("&y = %p\n", &y); //endereço de y em hexadecimal
  printf("py = %p\n", py); //valor armazenado em py que é o endereço de y, em hexadecimal
  printf("*py = %0.1f\n", *py); //valor apontado pelo ponteiro *py
  
  printf("&py = %p\n", &py); //endereço de py, em hexadecimal
  printf("ppy = %p\n", ppy); //valor armazenado em ppy que é o endereço de py, em hexadecimal
  printf("**ppy = %0.1f\n", **ppy); //valor apontado pelo ponteiro **ppy, que é o mesmo valor apontado pelo ponteiro *py, que é o valor armazenado em y
  printf("&ppy = %p\n", &ppy); //endereço de ppy, em hexadecimal

  printf("\n\n");
  
  //OPERAÇÕES ARITMÉTICAS COM OS ENDEREÇOS ARMAZENADOS PELOS PONTEIROS
  //Somente!!! as operações aritméticas de soma e subtração com os endereços armazenados pelos ponteiros são permitidas.
  
  printf("py+1 = %p\n", py+1); //soma +1 no endereço armazenado no  ponteiro py, em hexadecimal. Um ponteiro de inteiro tem 4 bytes, logo, o endereço do próximo inteiro é 4 bytes a frente.
  printf("px-1 = %p\n", px-1); //subtrai 1 no endereço armazenado no  ponteiro px, em hexadecimal. Um ponteiro de inteiro tem 4 bytes, logo, subtrai 4 bytes do endereço de x.

  printf("\n\n");
  
  //OPERAÇÕES ARITMÉTICAS COM OS VALORES APONTADOS PELOS PONTEIROS
  printf("(*px)+1 = %d\n", (*px)+1); //incrementa em 1 o valor apontado pelo ponteiro *px, que é o valor armazenado em x. É análogo a fazer x++
  printf("(*py)-1 = %0.1f\n", (*py)-1); //subtrai 1 do valor apontado pelo ponteiro *py, que é o valor armazenado em y. É análogo a fazer y--
  printf("*px = (*px) * 10 = %d\n", (*px) * 10); //multiplica por 10 o valor apontado pelo ponteiro *px, que é o valor armazenado em x. É análogo a fazer x = x * 10.

  printf("\n\n");
  return 0;
}