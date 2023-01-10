#include "konfiguracja.hpp"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    bool koniec = false;
    
    

    while( koniec == false )
    {
        unsigned char znak = getch();
        switch( znak )
        {
        case 0: //klawisze specjalne (czasem zero czasem 224 - zależne od pc'ta chyba)
        case 224: //klawisze specjalne
            znak = getch();
            switch( znak )
            {
            case 72: //strzałka w górę
                cout << "strzalka w gore" << endl;
                break;
            case 80: //strzałka w dół
            cout << "strzalka w dol" << endl;
                break;
            case 75: //strzałka w lewo
            cout << "strzalka w lewo" << endl;
                break;
            case 77: //strzałka w prawo
            cout << "strzalka w prawo" << endl;
                break;
            }
            znak = 0;
            break;
        case 13: //ENTER
            break;
        case 27: //ESC
            koniec = true;
            break;
        }
    }
    return( 0 );
}