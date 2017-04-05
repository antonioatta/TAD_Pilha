#include <stdlib.h>
#include "TAD_Pilha.h"


int init_TADPilha(TAD_PILHA *p, int tamanho) {

    int i;

    if (tamanho<=0) return 0;
    p->pilha=(int *)malloc(tamanho*sizeof(int));
    if (p->pilha==NULL) return 0;
    for (i=0; i<tamanho; i++) p->pilha[i]=0;    // acrescentada funcionalidade de pilha inicializada zerada
    p->TAM=tamanho;
    p->topo=-1;
    return 1;
}

int push_TADPilha(TAD_PILHA *p, int valor) {

    if (p->topo==p->TAM-1) return 0;    // Pilha cheia
    p->topo++;
    p->pilha[p->topo]=valor;
    return 1;
}

int pop_TADPilha(TAD_PILHA *p, int *pValor) {

    if (p->topo==-1) return 0;          // Pilha vazia
    *pValor=p->pilha[p->topo];
    p->topo--;
    return 1;
}

int free_TADPilha(TAD_PILHA *p) {

    if (p->pilha==NULL) return 0;       // pilha nao inicializada (alocada)
    free(p->pilha);
    return 1;
}
