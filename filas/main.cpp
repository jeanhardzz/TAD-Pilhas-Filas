#include <iostream>

#include "tipoitem.h"
#include "fila.h"
#include "fila-arranjo.h"
#include "fila-encadeada.h"

main(){
    FilaArranjo p;
    TipoItem x;
    for(int i=1;i<=5;i++){
        x.SetChave(i);    
        p.Enfileira(x);
    }
    std::cout<<p.GetTamanho();
    
}