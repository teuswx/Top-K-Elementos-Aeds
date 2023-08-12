#include "Heap.hpp"

// Insere uma string para contar sua ocorrência
void Heap::insert(const string &value) {
    map[value]++;
}

// Constrói a min heap baseada nas contagens das strings
void Heap::buildHeap() {
    int cont = 0;
    for (auto pair = map.begin(); pair != map.end();) {
        heap.push({pair->second, pair->first});
        auto aux = pair;
        pair++;
        map.erase(aux);
        cont++;
        if(cont == 20){
        break;
        }
    }
}

void Heap::comparaTopItens(){

    for(auto &pair : map){
         auto temp = heap.top();
        if(pair.second > heap.top().first){
           
            heap.pop();
            heap.push({pair.second, pair.first});
        }
    }
}

void Heap::printHeap() {

    vector<pair<int, string>> tempVector;

    while (!heap.empty()) {
        tempVector.push_back(heap.top());
        heap.pop();
    }
    int k = 0;
    for (int i = tempVector.size() - 1; i >= 0; --i) {
        cout << ++k << "-" << tempVector[i].second << " (" << tempVector[i].first << " ocorrencias)" << std::endl;
    }
}
