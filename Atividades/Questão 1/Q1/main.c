#include <stdio.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;


// Determinar o valor das seguintes expreções :

   /*
    *   p == &i;        => O valor de P vai ser igual ao caminho de i
    *   *p - *q;        => Será a subitração dos valores armazenados nas variaveis p e q, -2
    *   **&p;           => Verá o valor que está armazenado na variavel p
    *   3 - *p/(*q) + 7;=> resultara em 3-3/5 + 7 = 10,  pois a fração 0,6 como  é inteiro,  será 0
    */

    return 0;
}
