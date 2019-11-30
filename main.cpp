
// Bruno Sanguinetti Regadas de Barros (18/0046063)
// Nayara Silva Nayara Rossi Brito da Silva ()
// Unb, Brasília, DF, 2019


#include "construction.h"
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

#define NUM_PARES 69

using namespace std;

int main() {
    vector<Materia> materias;
    criaMateria("materias.txt", materias);

  cout << "Teste vetor materias" ;
  for (auto curso: materias) {
      if(curso.nome == "Calculo") cout<< curso.nome;
      //cout<<"\n nome "<< curso.nome<<"\n credito"<< curso.credito;
  }


}