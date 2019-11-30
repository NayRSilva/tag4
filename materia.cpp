

#ifndef _MAT_CPP_
#define _MAT_CPP_
#include <string>
#include <vector>

using namespace std;

class Materia {
  public:
    int numero;
    string nome;
    int credito;
    vector<string> conflitos;
    
  Materia(int _num, string _nome, int _credito) {
    numero = _num;
    nome = _nome;
    credito = _credito;
  }
};

#endif /*_MAT_CPP_*/