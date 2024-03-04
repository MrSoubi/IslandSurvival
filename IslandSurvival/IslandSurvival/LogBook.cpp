#include "LogBook.h"

LogBook::LogBook()
{
	logfile.open("LogBook.txt");

	logfile << "Here is what happened on this lonely island..." << std::endl << std::endl;
}

LogBook::~LogBook()
{
	logfile << "We don't know anything more about this story.";
	logfile.close();
}

void LogBook::Register()
{
	logfile << "Some information about some day" << std::endl;
}
