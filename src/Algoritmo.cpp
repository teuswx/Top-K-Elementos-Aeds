#include "Algoritmo.hpp"

Algoritmo::Algoritmo()
{
    pacote.resize(15);
    separastopwords();
}
void Algoritmo::lerArquivo()
{

    ifstream arquivo_entrada("dataset/DomCasmurro.txt");
    ifstream arquivo_entrada2("dataset/Semana_Machado_Assis.txt");

    if (!arquivo_entrada || !arquivo_entrada2)
    {
        throw "../main.cpp::lerTxt ---> Não foi possível abrir o arquivo de entrada";
    }

    string word;
    string word2;
    string word_aux;
    int i = 0;
    Heap h;

    while (arquivo_entrada >> word)
    {

        transform(word.begin(), word.end(), word.begin(), [](unsigned char c)
                  { return tolower(c); });
        if (stopwords(word) != true)
        {
            while(i < word.length()){
                char caractere = word[i];
                if(removePontuacao(caractere) != true){
                    word_aux += caractere;
                }
                i++;
            }
            i=0;
            
            if(word_aux != ""){
                h.insert(word_aux);
            }
            
            word_aux = "";
           
        }
    }           
    arquivo_entrada.close();
    word_aux = "";
    i = 0;            
    while (arquivo_entrada2 >> word2)
    {

        transform(word2.begin(), word2.end(), word2.begin(), [](unsigned char c)
                  { return tolower(c); });
        if (stopwords(word2) != true)
        {
            while(i < word2.length()){
                char caractere = word2[i];
                if(removePontuacao(caractere) != true){
                    word_aux += caractere;
                }
                i++;
            }
            i=0;
            
            if(word_aux != ""){
                h.insert(word_aux);
            }
            
            word_aux = "";
        }
    }

    arquivo_entrada2.close();
    arquivo_entrada.close();
    
    h.iniciandoHeap();
    h.comparaTopItens();
    h.printHeap();


}

bool Algoritmo::stopwords(string palavra)
{

    ifstream arq("dataset/stopwords.txt");
    string stopword;

    if (arq.is_open())
    {
        if (int(palavra.size()) == 1)
        {
            for (int i = 0; i < int(pacote[0].size()); i++)
            {
                if (palavra == pacote[0][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 2)
        {
            for (int i = 0; i < int(pacote[1].size()); i++)
            {
                if (palavra == pacote[1][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 3)
        {
            for (int i = 0; i < int(pacote[2].size()); i++)
            {
                if (palavra == pacote[2][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 4)
        {
            for (int i = 0; i < int(pacote[3].size()); i++)
            {
                if (palavra == pacote[3][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 5)
        {
            for (int i = 0; i < int(pacote[4].size()); i++)
            {
                if (palavra == pacote[4][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 6)
        {
            for (int i = 0; i < int(pacote[5].size()); i++)
            {
                if (palavra == pacote[5][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 7)
        {
            for (int i = 0; i < int(pacote[6].size()); i++)
            {
                if (palavra == pacote[6][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 8)
        {
            for (int i = 0; i < int(pacote[7].size()); i++)
            {
                if (palavra == pacote[7][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 9)
        {
            for (int i = 0; i < int(pacote[8].size()); i++)
            {
                if (palavra == pacote[8][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 10)
        {
            for (int i = 0; i < int(pacote[9].size()); i++)
            {
                if (palavra == pacote[9][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 11)
        {
            for (int i = 0; i < int(pacote[10].size()); i++)
            {
                if (palavra == pacote[10][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 12)
        {
            for (int i = 0; i < int(pacote[11].size()); i++)
            {
                if (palavra == pacote[11][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 13)
        {
            for (int i = 0; i < int(pacote[12].size()); i++)
            {
                if (palavra == pacote[12][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 14)
        {
            for (int i = 0; i < int(pacote[13].size()); i++)
            {
                if (palavra == pacote[13][i])
                {
                    return true;
                }
            }
            return false;
        }
        else if (int(palavra.size()) == 15)
        {
            for (int i = 0; i < int(pacote[14].size()); i++)
            {
                if (palavra == pacote[14][i])
                {
                    return true;
                }
            }
            return false;
        }
        else
        {
            return false;
        }
        arq.close();
    }
    else
    {
        cout << "Não foi possível abrir o arquivo." << endl;
        return false;
    }
    return false;
}

// função para separar as stopwords
void Algoritmo::separastopwords()
{

    ifstream arq("dataset/stopwords.txt");
    string stopword;

    if (arq.is_open())
    {

        while (getline(arq, stopword))
        {
            if (stopword.size() == 1)
            {
                pacote[0].push_back(stopword);
            }
            else if (stopword.size() == 2)
            {
                pacote[1].push_back(stopword);
            }
            else if (stopword.size() == 3)
            {
                pacote[2].push_back(stopword);
            }
            else if (stopword.size() == 4)
            {
                pacote[3].push_back(stopword);
            }
            else if (stopword.size() == 5)
            {
                pacote[4].push_back(stopword);
            }
            else if (stopword.size() == 6)
            {
                pacote[5].push_back(stopword);
            }
            else if (stopword.size() == 7)
            {
                pacote[6].push_back(stopword);
            }
            else if (stopword.size() == 8)
            {
                pacote[7].push_back(stopword);
            }
            else if (stopword.size() == 9)
            {
                pacote[8].push_back(stopword);
            }
            else if (stopword.size() == 10)
            {
                pacote[9].push_back(stopword);
            }
            else if (stopword.size() == 11)
            {
                pacote[10].push_back(stopword);
            }
            else if (stopword.size() == 12)
            {
                pacote[11].push_back(stopword);
            }
            else if (stopword.size() == 13)
            {
                pacote[12].push_back(stopword);
            }
            else if (stopword.size() == 14)
            {
                pacote[13].push_back(stopword);
            }
            else if (stopword.size() == 15)
            {
                pacote[14].push_back(stopword);
            }
        }
        arq.close();
    }
    else
    {
        cout << "Não foi possível abrir o arquivo." << endl;
    }
}


bool Algoritmo::removePontuacao(char caractere){
    ifstream pont("dataset/pontuacao.txt");

    char ctemp;

    while(pont >> ctemp){
        if(ctemp == caractere){
            return true;
        }
        
    }
    pont.close();
    return false;
}