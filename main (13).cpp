#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
    int i;
    for (i = 1; i <= 10; i++)
        cout << i << setw(7) << "X 6 = " << setw(3) << i*6 << endl; 
    return 0;
}

