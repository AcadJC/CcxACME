#include "stdafx.h"
#include "game.h"

game::game()
{
}

game::~game()
{
	delete this;
}

int game::playSPS()
{
	int usr_item;
	int app_item = (rand() % 3) + 1;
	std::cout << " #  [GAME]: Stone, paper, scissors." << std::endl 
		<< std::endl 
		<< " #  ";
	std::cin >> usr_item;

	if (usr_item == app_item) {
		std::cout << " #  <remis>" << std::endl << std::endl;
	}
	else {
		if (usr_item == 1) {
			if (app_item == 2) {
				std::cout << " #  App win!" << std::endl;
			}
			else if (app_item == 3) {
				std::cout << " #  Usr win!" << std::endl;
			}
		}
		else if (usr_item == 2) {
			if (app_item == 3) {
				std::cout << " #  App win!" << std::endl;
			}
			else if (app_item == 1) {
				std::cout << " #  Usr win!" << std::endl;
			}
		}
		else if (usr_item == 3) {
			if (app_item == 1) {
				std::cout << " #  App win!" << std::endl;
			}
			else if (app_item == 2) {
				std::cout << " #  Usr win!" << std::endl;
			}
		}
	}


	return 0;
}

int game::playNo()
{
	int i_usr, c_ans = 0;
	int i_app_rand = (rand() % 10) + 1;
	std::cout << std::endl << " #  [GAME]: Predict number. (1 to 10)" << std::endl;
	while (true)
	{
		std::cout << " #  answer: ";
		std::cin >> i_usr;
		c_ans++;
		if (i_usr == i_app_rand) break;
	}
	std::cout << " #  Congratulations you will win in " << c_ans << " steps." << std::endl << " #  " << std::endl << std::endl;

	return 0;
}
