#include <iostream>

class Kosci
{

    int k; //ilosc kosci 2-4
    int o; //ilosc oczek 4-6
    
public:
    Kosci(int k = 3, int o = 6); //default dla wartosci kosci i stad zaciaga! trzeba zrobic wskaznik bo nie chce zmienic liczb!!!!!
    void rzut();
};