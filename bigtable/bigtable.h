#pragma once
#include<string>
#include<vector>
#include<map>
using namespace std;
#include "file.h"

class TableRow {
public:
	string mRow;
	map<string, string> mTypeMap;

public:
	TableRow() {}
	//void setTypes( map<string, string>& dtypes ) { this->mTypeMap = dtypes; }
	void update(const string& row ) { this->mRow = row; }
};

class BigTable {
private:
	vector<string> mDataPaths;
	TableRow mRow;
	File mFile;
public:
	BigTable();
	bool addFiles( const vector<string> &files ); 
	bool addFile(const string s) { 
		cout << "reading files:" << endl;
		return this->addFiles( vector<string>({s}) ); 
	}
	void setTypes( map<string, string> &dtypes) { return; }  //this->mRow.setTypes(dtypes);
	int startTime() { return mFile.mStartTime; }
	int endTime() { return mFile.mEndTime; }
	string nextLine() { return mFile.nextLine(); }
		
	TableRow& nextRow();
};
