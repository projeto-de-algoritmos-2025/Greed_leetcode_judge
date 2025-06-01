// Autor: Leonardo Fernandes - 200067036
// Leetcode Hard :: 630. Couse Schedule III
// https://leetcode.com/problems/course-schedule-iii/description/

#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        // Ordenar os cursos pelo lastday
        sort(courses.begin(), courses.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        priority_queue<int> max_heap; // Armazena as durações dos cursos selecionados
        int tempo_atual = 0;

        for (const auto& curso : courses) {
            int duration = curso[0];
            int lastday = curso[1];

            // Se o curso pode ser concluído dentro do prazo
            if (tempo_atual + duration <= lastday) {
                max_heap.push(duration);
                tempo_atual += duration;
            }
            // Se não puder, verifica se podemos substituir um curso mais longo
            else if (!max_heap.empty() && max_heap.top() > duration) {
                tempo_atual -= max_heap.top(); // Remove o curso mais longo
                max_heap.pop();
                tempo_atual += duration;     // Adiciona o curso atual
                max_heap.push(duration);
            }
        }

        return max_heap.size();
    }
};