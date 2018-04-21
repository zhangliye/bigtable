// bigtable.cpp : Defines the exported functions for the DLL application.
//

#include "bigtable.h"
#include <iostream>
#include <limits>
using namespace std;

BigTable::BigTable()
{
	mMinT = std::numeric_limits<int>::max();
	mMaxT = std::numeric_limits<int>::min();
}

bool BigTable::addFiles( const vector<string> &files )
{		
	try {
		for (int i = 0; i < files.size(); ++i) {
			File *pFile = new File();
			pFile->open(files[i], 1);
			if (pFile->mStartT < mMinT)
				mMinT = pFile->mStartT;
			if (pFile->mEndT > mMaxT)
				mMaxT = pFile->mEndT;

			mFiles.push_back(pFile);
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

