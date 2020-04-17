#ifndef __PROGRAM_H__
#define __PROGRAM_H__

class program
{
	bool b_boosted;
	std::string action_str;
public:
	program();
	~program();

	int init();
	int loadAction();
	int loadActions();

	int clean();
	int doHelp();
	int doUnknownCommand();
	int doShutdown();

	int nether();
	int overworld();

	std::string getAction();

	bool isBoost();
};

#endif // !__PROGRAM_H__
