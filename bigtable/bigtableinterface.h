#pragma once
#include "bigtable.h"
#include <iostream>
using namespace std;

// test class
BigTable* createTable();
bool addFiles(BigTable* self, const string s );


// test functions
string repeat(const string& s);
vector<string> vector_int2str(vector<int> input);
int gcd(int x, int y);
