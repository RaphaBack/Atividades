#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) {
    int num,i;
    
    i = 0;
    do {
     cout << "Informe um numero: \n";
     cin >> num;
     if(num != 0)
         i = i + 1;
    } while (num != 0);
    
    cout << "A quantidade de numeros informados foram: " << i << endl;
    
    

    return 0;
}