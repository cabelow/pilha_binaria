#include <stdio.h>
#include <stdlib.h>
#include"pilhaBin.h"

int main()
{
    int num;
    printf("pilha binaria!\n");

    PilhaBin *p;
    no * nTop;

    p = criaPilha();

    printf("\n dig num: ");
    scanf("%d", &num);

    divBin(num, p);

    //nTop = p->top;
    //mostra(p->top);
    mustra(p);





    return 0;
}
