#pragma once
#include <string>
#include <fstream>
using namespace std;

class DataBlock
{
private:
	string mFilePath;
	ifstream *mFileReader;
public:
	DataBlock();
	~DataBlock();
	bool open(const string &filePath)
	{
		this->mFileReader = new ifstream(filePath);
		this->mFilePath = filePath;
	}
};
