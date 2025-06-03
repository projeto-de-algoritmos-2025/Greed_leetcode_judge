# [45. Jump Game II](https://leetcode.com/problems/jump-game-ii/description/)

Técnica utilizada: Interval Scheduling (adaptada para cobertura mínima)
No problema, cada posição i no array define um intervalo [i, i + nums[i]] que representa o alcance possível ao pular a partir dessa posição.

Nosso objetivo é cobrir o intervalo [0, n-1] com o menor número de intervalos possíveis, ou seja, minimizar o número de saltos necessários para alcançar o fim.

# Lógica da Solução 

Interpretamos o problema como um caso de Interval Scheduling adaptado para cobertura mínima.Começamos cobrindo o índice 0.Em cada passo, selecionamos o intervalo que começa antes ou no ponto atual da cobertura e que alcança o ponto mais distante possível.Cada vez que estendemos a cobertura com um novo intervalo, contamos um salto.Repetimos até que a cobertura atinja ou ultrapasse o último índice.

# Submissão

![alt text](/assets/45_submit.png)

# [Código](./jump_Game_II.cpp)
