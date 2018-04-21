#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <time.h>
using namespace std; 

class File {
public:
	int mStartTime;
	int mEndTime;
	int mCurrentTime;
	int mSize;
	int mTimeCol; //start from 0
	ifstream mFile;
public:
	File();
	float read1(const string &file, int timeCol = -1);
	float read2(const string &file);

	void open(const string &file, int timeCol, char seperator = ',');
	bool nextLine();
};
