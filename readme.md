> Status Development: finished :heavy_check_mark:

# O Labirinto Recorrente

## Objetivo 🎯

O desafio consiste em identificar os k itens mais valiosos contidos nos arquivos da pasta "dataset". Para isso, adota-se uma estratégia que envolve o uso de tabelas de hash para registrar a frequência de todos os itens e uma estrutura de heap para gerenciar uma lista dos k itens de maior valor. A abordagem de tabelas de hash permite contabilizar eficientemente a frequência dos itens, otimizando as operações de busca. Enquanto isso, a estrutura de heap, seja min heap ou max heap, assegura a constante manutenção dos k itens mais valiosos, possibilitando a substituição de elementos menos valiosos por aqueles de maior valor à medida que são encontrados. 

## Lógica :bulb:

Primeiramente o programa inicia o método "lerArquivo" da classe "Algoritmo.cpp" onde os arquivos "DomCasmurro.txt" e "Semana_Machado_Assis.txt" são lidos. Para realizar a padronização das palavras, utilizamos as seguintes funções "trasnform", "tolower", "remove_if" e "ispunct" da biblioteca padrão do c++ "iostream", "string" e "algorothm".

* **Transform**: está definida na biblioteca "algorithm" que é utilizada para aplicar uma transformação em cada elemento de uma sequência.
* **Tolower**: está definida na biblioteca "cctype" e é utilizada para converter cada caractere para minusculo
* **remove_if e ::ispunct**; são utilizadas em conjunto para remover caracteres que são considerados pontuação.

 Depois o programa realiza a inserção de cada elemento string no método "insert" da classe "heap.cpp"já padronizado com as letras minusculas e sem caracteres considerados pontuação. Os elementos foram inseridos em uma hash utilizando a biblioteca "unordered_map" na variável "map" permitindo o armazenamento dos memos utilizando pares chave-valor, onde cada chave é única e associada a um valor, aproveitando também para realizar a contagem da quantidade de elementos repetidos.

 Para dar inicio a construção da min heap utiliza-se o método "iniciandoHeap" que percorre o mapa e insere pares (contagem, string) na min heap. Após inserção, o par correspondente é removido do map. Esse processo é repetido até que 20 pares tenham sido inseridos na heap, ou até que o mapa esteja vazio.
 
 O método "comparaTopItens" compara as strings contidas no map com as contagens das strings no topo da min heap. Se a contagem no map for maior do que a contagem no topo da heap, o topo da heap é removido e o novo par é inserido na heap.

O método "printHeap" imprime os elementos da min heap. Ele cria uma cópia temporária da heap chamada tempHeap e, em seguida, itera sobre essa heap temporária para imprimir os pares na ordem crescente das contagens. Cada par é impresso com seu índice, a string e o número de ocorrências.

## Exemplo de execução :hammer:


## Conclusão :ballot_box_with_check:

Durante o desenvolvimento do projeto foi possível fazer o uso de estruturas de dados como a hash que serviu para contar a frequência dos itens e a heap auxiliando na na manutenção de uma lista dos k itens de maior valor.

Ao concluir o projeto, foi possível analisar e compreender a estrutura heap e como ela gerencia um conjunto de elementos, geralmente com a finalidade de manter o elemento de maior ou menor prioridade no topo da estrutura.

Essa experiência proporcionou um aprendizado valioso sobre técnicas de otimização de código, que podem ser aplicadas em projetos futuros.
## Compilação e Execução :electric_plug:

O programa foi feito de acordo com a proposta e possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Portanto, temos as seguintes diretrizes de execução:
| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |

