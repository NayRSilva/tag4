Grafos 2019/02

tentativa1

Condições:

Matérias do mesmo semestre não podem se chocar.

Isso nos deixa com um grafo composto por cliques maximais disjunto. Ou seja, cada semestre é um caminho disjunto no grafo, podendo ser lidos separadamente

O algoritmo utilizará principalmente um algoritmo força bruta para encontrar, para cada clique, os horarios utilizados.

Ideia:

1- O algoritmo Recebe a lista de materias
2- Vertices ligados por arestas nao podem ter as mesmas cores
3- Fornece uma cor diferente para cada vertice de matéria.


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


## Imagem 
### Graphviz
#### Grafo inicial
Gerada ao executar o código pela função criaDotMaterias() no arquivo constuction.cpp / construction.h
preenche o arquivo graphviz.dot com as diretrizes para a geração da image
```
	$ dot -Tpng graphviz.dot -o imagem.png	
```
diretório/arquivo saída
```
	../coloring/imagem.png
```

#Condiçoes para conflito de horario

Não pode haver a mesma materia duas vezes no mesmo dia
Não pode haver a mesma materia dois dias seguidos

