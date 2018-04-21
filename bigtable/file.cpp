#include "file.h"

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

void File::open(const string &file, int timeCol, char seperator)
{
	cout << "opening file: " << endl;
	this->mTimeCol = timeCol;
	this->mFile.open(file, std::ifstream::in);
	if (!this->mFile.is_open()) {
		cout << "cannot open the file" << file.data() << endl;
		return;
	}		

	// get the time of the first line
	this->mFile.seekg(0, ios::end);
	streampos end = this->mFile.tellg();
	cout << "file length: " << end;
	string temp;
	char c;
	int col = 0;
	for (int i = 0; i < end; ++i) {
		this->mFile.seekg(i, ios::beg);
		this->mFile.get(c);
		if (c == '\n') {
			cout << "found one row" << temp.data() << endl;
			if (col == this->mTimeCol)
				break;
			else
				temp.clear();
			++col;
		}
		else {
			temp.push_back(c);
		}
		cout << "current value: " << temp.data() << endl;
	}
	if (temp.length() > 0)
		this->mStartTime = stoi(temp);

	// get the time of the last line
	temp.clear();
	col = 0;
	for (int i = 0; i < end; ++i) {
		this->mFile.seekg(-i, ios::end);
		this->mFile.get(c);
		if (c == '\n') {
			if (temp.length()>0)
				break;
		}
		else {
			temp.push_back(c);
		}
	}

	string timeStr;
	col = 0;
	reverse(temp.begin(), temp.end());
	for (int i = 0; i < temp.length(); ++i) {
		if (temp[i] == ',') {
			if (col == this->mTimeCol)
				break;
			else
				temp.clear();
			++col;
		}
		else {
			timeStr.push_back(temp[i]);
		}
	}
	if (temp.length() > 0)
		this->mStartTime = stoi(temp);
	return;
}

bool File::nextLine()
{
	return true;
}