#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string abc;

    ifstream arq_l ("arquivoFOR.txt");
    if(arq_l.is_open())
    {
        while(! arq_l.eof())
        {
            getline(arq_l, abc);
            cout << abc << endl;
        }
        arq_l.close();
    }
    else
    {
        cout << "ERROR: file was not opened or does not exist" << endl;
    }
    return 0;
}
