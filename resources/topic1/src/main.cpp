#include "stdafx.h"
#include <iostream>

using namespace std;

int app_n;
int user_n;
bool rand_q = true;

int main(int argc, char** argv)
{
    srand(time(NULL));
    app_n = (rand() % 10) + 1;
    cout << "Odgadnij wylosowana liczbe:" << endl;
    while (rand_q)
    {
        cin >> user_n;
        if (user_n==app_n)
        {
            cout << "Brawo ty!" << endl;
            rand_q = !rand_q;
        }
        else cout << "Try again." << endl;


    cout << endl << "wylosowalem -> [" << app_n << "]" << endl;

    system("pause");
    return 0;
}

