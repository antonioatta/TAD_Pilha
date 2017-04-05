#include <stdio.h>
#include <stdlib.h>
#include "TAD_Pilha.h"
#define TAM_PILHAS 20

int main()
{
    TAD_PILHA x, y;
    int i, valor;

    if ((!init_TADPilha(&x, TAM_PILHAS)) || (!init_TADPilha(&y, TAM_PILHAS))) {
        printf("Erro: falha grave inicializalcao das estruturas de pilha!\n");
        exit(1);
    }

    for (i=0; i<TAM_PILHAS; i++) push_TADPilha(&x, i);

    for (i=TAM_PILHAS-1; i>=0; i--) push_TADPilha(&y, i);

    printf("Conteudo da pilha X (do topo para a base):\n");
    while (pop_TADPilha(&x, &valor)) printf("%d\n", valor);

    printf("Conteudo da pilha y (do topo para a base):\n");
    while (pop_TADPilha(&y, &valor)) printf("%d\n", valor);

    free_TADPilha(&x);
    free_TADPilha(&y);

    return 0;
}
