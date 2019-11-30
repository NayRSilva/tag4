#include <string>
#include <vector>
#include <regex>
#include <fstream>
#include <iostream>
#include "construction.h"

using namespace std;

void criaDotMaterias(vector<Materia> materias)
{
    ofstream myfile("graphviz.dot");
    if (myfile.is_open())
    {
        myfile << "graph G {\n";
        for (auto curso : materias)
        {
            for (unsigned int i = 0; i < curso.conflitos.size(); i++)
            {
                myfile << "       " << curso.nome;
                myfile << " -- ";
                myfile << curso.conflitos[i] << ";"
                       << "\n";
            }
            if (materias.size() == 0)
            {
                cout << "--";
            }
            cout << endl;
        }
    }
    else
        cout << "Unable to open file";
    myfile << "}";
    myfile.close();
}

// for (unsigned int i = 0; i < grafo.size(); i++) {
//     for (auto v : grafo[i]) {
//       myfile << "       " << nome[i];
//       myfile << " -> ";
//       myfile << nome[v] << ";" << "\n";
//     }
//     if (grafo[i].size() == 0) {
//         cout << "--";
//     }
// }

//Substitui um caractere por outro, usado para separar string
string replaceChar(string str, char ch1, char ch2)
{
    for (unsigned int i = 0; i < str.length(); ++i)
    {
        if (str[i] == ch1)
            str[i] = ch2;
    }

    return str;
}
//usado para separar string

vector<string> split(string s, char delim)
{
    vector<string> flds;
    if (!flds.empty())
    {
        flds.clear();
    }
    string work = s;
    string buf = "";
    unsigned int i = 0;
    while (i < work.length())
    {
        if (work[i] != delim)
        {
            buf += work[i];
        }
        else if (buf.length() > 0)
        {
            flds.push_back(buf);
            buf = "";
        }
        i++;
    }
    if (!buf.empty())
    {
        flds.push_back(buf);
    }
    return flds;
}
//cria vetor de materias com listas de materias vizinhas
void criaMateria(const string &fileName, vector<Materia> &materias)
{
    fstream fileStream(fileName);
    string buffer;
    if (!fileStream.is_open())
        return;

    while (getline(fileStream, buffer))
    { //Cria as materias sem as listas
        if (buffer.find("(") != string::npos)
        {
            int numero, credito;
            char nome[100];

            sscanf(buffer.c_str(), "(%d / %s / %d)", &numero, nome, &credito);

            materias.push_back(Materia(numero, nome, credito));
        }
        //insere as materias conflito na lista de conflitos
        if (buffer.find("[") != string::npos)
        {
            char teste[200];
            string delim1 = ":";
            string delim2 = "/";
            string token;
            vector<string> Steste;

            sscanf(buffer.c_str(), "[%s", teste);
            string teste2 = teste;

            teste2 = replaceChar(teste2, ':', ' ');
            teste2 = replaceChar(teste2, '/', ' ');
            Steste = split(teste2, ' '); //[Calc, Apc, Isc, F]

            string MateriaAtual = Steste[0];

            int i = 0;
            for (auto curso : materias)
            {
                if (curso.nome == MateriaAtual)
                {

                    for (unsigned int j = 1; j < Steste.size(); j++)
                    {
                        materias[i].conflitos.push_back(Steste[j]);
                    }
                }
                else
                    i++;
            }
        }
    }
}
void imprimeGrafo(vector<Materia> &materias)
{
    for (auto curso : materias)
    {
        cout << "NomeCurso: " << curso.nome;
        for (unsigned int i = 0; i < curso.conflitos.size(); i++)
        {
            cout << " " << curso.conflitos[i];
        }
    }
}

// void colorMateria(vector<Materia> &materias, vector<int> &CoresMaterias)
// {

//     for (auto curso : materias)
//     {//inicializa o vetor de cores nao iniciadas
//         for (unsigned int i = 0; i < materias.size(); i++)
//         {
//             //inicializando o vetor cores com unassigned
//             CoresMaterias[i] = -1;
//         }
//     }
// };