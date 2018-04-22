#include "file.h"
#include "pub.h"

File::File()
{
	;
}

/*
clock_t t1, t2;
t1 = clock();
t2 = clock();
return ((float)t2 - (float)t1) / 1000.;
*/

void File::open(const string &file, int timeCol, char seperator, bool hasHead)
{
	mTimeCol = timeCol;
	mSeperator = seperator;
	this->mFile.open(file, std::ifstream::in);
	if (!this->mFile.is_open()) {
		cout << "cannot open the file" << file.data() << endl;
		return;
	}

	// get the time of the first line
	this->mFile.seekg(0, ios::end);
	streampos endPos = this->mFile.tellg();
	mSize = (int)endPos;
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
		this->mStartT = getTime(row);
		mCurrentT = mStartT-1;         // when call nextT(), it works
	}

	// get the last row and end time 
	row.clear();
	for (int i = -1; i >= -endPos; --i) {
		this->mFile.seekg(i, ios::end);
		this->mFile.get(c);
		if (c == '\n') {
			if (row.length()>0)
				break;
		}else{
			row.push_back(c);
		}
	}

	reverse(row.begin(), row.end());
	if (row.length() > 0)
		this->mEndT = getTime(row);

	// currsor to the first row
	this->mFile.seekg(0, ios::beg);
	if (hasHead) {
		string strTem;
		getline(mFile, strTem);
	}
	
	return;
}

int File::getTime(const string& row)
{
	string v = split(row, mSeperator)[mTimeCol];
	try {
		int t = stoi(v);
		return t;
	}
	catch (...) {
		return -1;
	}
}

void File::showT()
{
	string strTem;

	if (true) {
		strTem.clear();
		mFile.seekg(0, mFile.beg);
		cout << "#############################" << endl;
		while (true) {
			strTem.clear();
			if (getline(mFile, strTem)) {
				cout << strTem.data() << endl;
			}
			else {
				break;
			}
		}
		cout << "###############################" << endl;
	}

	if (false)
	{
		vector<string> rows;		
		if (mCurrentT + 1 <= mEndT) {
			++mCurrentT;

			while (true) {
				mPreCur = mFile.tellg();
				strTem.clear();
				if (getline(mFile, strTem))   // cursor move to the end of the row
				{
					if (getTime(strTem) == mCurrentT) {  // row of the next time 
						rows.push_back(strTem);
					}
					else if (getTime(strTem) > mCurrentT) { // reader cursor go back 
						mFile.seekg(mPreCur);
						mCurssor = mPreCur;
						strTem.clear();
						getline(mFile, strTem);
						break;
					}
				}
				else { // the end of the file
					mFile.seekg(mPreCur);
					mCurssor = mPreCur;
					//strTem.clear();
					//getline(mFile, strTem);
					break;
				}
			}
		}  // the end of the file
	}


}

int File::nextT(vector<string> &rows)
{
	string strTem;
	
	streampos mPreCur;
	if (mCurrentT + 1 <= mEndT) {
		++mCurrentT;		
		while (true) {
			mPreCur = mFile.tellg();
			strTem.clear();
			if (getline(mFile, strTem))   // cursor move to the end of the row
			{
				if (getTime(strTem) == mCurrentT) {  // row of the next time 
					rows.push_back(strTem);
				}
				else if (getTime(strTem) > mCurrentT) { // reader cursor go back 
					mFile.seekg(mPreCur);
					mCurssor = mPreCur;
					strTem.clear();
					getline(mFile, strTem);
					return mCurrentT;
				}
			}
			else { // the end of the file
				mFile.seekg(mPreCur);
				mCurssor = mPreCur;
				strTem.clear();
				getline(mFile, strTem);
				return -1;
			}
		}
	}  // the end of the file
	else {
		return -1;
	}
		
	return mCurrentT;
}

bool File::nextLine(string& line)
{
	if (mFile.is_open()) {
		if (getline(mFile, line))
			return true;
		else
			return false;
	}
	else {
		return false;
	}
}