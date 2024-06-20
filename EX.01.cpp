#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main(){
    float n1,n2,total;
    int desejo;
    char sair;

 while (sair != 'S')
 {   
    cout << "Digite - 1 - para somar dois numeros" << endl;
    cout << "Digite - 2 - para subtrair dois numeros" << endl;
    cout << "Digite - 3 - para dividir dois numeros" << endl;
    cout << "Digite - 4 - para multiplicar dois numeros" << endl;
    cin >> desejo;
    

    cout << "Informe o primeiro numero" << endl;
    cin >> n1;
    cout << "Informe o segundo numero " << endl;
    cin >> n2;

    switch (desejo)
    {
    case 1:
        total = n1 + n2;
        cout << "O resultado da soma entre o primeiro e o segundo numero e " << total << endl;
        break;
    case 2:
        total = n1 - n2;
        cout << "O resultado da subtracao entre o primeiro e o segundo numero e " << total << endl;
        break;
    case 3:
        total = n1 / n2;
        cout << "O resultado da divisao entre o primeiro e o segundo numero e " << total << endl;
        break;
    case 4:
        total = n1 * n2;
        cout << "O resultado da multiplicacao entre o primeiro e o segundo numero e " << total << endl;
        break;
        default:
         cout << "Opcao invalida" << endl;
    }
    cout << "Digite - S - para sair do programa ou - C - para continuar" << endl;
    cin >> sair;
    sair = toupper(sair);   
}   
  if (sair != 'S' && sair != 'C')
  {
    cout << "Opcao invalida!!" << endl;
  }
   

cout << "Fim do programa";

  return 0;
  }