#include <iostream>
#include "kosci.h"
#include <time.h>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <stdio.h>
#include <mmsystem.h>

using namespace std;



Kosci::Kosci(int k1, int o1) //fajnie, ale na to uzyjemy wskaznika
{
    k = k1;
    o = o1;
}

void Kosci::rzut()
{
    int x, k1, k2;
    int tab[6];
    srand(time(NULL));

    cout << "aktualne wartosc: k =" << k << " o =" << o << endl;

    if (o == 4) {
        for (int i = 0; i < k; i++)
        {
            k1 = abs((rand() % 4 + 5) - o);
            Sleep(3);
            tab[i] = k1;
            cout << "Wyniki rzutu " << i + 1 << " to: " << tab[i] << " " << endl;
        }
    }
    else {
        k1 = abs((rand() % 6 + 7) - o); //6 oczek
        Sleep(5);
        k2 = abs((rand() % 6 + 7) - o);
    }
    //cout << "Wyrzuciles: " << k1 << " i " << k2 << endl;
}


