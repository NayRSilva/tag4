

#ifndef _MAT_CPP_
#define _MAT_CPP_
#include <string>
#include <vector>

using namespace std;

class Materia {
  public:
    int numero;
    string nome;
    vector<string> escolas;
    
  Materia(int _num, string _nome) {
    numero = _num;
    nome = _nome;
  }
};

#endif /*_MAT_CPP_*/