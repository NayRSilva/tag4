Grafos 2019/02

tentativa1

Condições:

Matérias do mesmo semestre não podem se chocar.

Isso nos deixa com um grafo composto por cliques maximais disjunto. Ou seja, cada semestre é um caminho disjunto no grafo, podendo ser lidos separadamente

O algoritmo utilizará principalmente um algoritmo força bruta para encontrar, para cada clique, os horarios utilizados.

Ideia:

1- O algoritmo procura os vertices de maiores graus.
2- Ele pega o vertice de maior grau e colore seus vizinhos
3- Vertices ligados por arestas nao podem ter as mesmas cores


Considerando os creditos por materias:

Na UnB consideraremos que uma materia pode ter 2 creditos(2 horas aulas/semana), 4 creditos(4h/aula por semana), 6 creditos(6 horas/aula semana) para esse exercicio.

Horarios validos:

horas /Seg / ter/ quar/ qui / sex
8-10    1   5    8      13      17
10-12   2   6    10     14      18
14-16   3   7    11     15      19
16-18   4   8    12     16      20
Dessa forma segue o algoritmo:

Input: Grafo de cursos conflitantes: O cursos sao os vertices do grafo e as arestas ligam cursos que nao podem estar no mesmo horario. Nesse caso, cursos do mesmo semestre.

Exemplo: Calculo, ISC, APC, Infosoc

Passo 1: Montar o grafo.

Passo 2: Calcular o grau dos vertices dos grafos