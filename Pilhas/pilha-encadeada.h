#ifndef PILHA_ENCADEADA
#define PILHA_ENCADEADA

#include "pilha.h"
#include "tipocelula.h"
#include "tipoitem.h"

class PilhaEncadeada : public Pilha{
    public:
        PilhaEncadeada();
        virtual ~PilhaEncadeada();
        void Empilha(TipoItem item);
        TipoItem Desempilha();
        void Limpa();
    private:
        TipoCelula* topo;
};

#endif