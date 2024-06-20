#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv)
{
   int i,n,m;

   cout << "Digite o intervalo de numeros a ser mostrado!!!" << endl;
   cout << "De: ";
   cin >> n;
   cout << "Ate: ";
   cin >> m;

   for (i = n; i <= m; i++)
   {
    cout << i << endl;
   }
   return 0;
}   