> Status Development: finished :heavy_check_mark:

# O Labirinto Recorrente

## Objetivo 🎯

O desafio consiste em identificar os k itens mais valiosos contidos nos arquivos da pasta "dataset". Para isso, adota-se uma estratégia que envolve o uso de tabelas de hash para registrar a frequência de todos os itens e uma estrutura de heap para gerenciar uma lista dos k itens de maior valor. A abordagem de tabelas de hash permite contabilizar eficientemente a frequência dos itens, otimizando as operações de busca. Enquanto isso, a estrutura de heap, seja min heap ou max heap, assegura a constante manutenção dos k itens mais valiosos, possibilitando a substituição de elementos menos valiosos por aqueles de maior valor à medida que são encontrados. 

## Lógica :bulb:

Primeiramente o programa lê os dois arquivos "DomCasmurro.txt" e "Semana_Machado_Assis.txt" 