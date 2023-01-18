#ifdef _WIN32
#include <conio.h>
#else
#include <ncurses.h>
#endif

int main()
{
#ifdef _WIN32
    while (true)
    {
        switch (_getch())
        {
            case 72:
                std::cout << "Klawisz strzałki w górę został naciśnięty." << std::endl;
                break;
            case 80:
                std::cout << "Klawisz strzałki w dół został naciśnięty." << std::endl;
                break;
            case 75:
                std::cout << "Klawisz strzałki w lewo został naciśnięty." << std::endl;
                break;
            case 77:
                std::cout << "Klawisz strzałki w prawo został naciśnięty." << std::endl;
                break;
        }
    }
#else
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    while (true)
    {
        switch (getch())
        {
            case KEY_UP:
                std::cout << "Klawisz strzałki w górę został naciśnięty." << std::endl;
                break;
            case KEY_DOWN:
                std::cout << "Klawisz strzałki w dół został naciśnięty." << std::endl;
                break;
            case KEY_LEFT:
                std::cout << "Klawisz strzałki w lewo został naciśnięty." << std::endl;
                break;
            case KEY_RIGHT:
                std::cout

 break;
        case KEY_RIGHT:
            std::cout << "Klawisz strzałki w prawo został naciśnięty." << std::endl;
            break;
    }
}
endwin();
#endif
return 0;
}