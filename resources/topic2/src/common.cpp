#include <iostream>
#include <cstdlib>
#include <string>

#include "common.h"

using std::cout;
using std::cin;
using std::endl;

void doConsoleHeader()
{
	system("title cppGame");
	system("cls");
	cout << "Kamien, Papier, Nozyce - Gra cpp" << endl
		<< endl;
}

void doMenu()
{
	cout << " #  Opcje:" << endl
		<< " # ================================ " << endl
		<< " #  1 - Nowa gra" << endl
		<< " #  2 - Wyjscie" << endl;
}

int newGame()
{
	unsigned int _i_wybor;
	unsigned int i_app;

	doConsoleHeader();
	cout << " #  help:" << endl
		<< " #        [ 1 ] - Kamien" << endl 
		<< " #        [ 2 ] - Papier" << endl
		<< " #        [ 3 ] - Nozyce" << endl
		<< endl;

	cin >> _i_wybor;

	if (_i_wybor > 3 || _i_wybor < 1) 
	{
		cout << "niema takiej opcji, wybierz jeszcze raz." << endl;
		return -1;
	}
	else {
		i_app = (rand() % 3) + 1;

		// TODO: zaimplementowac algorytm decydujacy o wydgranym.
		//

		cout << " #  Uzytkownik: " << optString(_i_wybor) << ",   Program: " << optString(i_app) << endl;

		if (_i_wybor == i_app) {
			cout << " #  Remis." << endl;
		}
		else {
			if (_i_wybor == STONE_ID) {
				if (i_app == PAPER_ID) cout << "App win!" << endl;
				else if (i_app == SHEARS_ID) cout << "You are win!" << endl;
				else cout << "???" << endl;
			}
			else if (_i_wybor == PAPER_ID) {
				if (i_app == SHEARS_ID) cout << "App win!" << endl;
				else if (i_app == STONE_ID) cout << "You are win!" << endl;
				else cout << "??X?" << endl;
			}
			else if (_i_wybor == SHEARS_ID) {
				if (i_app == STONE_ID) cout << "App win!" << endl;
				else if (i_app == PAPER_ID) cout << "You are win!" << endl;
				else cout << "?X??" << endl;
			}
			else cout << "idk who win" << endl;
		}
	}

	system("pause");
	return 0;
}

std::string optString(int option_id)
{
	std::string stone_str, paper_str, shears_str, error_str;
	stone_str = "Kamien";
	paper_str = "Papier";
	shears_str = "Nozyce";
	error_str = "chuj wie co";
	if (option_id == STONE_ID)
		return stone_str;
	else if (option_id == PAPER_ID)
		return paper_str;
	else if (option_id == SHEARS_ID)
		return shears_str;
	else
		return error_str;
}