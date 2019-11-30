#include <string>
#include <vector>
#include <fstream>
#include "materia.cpp"

using namespace std;

typedef vector<int> Escola;
typedef pair<int, int> Adj;

void criaMateria(const string& fileName, vector<Materia>& materias);
void imprimeGrafo(vector<Materia>& materias);
void colorMateria(vector<Materia>& materias,vector<int>& CoresMaterias);
void criaDotMaterias (vector<Materia> materias);

class Horario {
  public:
    int hora;
    string dia;
    int credito;
    vector<string> conflitos;
    
  Horario(int _hora, string _dia, int _credito) {
    hora = _hora;
    dia = _dia;
    credito = _credito;
  }
};