#include "Hash.hpp"

void Hash::inicializarTabela(){
    int i;

    for(i = 0; i< TAM; i++){
        tabela[i] = 0;
    }
}

int Hash::funcaoHash(int chave){
    return chave % TAM;
}

void Hash::incerir(int valor){
    inicializarTabela();

    int id = funcaoHash(valor);

    while(tabela[id] != 0){
        id = funcaoHash(id + 1);
    }

    tabela[id] = valor;
}

int Hash::busca(int chave){
    int id = funcaoHash(chave);

    while(tabela[id] != 0){
        if(tabela[id] == chave){
            return tabela[id];
        }else{
            id = funcaoHash(id+1);
        }
    }
}

void Hash::imprimir(){
    int i;
    for(i = 0; i < TAM; i++){
        
        cout << "indice " << i << " valor " << tabela[i];
    }
}