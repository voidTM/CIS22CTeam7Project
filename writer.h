#pragma once
#ifndef WRITER
#define	WRITER

#include <fstream>
#include <vector>
#include <map>
#include <string>
#include <iostream>

using namespace std;

/*
	class writer
		An writer class that opens a file and writes into it line by line
*/

class writer
{
	protected:
		ofstream wFile;
		string line;
		vector<string> toBeWritten; //assumes all data in each string are ment to be in 1 line.
		bool filePresent;
	public:

	//Constructor
		writer();

	//Methods
		bool addFile(string);
		bool closeFile();
		void clearData();
		bool addData(vector<string>);
		void writeFile();
};

#endif