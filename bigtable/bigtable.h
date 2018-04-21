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

	int mMinT;
	int mMaxT;
	int mCursorT;   // the key of mData
	int mCursorIndex;  // the list index of the value in mData
	map<int, vector<string>> mData;  //{time:[row1, ...], }
	vector<File*> mFiles;
public:
	BigTable();
	bool addFiles( const vector<string> &files ); 
	bool addFile(const string s) { 
		return this->addFiles( vector<string>({s}) ); 
	}

	void setTypes( map<string, string> &dtypes) { return; }  //this->mRow.setTypes(dtypes);
	int startTime() { return mMinT; }
	int endTime() { return mMaxT; }
	//vector<string> nextT() { ; }
	//string nextLine() { return mFile.nextLine(); }
	void showData() {
		cout << "showData()" << endl;		
		for (std::map<int, vector<string>>::iterator it = mData.begin(); it != mData.end(); ++it)
		{
			cout << "time: " << it->first << endl;
			for (int i = 0; i < it->second.size(); ++i)
				cout << it->second[i].data() << endl;
		}
	}

	void next() {
		cout << endl<< endl<< "next()" << endl;
		vector<string> rows;
		int t = mFiles[0]->nextT(rows);
		cout << "next: "<< t <<" || " << rows.size() << endl;
		for (int i = 0; i < rows.size(); ++i)
			cout << rows[i].data() << endl;
	}
		
	TableRow& nextRow();
};
