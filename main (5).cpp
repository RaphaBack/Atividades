#include <iostream>

using namespace std;

void cumprimenta(char inic1[60], char inic2[60])
{
    cout << "Ola " << inic1 << inic2 << " chupador de pinto!" << endl;
}

int main()
{
    char primeiro[60];
    char segundo[60];

   cout << "Digite as inicais: ";
   cin >> primeiro >> segundo;
   cumprimenta(primeiro,segundo);
    return 0;
}
