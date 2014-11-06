#pragma once
#ifndef READER
#define READER

#include <fstream>
#include <vector>
#include <map>
#include 

class reader
{
	private:
		ifstream database;
		vector <string> readIn;
		map<char, int> ignore;
		bool filePresent; 		//True if a file is already opened
	public:

	//Constructor
		reader();
		reader(string); //Will take in the file name and then open it.

	//Methods
		bool addFile(string);	//takes in a file name and attempts to open it.
		bool readFile();		// maybe take in everything and then close file?
		bool closeFile();		//
		void parser(); 			//maybe make a friend class?
};

#endif