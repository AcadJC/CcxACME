#pragma once

#ifndef __COMMON_H__
#define __COMMON_H__

#define STONE_ID  1
#define PAPER_ID  2
#define SHEARS_ID 3


void doConsoleHeader();
void doMenu();

int newGame();

std::string optString(int option);

#endif