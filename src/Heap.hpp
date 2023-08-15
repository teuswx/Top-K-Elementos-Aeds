#ifndef HEAP_HPP
#define HEAP_HPP
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;
class Heap {
private:
    unordered_map<string, int> map;
    priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>> heap;
public:

    void insert(const std::string &value);
    void iniciandoHeap();
    string getMostFrequent();
    void comparaTopItens();
    void printHeap();
};

#endif

