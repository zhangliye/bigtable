#pragma once
#include<string>
#include<vector>
#include<map>
using namespace std;

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
public:
	BigTable();
	bool addFiles( const vector<string> &files ); 
	bool addFile(const string s) { return this->addFiles( vector<string>({s}) ); }
	void setTypes( map<string, string> &dtypes) { return; }  //this->mRow.setTypes(dtypes);
		
	TableRow& nextRow();
};
