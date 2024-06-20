#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
  string nome;
  double km;
  double min;
  float vm;
  
 cout << fixed << setprecision(1);
 cout << "Digite o seu nome: " << endl;
 cin >> nome;
 cout << "Digite qual foi a kilometragem percorrida: " << endl;
 cin >> km;
 cout << "Escreva quantos minutos foi necessario para percorreder esse percurso: " << endl;
 cin >> min;

 vm = (km/min) * 60;

 cout << "Ola " << nome << ", voce percorreu " << km << " km em " << min << " minutos, e a sua velocidade media foi de " << vm << fixed << setprecision(1);

 return 0;

 
   



 }

















