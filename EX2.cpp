#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
     string nome;
     double n1;
     double n2;
     double n3;
     float media;
 cout << fixed << setprecision(1);
 cout << "Esse programa faz a media de um aluno" << endl;
 cout << "Digite o nome do aluno: " << endl;
 cin >> nome;
 cout << "Digite a primeira nota: " << endl;
 cin >> n1;
 cout << "Digite a segunda nota: " << endl;
 cin >> n2;
 cout << "Digite a terceira nota: " << endl;
 cin >> n3;

 media = (n1+n2+n3) /3;

 cout << "Aluno " << nome << " possui media " << media;

 return 0;

}