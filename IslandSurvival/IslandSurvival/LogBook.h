#pragma once
#include <iostream>
#include <fstream>

class LogBook
{
private:
	std::ofstream logfile;

public:
	LogBook();
	~LogBook();
	void Register();
};

