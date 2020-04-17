#include <iostream>
#include <cstdlib>
#include <ctime>

#include "common.h"

using namespace std;

int i_menu;
bool bIsBoosted = true;

int main(int argc, char** argv)
{
    srand(time(NULL));
    
    while (bIsBoosted)
    {
        doConsoleHeader();
        doMenu();

        cin >> i_menu;

        switch (i_menu)
        {
        case 1:
            cout << "Nowa gra" << endl;
            newGame();
            break;
        case 2:
            cout << "App going to shutdown.";
            bIsBoosted = false;
            break;
        default:
            cout << "wybor nieobslugiwany." << endl;
            break;
        }
    }

    system("pause");
    return 0;
}
