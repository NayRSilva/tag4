
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
    cout<<"Grafo base\n";
    vector<int> CoresMaterias;
  for(auto c: materias){
      cout<<"nome: "<< c.nome<<"\n"<< "conflitos ";
      for(unsigned int i =0; i< c.conflitos.size(); i++){
          cout<< c.conflitos[i]<< " ";
      }
      cout<< "\n";

  }
  criaDotMaterias(materias);


}