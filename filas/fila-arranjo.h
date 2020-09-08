#include "fila.h"
class FilaArranjo : public Fila
{
    public:
        FilaArranjo();
        void Enfileira(TipoItem item);
        TipoItem Desenfileira();
        void Limpa();
    private:
        int frente;
        int tras;
        static const int MAXTAM = 8;
        TipoItem itens[MAXTAM];
};