#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxSatisfaction(std::vector<int>& satisfaction) {
        std::sort(satisfaction.begin(), satisfaction.end(), std::greater<int>());
        int max_sum = 0;
        int current_sum = 0;
        for (int s : satisfaction) {
            current_sum += s;
            if (current_sum > 0) {
                max_sum += current_sum;
            } else {
                break;
            }
        }
        return max_sum;
    }
};

// Função principal para testar a classe Solution
// int main() {
//     Solution sol; // Cria uma instância da classe Solution

//     // Define três vetores de exemplo com níveis de satisfação
//     std::vector<int> ex1 = {-1, -8, 0, 5, -9}; // Deve resultar em 14
//     std::vector<int> ex2 = {4, 3, 2};          // Deve resultar em 20
//     std::vector<int> ex3 = {-1, -4, -5};       // Deve resultar em 0

//     // Imprime os resultados das chamadas ao método maxSatisfaction
//     std::cout << sol.maxSatisfaction(ex1) << std::endl;
//     std::cout << sol.maxSatisfaction(ex2) << std::endl;
//     std::cout << sol.maxSatisfaction(ex3) << std::endl;

//     return 0; // Retorna 0 indicando execução bem-sucedida
// }