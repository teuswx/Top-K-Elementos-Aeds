#ifndef _ALGORITMO_HPP
#define _ALGORITMO_HPP
#include "Heap.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Algoritmo
{
private:
    vector<vector<string>> pacote;
public:
    Algoritmo();
    void lerArquivo();
    bool stopwords (string palavra);
    void separastopwords();
    string removePontuacao(string palavra);
    void contagem();
};
#endif
