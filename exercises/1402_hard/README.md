# [1402. Reducing Dishes](https://leetcode.com/problems/reducing-dishes/description/)

Para resolver este problema, podemos enxergá-lo como uma variação do problema Knapsack, onde o objetivo é maximizar a soma da satisfação dos pratos multiplicada pelo tempo em que são preparados. Cada prato pode ser incluído ou não, e a ordem de preparo influencia o valor final, pois o multiplicador de tempo aumenta a cada prato escolhido.

# Lógica da Solução 

O algoritmo usa programação dinâmica para decidir, para cada prato e tempo atual, se vale mais a pena incluir o prato naquele momento (incrementando o tempo e somando a satisfação ponderada) ou pular o prato. Essa decisão é armazenada em uma tabela dp, que armazena a melhor satisfação possível para cada estado (índice do prato e tempo).

Como a satisfação depende da ordem, a solução considera todos os arranjos possíveis de escolha, garantindo o valor máximo da soma ponderada.

# Submissão

![alt text](/assets/1402_submit.png)

# [Código](./reducing_Dishes.cpp)