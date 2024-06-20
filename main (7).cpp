#include <iostream>
#include <locale.h>

using namespace std;

//FUNCAO RECURSIVA

int fat(int num)
{
    if(num==1)
        return 1;
    else
        return num*fat(num-1);
}


int main()
{
    setLocale(LC_ALL, "Portuguese")
    int num;

    cout<<"Fatorial de: ";
    cin>> num;

    cout<<"Igual a: "<<fat(num)<<endl;
}
