#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <time.h>
using namespace std; 

class File {
public:
	int mStartT;
	int mEndT;
	int mCurrentT;
	int mSize;

	int mTimeCol; //time column index, start from 0
	char mSeperator; // default is ','

	ifstream mFile; 
	int mCussor = 0;
private:
	int getTime(const string& row);
public:
	File();
	~File() { mFile.close(); }

	void open(const string &file, int timeCol, char seperator = ',', bool hasHead=true);
	bool nextLine(string& line);
	int nextT( vector<string> &rows );
};
