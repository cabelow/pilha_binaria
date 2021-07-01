#include<stdlib.h>
#include"pilhaBin.h"

struct No {
    int valor;
    no * prox;
};

struct pilha {
    no *top;
    int tamanho;
};

PilhaBin * criaPilha(){
    PilhaBin *p = (PilhaBin*) malloc(sizeof(PilhaBin));
    p->top = NULL;
    p->tamanho = 0;
    return p;
}

no * criaNo(int valor){
    no *n = (no*) malloc(sizeof(no));
    n->valor = valor;
    n->prox = NULL;
    return n;
}

void add(PilhaBin *p, int valor){
    no *n = criaNo(valor);
    //testa se é primeiro
    if(p->top == NULL){
        p->top = n;
        p->tamanho++;
    } else {
        n->prox = p->top;
        p->top = n;
        p->tamanho++;
    }
}

void mostra(no *n){
    if(n != NULL){
        printf("%d", n->valor);
        mostra(n->prox);
    }
}

void mustra(PilhaBin *p){
    no *n;
    for(n = p->top; n!=NULL; n=n->prox){
        printf("%d", n->valor);
    }

}

void divBin(int num, PilhaBin *p){
    int resto;
    if(num != 0){
        resto = num%2;
        add(p, resto);
        //printf("%d", resto);
        divBin(num/2, p);
    }
}
