// bigtable.cpp : Defines the exported functions for the DLL application.
//

#include "bigtable.h"
#include <iostream>
using namespace std;

BigTable::BigTable()
{
}

bool BigTable::addFiles( const vector<string> &files )
{		
	cout << "addFiles" << endl;
	cout << files.size() << endl;
	try {
		for (int i = 0; i < files.size(); ++i) {
			cout << "reading: " << files[i] << endl;
			this->mDataPaths.push_back(files[i]);
			this->mFile.open(files[i], 1);
		}
	} catch (...)
	{
		return false;
	}
	return true;
}

TableRow& BigTable::nextRow()
{	
	for (int i = 0; i < this->mDataPaths.size(); ++i) {
		cout << this->mDataPaths[i] <<endl;
	}
	this->mRow.update("Hello liye");
		
	return this->mRow;
}

