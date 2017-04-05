#ifndef TAD_PILHA_H_INCLUDED
#define TAD_PILHA_H_INCLUDED

typedef
struct {
    int TAM;
    int topo;
    int *pilha;
} TAD_PILHA;

/* Protótipos das funcoes  */

int init_TADPilha(TAD_PILHA *, int);
int push_TADPilha(TAD_PILHA *, int);
int pop_TADPilha(TAD_PILHA *, int *);
int free_TADPilha(TAD_PILHA *);

#endif // TAD_PILHA_H_INCLUDED
