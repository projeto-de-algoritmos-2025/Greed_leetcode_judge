# [630. Course Schedule III](https://leetcode.com/problems/course-schedule-iii/description/)

O problema requer em calcular o numero ótimo de cursos que podem ser executados seguindo a regra imposta. O curso só pode ser executado se ele for finalizado até o seu lastday. A estrutura que é inserida na função é um `courses[i] = [duration, lastday]`.

# Lógica da Solução 

Utilizaremos algo muito parecido com Interval Scheduling ensinado em sala de aula. Primeiro é necessário ordenar os cursos pela valor do lastday ou cursos que tem um prazo mais apertado. Logo após utilizaremos uma max_heap para organizar a estrutura dos cursos. E ao final a quantidade de cursos dentro da heap é o numero otimo que procuramos

# Submissão

![alt text](/assets/630_submit.png)

# [Código](./630_Course_Schedule_3.cpp)
