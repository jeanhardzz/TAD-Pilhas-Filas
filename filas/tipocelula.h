#ifndef TIPOCELULA
#define TIPOCELULA

#include "tipoitem.h"
class TipoCelula{
    public:
        TipoCelula();
    private:
        TipoItem item;
        TipoCelula *prox;
    
    friend class FilaEncadeada;
};

#endif