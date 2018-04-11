#pragma once
using namespace std;
#include<string>

class BigTable {
public:
	BigTable();
	BigTable( string& csvPath );
	string nextRow();
private:
	string mCsvPath;
};