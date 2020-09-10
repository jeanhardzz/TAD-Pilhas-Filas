#ifndef PILHA_ARRANJO
#define PILHA_ARRANJO

#include "pilha.h"
#include "tipoitem.h"

class PilhaArranjo : public Pilha{
    public:
        PilhaArranjo();
        void Empilha(TipoItem item);
        TipoItem Desempilha();
        void Limpa();
    private:
        int topo;
        static const int MAXTAM = 100;
        TipoItem itens[MAXTAM];
};

#endif