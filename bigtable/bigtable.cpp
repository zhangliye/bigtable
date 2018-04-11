// bigtable.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "bigtable.h"

BigTable::BigTable()
{
}

BigTable::BigTable(string& csvPath)
{
	this->mCsvPath = csvPath;
}

string BigTable::nextRow()
{
	return ( "hello the world" );
}