#include <stdio.h>

#define LIMIARCRITICO 38
//Difine subistitue o simbolo , neste caso ENTRADA,  por uma expressão, como o 0.  Não são variaveis
#define ENTRADA 0
#define IMPRESSAO 1
#define quad(x) (x)*(x)

struct alo{
    int x;
    int y;
    float z;
};

int main(int argc, char *argv[])
{
    int x,y;

    struct alo teste;
    teste.x =4;
    teste.y = 5;
    teste.z = 8.7;

    //sizeof mede quantos bits tem a variavel

    printf("sizeof teste = %d\n",sizeof(teste));
    /*Operadores lógicos exatamente iguais os de C++
     *
    */

    //Etudo de 'if' e 'else'
    x=0;
    if(x==0){
        printf("x = 0\n");
    }
    else if (x==1){
        printf("x =1\n");
    }
    else{
        printf("x eh diferente \n");
    }
    // Estudo dos define
    y = 0;
    printf("entre com o valor para o quadrado \n");
    scanf("%d",&y);
    printf("quad(y) = %d\n",quad(y));

    //Estudo de 'Switch'
    switch(x){
      case ENTRADA: //case 0:
        printf("Digitou 1\n");
        break;
      case IMPRESSAO: //case 1:
        printf("Digitou 2\n");
        break;
    }

    return 0;
}
