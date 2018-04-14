// bigtable.cpp : Defines the exported functions for the DLL application.
//

#include "bigtable.h"
#include <iostream>
using namespace std;

BigTable::BigTable()
{
}

bool BigTable::addFiles( vector<string> &files )
{		
	try {
		for (int i = 0; i < this->mDataPaths.size(); ++i) {
			this->mDataPaths.push_back(files[i]);
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
	TableRow row;
	row.update("12, 45");
		
	return row;
}

