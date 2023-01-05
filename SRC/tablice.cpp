#include <iostream>
#include <conio.h>
#include "konfiguracja.hpp"

using namespace std;

void wyswietl_tablice(int n,int m, int tablica[rozmiar_x][rozmiar_y])
{
    for(int y=1;y<n-1;y++)
    {
        for(int x=1;x<m-1;x++)
        {
        cout << tablica[x][y]<< " " ;
        }
        cout << endl;
    }
}