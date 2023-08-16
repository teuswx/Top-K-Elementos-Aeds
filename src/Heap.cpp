#include "Heap.hpp"

// Insere uma string para contar sua ocorrência
void Heap::insert(const string &value)
{
    map[value]++;
}

// Constrói a min heap baseada nas contagens das strings
void Heap::iniciandoHeap()
{
    int cont = 0;
    for (auto pair = map.begin(); pair != map.end();)
    {
        heap.push({pair->second, pair->first});
        auto aux = pair;
        pair++;
        map.erase(aux);
        cont++;
        if (cont == 20)
        {
            break;
        }
    }
}

void Heap::comparaTopItens()
{

    for (auto &pair : map)
    {
        auto temp = heap.top();
        if (pair.second > heap.top().first)
        {

            heap.pop();
            heap.push({pair.second, pair.first});
        }
    }
}

void Heap::printHeap()
{

    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> tempHeap = heap;

    
    while (!tempHeap.empty())
    {
        cout << " " << tempHeap.top().second << " (" << tempHeap.top().first << " occurrencias)" << std::endl;
        tempHeap.pop();
    }
}
