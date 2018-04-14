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
vector<int> vector_str2int(vector<string> input);

map<int, string> reverse_map(map<string, int> input);
map<string, int> reverse_map_int2str(map<int, string> input);

int gcd(int x, int y);

///////////////////////////////
// class test
class Dog {
private:
	vector<string> mDataPaths;
	TableRow mRow;
public:
	Dog(){ ; }
	vector<string> vector_int2str(const vector<int> &input);
	vector<int> vector_str2int(const vector<string> &input);

	map<int, string> reverse_map(map<string, int> input);
	map<string, int> reverse_map_int2str(map<int, string> input);
};

