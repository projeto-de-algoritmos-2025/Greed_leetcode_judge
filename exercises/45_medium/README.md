# [45. Jump Game II](https://leetcode.com/problems/jump-game-ii/description/)

O problema requer encontrar o número mínimo de saltos para alcançar o último índice de um array, dado que cada elemento do array indica o máximo de posições que você pode saltar para frente a partir desse índice. Para resolver este problema, usamos algoritmos ambiciosos.

# Lógica da Solução 

A cada posição do array, calculamos o ponto mais distante que conseguimos alcançar (o salto mais longo possível). Mantemos uma janela de alcance atual, e sempre que chegamos ao final dessa janela, contamos um salto e expandimos a janela para o ponto mais distante que conseguimos até então. Repetimos esse processo até alcançar (ou ultrapassar) o último índice.

# Submissão

![alt text](/assets/45_submit.png)

# [Código](./jump_Game_II.cpp)
