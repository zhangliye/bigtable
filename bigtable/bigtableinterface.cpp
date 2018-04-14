#include "bigtableinterface.h"

BigTable* createTable()
{
	return new BigTable();
}
bool addFiles(BigTable* self, const string s)
{
	cout << typeid(s).name() <<endl;
	return true;
}

string repeat(const string& s)
{
	cout << typeid(s).name() << endl;
	return s + s;
}

vector<string> vector_int2str(vector<int> input)
{
	vector<string> result;
	for (vector<int>::const_iterator it = input.begin();
		it != input.end();
		++it) {
		result.push_back(to_string(*it));
	}
	return result;
}

int gcd(int x, int y) 
{
	return x + y;
}