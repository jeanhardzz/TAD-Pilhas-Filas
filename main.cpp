#include <iostream>

#include "tipoitem.h"
#include "pilha.h"
#include "pilha-arranjo.h"
#include "pilha-encadeada.h"

main(){
    PilhaArranjo p;
    TipoItem x;
    for(int i=1;i<=5;i++){
        x.SetChave(i);    
        p.Empilha(x);
    }
    std::cout<<p.GetTamanho();
    
}