#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arq;
    arq.open("arquivoFOR.txt");
    for(int i = 0; i<= 10; i++)
    {
        arq << "Voce est� salvando dados de: " << i << endl;
        cout << "Voce est� salvando dados de: " << i << endl;
    }
    arq.close();
    return 0;
}
