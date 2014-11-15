#pragma once
#ifndef PARSER
#define PARSER

#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

/*
	Notes: Generic Parser class. Indivual ones will be made for each of the two files that are to be read in.
*/
class parser
{
private:
	vector<string> unParsed;
	vector<string> words;				//for now the words are just being split up I plan on probably making a word class later
	vector<string> sentence;
	map<char, int> commandList;		//basically a list of characters where the parser will take certain actions.

protected:
	int giveCommand(char);	//takes in a 

public:

//Constuctor
	parser();

//Methods
	void addUnparsed(vector<string>);
	void clear();
	string quickParse();
	bool changeCommands(string, int);
//	string parseSentence();			for the parsing the document
	void parseAll();
	
};

#endif