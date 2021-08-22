#include <iostream>
#include "kosci.h"
#include <time.h>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <stdio.h>
#include <mmsystem.h>
#include <math.h>


using namespace std;
Kosci::Kosci(int k1, int o1)
{
    k = k1;
    o = o1;
}

void Kosci::rzut()
{
    int k1,x, i;
    int* tab = NULL;
    tab = new int[k];//dynamiczna tablica - yaaay
    srand(time(NULL));
    
    cout << "aktualne wartsc: k =" << k << " o =" << o << endl;

    if (k == 2) {
        for (i = 0; i < k; i++)
        {
            k1 = abs(rand() % o + 1);
            Sleep(3);
            tab[i] = k1;

            cout << "Wyniki rzutu " << i + 1 << " to: " << tab[i] << endl;

        }

        cout << endl;

        cout << "Czy chcesz przerzucic kosci?" << endl;
        cout << "\t" << "1. Tak, pierwsza kosc" << endl;
        cout << "\t" << "2. Tak, druga kosc" << endl;
        cout << "\t" << "3. Tak, wszystkie kosci" << endl;
        cout << "\t" << "4. Nie, dzieki" << endl;

        char wybor = _getch();

        switch (wybor)
        {
            {
        case '1':

            k1 = abs(rand() % o + 1);
            tab[0] = k1;
            cout << "Wyniki rzutu to: " << tab[0] << " " << endl;
            x = tab[0] + tab[1];

            _getch();
            break;

        case '2':
            k1 = abs(rand() % o + 1);
            tab[1] = k1;
            cout << "Wyniki rzutu to: " << tab[1] << " " << endl;
            x = tab[0] + tab[1];

            _getch();
            break;

        case '3': // w przypadku przerzucenia wszystkich kosci, ta funkcja bedzie dzialac ( nie wazne czy 2 /4 )
            for (i = 0; i < k; i++)
            {
                k1 = abs(rand() % o + 1);
                Sleep(3);
                tab[i] = k1;
                cout << "Wyniki rzutu koscia " << i + 1 << " to: " << tab[i] << " " << endl;
                x+= tab[i];


            }
            _getch();
            break;

        case '4':
            for (i = 0; i < k; i++)
            {
                x += tab[i];
            }

            break;

            }
        }
    }
    else {
        for (int i = 0; i < k; i++) // dla pozostalej ilosci kosci, testowo to 3
        {
            k1 = abs(rand() % o + 1);
            Sleep(3);
            tab[i] = k1;
            cout << "Kosc " << i + 1 << " to: " << tab[i] << " " << endl;

        }

        cout << endl;

        cout << "Czy chcesz przerzucic kosci?" << endl;
        cout << "\t" << "1. Tak, pierwsza kosc" << endl;
        cout << "\t" << "2. Tak, druga kosc" << endl;
        cout << "\t" << "3. Tak, trzecia kosc" << endl;
        cout << "\t" << "4. Tak, pierwsza i druga kosc" << endl;
        cout << "\t" << "5. Tak, pierwsza i trzecia kosc" << endl;
        cout << "\t" << "6. Tak, druga i trzecia kosc" << endl;
        cout << "\t" << "7. Tak, wszystkie kosci" << endl;
        cout << "\t" << "8. Nie, dzieki" << endl;

        char wybor = _getch();

        switch (wybor)
        {
            {
        case '1':

            k1 = abs(rand() % o + 1);
            tab[0] = k1;
            cout << "Wyniki rzutu to: " << tab[0] << " " << endl;
            x = tab[0] + tab[1] + tab[2];

            _getch();
            break;

        case '2':
            k1 = abs(rand() % o + 1);
            tab[1] = k1;
            cout << "Wyniki rzutu to: " << tab[1] << " " << endl;
            x = tab[0] + tab[1] + tab[2];

            _getch();
            break;

        case '3':
            k1 = abs(rand() % o + 1);
            tab[2] = k1;
            cout << "Wyniki rzutu to: " << tab[1] << " " << endl;
            x = tab[0] + tab[1] + tab[2];

            _getch();
            break;
        case '4':
            k1 = abs(rand() % o + 1);
            tab[0] = k1;
            Sleep(3);
            k1 = abs(rand() % o + 1);
            tab[1] = k1;
            cout << "Wyniki rzutu to: " << tab[1] << " " << endl;
            x = tab[0] + tab[1] + tab[2];

            _getch();
            break;
        case '5':
            k1 = abs(rand() % o + 1);
            tab[0] = k1;
            Sleep(3);
            k1 = abs(rand() % o + 1);
            tab[2] = k1;
            cout << "Wyniki rzutu to: " << tab[1] << " " << endl;
            x = tab[0] + tab[1] + tab[2];

            _getch();
            break;
        case '6':
            k1 = abs(rand() % o + 1);
            tab[1] = k1;
            Sleep(3);
            cout << "Wyniki rzutu to: " << tab[1] << " " << endl;
            k1 = abs(rand() % o + 1);
            tab[2] = k1;
            cout << "Wyniki rzutu to: " << tab[2] << " " << endl;
            x = tab[0] + tab[1] + tab[2];

            _getch();
            break;

        case '7':
            for (i = 0; i < k; i++)
            {
                k1 = abs(rand() % o + 1);
                Sleep(3);
                tab[i] = k1;
                cout << "Wyniki rzutu koscia " << i + 1 << " to: " << tab[i] << " " << endl;
                x += tab[i];


            }
            _getch();
            break;

        case '8':
            for (i = 0; i < k; i++)
            {
                x += tab[i];
            }

            break;

            }
        }
    }
    cout << "laczny wynik to: " << x << "!" << endl;

}