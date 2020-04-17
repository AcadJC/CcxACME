#include "stdafx.h"

#include "program.h"

program::program()
{
	this->b_boosted = false;
}

program::~program()
{	
	delete[] this;
}

int program::init()
{	
	system("cls");
	system("title Converter Cpp0x ");

	std::cout << "AcadJC " << SOFTWARE_NAME << " [Version " << SOFTWARE_VERSION << "]" << std::endl
		<< "(c) 2020 AcadJC Development. All rights reserved." << std::endl << std::endl;

	if (!this->b_boosted) {
		this->b_boosted = true;
	}

	return 0;
}

int program::loadAction()
{	
	std::cout << "$ ";
	std::cin >> this->action_str;

	return 0;
}

int program::loadActions()
{
	std::ifstream f_action;

	f_action.open(
		L"./data/actions.xml"
	);

	if (!f_action.good()) {
		std::cout << " [ERROR]: File is not found." << std::endl;
		return -1;
	}

	f_action.close();

	return 0;
}

int program::doHelp()
{
	std::string lcom;
	std::ifstream f_help;

	this->clean();

	f_help.open(
		L"./data/events/help.dat"
	);

	if (!f_help.good()) {
		std::cout << " #  [ERROR]: File not found." << std::endl;
		return -1;
	}
	else {
		while (std::getline(f_help, lcom)) {
			std::cout << lcom << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	f_help.close();

	return 0;
}

int program::doShutdown()
{
	this->clean();
	std::cout << " #  Program going to shutdown" << std::endl;
	this->b_boosted = false;

	return 0;
}

int program::nether()
{
	int ow_x;
	int ow_z;
	this->clean();
	std::cout << " # OverWorld location:" << std::endl
		<< " #  position x: ";
	std::cin >> ow_x;
	std::cout << " #  position z: ";
	std::cin >> ow_z;

	std::cout << std::endl
		<< " #  Over World cord[x:" << ow_x << ", z:" << ow_z << "]" << std::endl
		<< " #      Nether cord[x:" << ow_x / 8 << ", z:" << ow_z / 8 << "]" << std::endl
		<< " #" << std::endl;

	return 0;
}

int program::overworld()
{
	int ow_x, ow_z;
	this->clean();
	std::cout << " #  Nether location:" << std::endl
		<< " #  position x: ";
	std::cin >> ow_x;
	std::cout << " #  position z: ";
	std::cin >> ow_z;

	std::cout << std::endl
		<< " #  OverWorld cord[x:" << ow_x * 8 << ", z:" << ow_z * 8 << "]" << std::endl 
		<< " #     Nether cord[x:" << ow_x << ", z:" << ow_z << "]" << std::endl
		<< std::endl;

	return 0;
}

int program::clean()
{
	this->init();
	return 0;
}

std::string program::getAction()
{
	return (std::string) this->action_str;
}

bool program::isBoost()
{
	return (bool) this->b_boosted;
}