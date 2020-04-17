#include "stdafx.h"

#include "program.h"
#include "logger.h"
#include "game.h"

game* g_game;

int main(int argc, char* argv[])
{    
    srand(time(NULL));
    program *app = new program();
    app->init();

    while(app->isBoost())
    {
        app->loadAction();

        if (!app->getAction().compare("help")) {
            app->doHelp();
        }
        else if (!app->getAction().compare("clean")) {
            app->clean();
        }
        else if (!app->getAction().compare("exit") || !app->getAction().compare("shutdown")) {
            app->doShutdown();
        }

		else if (!app->getAction().compare("nether")) {
			app->nether();
		}
		else if (!app->getAction().compare("overworld") || !app->getAction().compare("world")) {
			app->overworld();
		}
        else if (!app->getAction().compare("spsGame")) {
            app->clean();
            g_game->playSPS();
        }
        else if (!app->getAction().compare("noGame")) {
            app->clean();
            g_game->playNo();
        }
    }

    return 0;
}
