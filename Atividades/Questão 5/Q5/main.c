#include <stdio.h>

int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);  // VALOR = 20

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp); // temp  irá exibir 29.0

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux); // Irá exibir a pozição 0 do char, ondeestá armazenado o P

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux); //  Irá exibir a pozição 4 do char, ondeestá armazenado o e

  /* (e) */
  p3 = nome;
  printf("%c \n", *p3); //  Irá exibir P,  pq ?

  /* (f) */
  p3 = p3 + 4;
  printf("%c \n", *p3); // Irá exibir o e,  pois é a posição 0 mais 4

  /* (g) */
  p3--;
  printf("%c \n", *p3); // Irá exibir o t

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade); // Irá exibir o 0 do vertor,  o numero 31

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade); // Irá exibir 45,  pois ele pegou a posição 0 e somou com 1,  ficando 1. E apontou para a informação gravada em 1

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade); // Irá exibir 27

  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade); // Irá exibir 31. está calculando : 3 -2 =1

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);  //Será exibido o valor 45.  3-1 = 2

  /* (n) */
  p5++;
  printf("%d \n", *p5); // Irá mostrar o valor 27
  return(0);
}
