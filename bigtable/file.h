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
	int mStartTime;
	int mEndTime;
	int mCurrentTime;
	int mSize;
	int mTimeCol; //start from 0

	ifstream mFile; 
	int mCussor = 0;
public:
	File();
	~File() { mFile.close(); }
	float read1(const string &file, int timeCol = -1);
	float read2(const string &file);

	void open(const string &file, int timeCol, char seperator = ',', bool hasHead=true);
	string nextLine();
};
