#include <stdio.h>
//Questão de prova
void printchar(unsigned char x){
    unsigned char count;
    for(count = 0; count<8; count++){
       printf("%d",(x & 0x80)/128);
       x = x << 1;
    }
}

void printint(int x){
    unsigned char *pu;  //Um int anda de 4 em 4 byts , usando o unsigned podemos andar de 1 em 1
    int i;
    pu = (unsigned char *)&x;
    for(i =0;i<4;i++){
        printf("byte %d: %d -- ",i,*pu);
        printchar(*pu);
        printf("\n");
        pu++;
    }
}

int main(void)
{
    int x;

    printf("tamanho do inteiro = %d\n", sizeof(int));
   // x = rand();
    x = 3;
    printf("x = %d\n",x);
    printint(x);
    printf("\n");
    x = 256;
    printf("x = %d\n",x);
    printint(x);
    return 0;
}
