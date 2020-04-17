#include "stdafx.h"

#include "logger.h"

logger::logger()
{
}

logger::~logger()
{
}

int logger::log(std::string text)
{
	std::string _path = ("./data/logs/content.log");
	
	hLog = fopen(_path.c_str(), "a+");

	if (hLog)
	{
		//fputs("Ten tekst zostanie dopisany do podanego pliku.\n", hLog);
		fputs(text.c_str(), hLog);
		fclose(hLog);
		return 0;
	}
	else {
		std::cout << "[ERROR]: Nie udalo sie uzyskac dostepu pliku.";
		return -1;
	}
}