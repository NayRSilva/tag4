#include <string>
#include <vector>
#include <fstream>
#include "materia.cpp"

using namespace std;

typedef vector<int> Escola;
typedef pair<int, int> Adj;

void criaGrafo(const string& fileName, vector<Materia>& materias);