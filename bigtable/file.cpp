#include "file.h"
#include "pub.h"

File::File()
{
	;
}

float File::read1(const string &file, int timeCol)
{
	clock_t t1, t2;
	t1 = clock();

	string line;
	ifstream myfile(file);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			//cout << line << '\n';
		}
		myfile.close();
	}
	else {
		cout << "Unable to open file";
	}

	t2 = clock();
	return ((float)t2 - (float)t1) / 1000.;
}

float File::read2(const string &file) {
	clock_t t1, t2;
	t1 = clock();

	ifstream in(file);
	in.seekg(0, ios::end);
	streampos sp = in.tellg();
	char c;
	for (int i = 0; i < sp; ++i)
		in.seekg(-i, ios::end);
	in.get(c);
	if (c == '\n') {
		cout << "end of line" << endl;
	}
	else {
		cout << "what ??" << endl;
	}

	t2 = clock();
	return ((float)t2 - (float)t1) / 1000.;
}

void File::open(const string &file, int timeCol, char seperator, bool hasHead)
{
	this->mTimeCol = timeCol;
	this->mFile.open(file, std::ifstream::in);
	if (!this->mFile.is_open()) {
		cout << "cannot open the file" << file.data() << endl;
		return;
	}

	// get the time of the first line
	this->mFile.seekg(0, ios::end);
	streampos endPos = this->mFile.tellg();
	mSize = endPos;
	string row;
	char c;
	int rowIndex = 0;
	for (int i = 0; i < endPos; ++i) {
		this->mFile.seekg(i, ios::beg);
		this->mFile.get(c);
		if (c == '\n') {
			if (hasHead && rowIndex==0) {
				row.clear();
				++rowIndex;
			}
			else {
				if (row.length() > 0) {
					break;
				}
			}
		}
		else {
			row.push_back(c);
		}
	}
	if (row.length() > 0) {
		string v = split(row, seperator)[timeCol];
		this->mStartTime = stoi(v);
	}

	// get the last row and end time 
	row.clear();
	for (int i = -1; i >= -endPos; --i) {
		this->mFile.seekg(i, ios::end);
		this->mFile.get(c);
		cout << i << ": " <<c << endl;
		if (c == '\n') {
			if (row.length()>0)
				break;
		}else{
			row.push_back(c);
		}
	}

	reverse(row.begin(), row.end());
	if (row.length() > 0) {
		string v = split(row, seperator)[timeCol];
		this->mEndTime = stoi(v);
	}

	// reserve file status
	this->mFile.seekg(0, ios::beg);

	return;
}

string File::nextLine()
{
	string line;
	if (mFile.is_open()) {
		getline(mFile, line);
		return line;
	}
	else {
		return "None";
	}
}