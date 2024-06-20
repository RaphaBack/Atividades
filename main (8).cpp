#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arq;
    arq.open("BSItexto.txt");
    arq << "Raphael" << endl;
    arq << "Larissa" << endl;
    arq.close();
    return 0;
}
