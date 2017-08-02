// ESTUDO DE PONTEIRO
// AULA 02/08/17
#include <stdio.h>
/*
void troca(int a, int b)
{
   int tmp;
   printf("troca: a = %d; b = %d\n",a,b);
   tmp = a; a = b; b = tmp;
   printf("troca: a = %d; b = %d\n",a,b);
}
 int main (void){
     int a,b;
     a = 3; b=4;
     printf("main: a = %d; b = %d\n",a,b);
     troca(a,b);
     printf("main: a = %d; b = %d\n",a,b);
     return 0;
 }
*/

 // Um ponteiro é declado por meio de um '*' na frente da sua variavel
 // tipo *nome ->  Ponteiro de tipo 1
 //  Ex:   int *pi; -> Pi é um ponteiro para o tipo int


/* |        int x; int *px;
 * |        &x : endereço de x
 * |        *px : conteudo de px
 * |
*/

//Refazendo o código usando ponteiro,  teremos  :


 void troca(int *a, int *b) //Criado um ponteiro para apontar qual o conteudo que está guardado no endereço deles
 {
    int tmp;
    printf("troca: a = %d; b = %d\n",*a,*b);
    //tmp recebe o CONTEUDO de 'a'
    tmp = *a;
    //CONTEUDO de 'a' recebe o CONTEUDO  de 'b'
    *a = *b;
    //CONTEUDO de 'b' recebe tmp
    *b = tmp;
    printf("troca: a = %d; b = %d\n",*a,*b);
 }
  int main (void){
      int a,b;
      a = 3; b=4;
      //Forma de imprimir o ENDEREÇO da variável, usando o %p  e &variavel
      printf("endereco de a: %p\n" ,&a);
      printf("endereco de b: %p\n" ,&b);

      printf("main: a = %d; b = %d\n",a,b);
      troca(&a,&b); // Está enviando para a função o endereço, onde a variavel está armazenada
      printf("main: a = %d; b = %d\n",a,b);
      return 0;
  }

  /*
   *  Atividade :
   * ordena ( , , );
   * main(){
   * int a=4, b=3,c=2;
   * ordena(&a,&b,&b);
   * 2,3,4
   *
*/
