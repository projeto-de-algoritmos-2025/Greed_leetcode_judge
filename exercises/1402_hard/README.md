# [1402. Reducing Dishes](https://leetcode.com/problems/reducing-dishes/description/)

Para resolver este problema com um algoritmo ambicioso, a ideia é que, para maximizar o somatório dos coeficientes de tempo de satisfação, devemos ordenar as satisfações em ordem decrescente e somar os pratos de forma que o impacto das satisfações maiores seja multiplicado por tempos maiores.

# Lógica da Solução 

O algoritmo ordena as satisfações em ordem decrescente para dar prioridade aos pratos com maior valor. Em seguida, soma progressivamente essas satisfações, acumulando apenas enquanto essa soma for positiva. Isso garante que incluir o próximo prato aumentará a satisfação total ponderada pelo tempo. Quando a soma acumulada se torna zero ou negativa, parar significa que adicionar mais pratos só reduziria o resultado. O valor final acumulado é, então, o máximo somatório possível da satisfação multiplicada pelo tempo.

# Submissão

![alt text](/assets/1402_submit.png)

# [Código](./reducing_Dishes.cpp)