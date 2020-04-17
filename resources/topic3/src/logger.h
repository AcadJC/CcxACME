#ifndef __LOGGER_H__
#define __LOGGER_H__

class logger
{
	FILE* hLog;
public:
	logger();
	~logger();
	int log(std::string text);
};

#endif // !__LOGGER_H__