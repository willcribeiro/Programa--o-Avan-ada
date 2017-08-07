//Continuação da aula de Ponteiros.   04/08/17

#include <stdio.h>

/*void troca(int *a, int *b) //Criado um ponteiro para apontar qual o conteudo que está guardado no endereço deles
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

void ordena( int *a, int*b, int *c){
    int tmp;
    if(*a>*b){
        troca(a,b);
    }
    if(*a>*c){
        troca(a,c);
    }
    if(*b>*c){
        troca(b,c);
    }
}
int main(void)
{
    int a,b,c;
    a =4; b = 3; c = 2;

    ordena(&a,&b,&c);
    printf("a, b, c = %d,%d,%d\n", a,b,c);

    return 0;
}*/


int main(void){
    int y[8];
    int x,i;
    int *px;
    x = 3;

    for(i=0; i<8; i++){
        y[i] = i+1;
    }

    for(i=0;i<8;i++){
        printf("%d", y[i]);
    }
    printf("\n");

    px = y; // or px = &y[0]

    printf("%p\n",y);
    printf("y[0] = %d\n" , y[0]);
    printf("y[0] = %d\n", *px);

    printf("%p\n",px);
    px = px + 1;
    printf("%p\n",px);
    printf("y[0] = %d\n", *px);
    px = px - 1;
    printf("%p\n", px);
    printf("*px = %d\n",*px);

    long *pz;

    pz = y;
    printf("pz = %p\n",pz);
    printf("*pz = %d\n" , *pz);
    pz = pz + 1;
    printf("pz = %p\n",pz);
    printf("*pz = %d\n", *pz);



    // px aponta para x
    px = &x;

    printf("x = %d\n" , *px);
    return 0;

}




















