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

///////////////////////////////////////////////////////////////////////
//             global function interface test
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

vector<int> vector_str2int(vector<string> input)
{
	vector<int> result;
	for (vector<string>::const_iterator it = input.begin();
		it != input.end();
		++it) {
		result.push_back( std::stoi(*it) );
	}
	return result;
}

map<int, string> reverse_map(map<string, int> input) {
	map<int, string> result;
	for (map<string, int>::const_iterator it = input.begin();
		it != input.end();
		++it) {
		result[it->second] = it->first;
	}
	return result;
}

map<string, int> reverse_map_int2str(map<int, string> input)
{
	map<string, int> result;
	for (map<int, string>::const_iterator it = input.begin();
		it != input.end();
		++it) {
		result[it->second] = it->first;
	}
	return result;
}

int gcd(int x, int y) 
{
	return x + y;
}


//////////////////////////////////////////////////////
//     class interface test 
vector<string> Dog::vector_int2str(const vector<int> &input)
{
	vector<string> result;
	for (vector<int>::const_iterator it = input.begin();
		it != input.end();
		++it) {
		result.push_back(to_string(*it));
	}
	return result;
}

vector<int> Dog::vector_str2int(const vector<string> &input)
{
	vector<int> result;
	for (vector<string>::const_iterator it = input.begin();
		it != input.end();
		++it) {
		result.push_back(std::stoi(*it));
	}
	return result;
}


map<int, string> Dog::reverse_map(map<string, int> input) {
	map<int, string> result;
	for (map<string, int>::const_iterator it = input.begin();
		it != input.end();
		++it) {
		result[it->second] = it->first;
	}
	return result;
}

map<string, int> Dog::reverse_map_int2str(map<int, string> input)
{
	map<string, int> result;
	for (map<int, string>::const_iterator it = input.begin();
		it != input.end();
		++it) {
		result[it->second] = it->first;
	}
	return result;
}
