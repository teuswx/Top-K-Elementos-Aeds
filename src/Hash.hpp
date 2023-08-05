#ifndef _HASH_HPP
#define _HASH_HPP
#include <iostream>
#define TAM 31
using namespace std;

class Hash
{
private:
    int tabela[TAM];

public:
    void inicializarTabela();
    void incerir(int valor);
    int busca(int chave);
    int funcaoHash(int chave);
    void imprimir();
};

#endif