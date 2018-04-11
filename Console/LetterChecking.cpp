#include "stdafx.h"
#include "LetterChecking.h"
#include <vector>
#include <string>


LetterChecking::LetterChecking()
{
}


LetterChecking::~LetterChecking()
{
}


void LetterChecking::Run()
{
	vector<int> vec;
	string str;
	cin >> str;

	for (int i = 0; i < 25; ++i)
	{
		vec.push_back(0);
	}

	for (int i = 0; i < str.size(); ++i)
	{
		vec[static_cast<int>(str[i]) - 97]++;

		//cout << (int)(vec[i]+97) << endl;
	}
	int repeat=0, count=vec[0];
	for (int i = 0; i < vec.size(); ++i)
	{
		if (count < vec[i])
		{
			count = vec[i];
			repeat = i;
		}
	}
	cout << count << " " << (char)(repeat+97);

}

