#include <iostream>

#include "tipoitem.h"
#include "fila.h"
#include "fila-arranjo.h"
#include "fila-encadeada.h"
#include "pilha-arranjo.h"

int main()
{
    FilaArranjo F;
    PilhaArranjo P;
    TipoItem x;
    int i;
    int n=6;
    int v[6];
    v[0]=14;
    v[1]=68;
    v[2]=67;
    v[3]=57;
    v[4]=47;
    v[5]=95;
    for(i=0; i<n; i++){
        x.SetChave(v[i]);
        F.Enfileira(x);
    }
    for(i=0; i<n/2; i++){
        x = F.Desenfileira();
        F.Enfileira(x);
    }
    for(i=n/2; i<n; i++){
        x = F.Desenfileira();
        P.Empilha(x);
    }
    while(!P.Vazia()){
        x=P.Desempilha();
        F.Enfileira(x);
    }
    while(!F.Vazia()){
        x=F.Desenfileira();
        x.Imprime();
    }
    return 0;
}