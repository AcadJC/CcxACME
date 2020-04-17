#ifndef __GAME_H__
#define __GAME_H__

class game
{
public:
	game();
	~game();

	int playSPS();
	int playNo();
};

extern game* g_game;
#endif
