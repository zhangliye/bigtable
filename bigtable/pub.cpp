#include "pub.h"

vector<string> split(const string& str, char seperator) {
	vector<string> rst;
	string temp;
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == seperator) {
			rst.push_back(temp);
			temp.clear();
		}
		else
			temp.push_back(str[i]);
	}
	return rst;
}