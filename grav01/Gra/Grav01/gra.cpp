#include <iostream>
#include "kosci.h"


using namespace std;

int k1, o1;  
int x1;

int main()

{
    k1 = 2;
    o1 = 4;
    
    Kosci kosci1(k1,o1);
    kosci1.rzut();
    
    cout << "Suma rzutow wynosi " << x1;
    getchar(); // w celu zobaczenia czy program dziala - nie zamyka okna 

    return 0;
} 