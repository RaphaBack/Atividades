#include <iostream>

using namespace std;

void oi(void)
{
    cout << "Oi, esse e o primeiro exemplo de definicao de funcao em c++." << endl;
    cout << "Ainda veremos outros exemplos." << endl;
    cout << endl;
}

int main()
{
    int i;
    i=1;

     while(i <= 5)
     {
       oi();
       i = i + 1;
     }

    return 0;
}
