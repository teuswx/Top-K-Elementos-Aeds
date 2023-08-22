#ifndef _ALGORITMO_HPP
#define _ALGORITMO_HPP
#include "Heap.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <unordered_map>
#define N 2
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
    bool removePontuacao(char palavra);
};
#endif
