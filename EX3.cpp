#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
   double fah;
   double cel;

   cout << "Esse programa faz a conversao de graus Fahrenheit para Celsius" << endl;
   cout << "Digite um valor em graus Fahrenheit" << endl;
   cin >> fah;

   cel = (fah - 32) * (5.0/9.0);

   cout << "O valor correspondende em Celsius e igual a: " << cel;

   return 0;

}
   