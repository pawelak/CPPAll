#include "stdafx.h"
#include "LeastCommonMultipleAda.h"


LeastCommonMultipleAda::LeastCommonMultipleAda()
{
}


LeastCommonMultipleAda::~LeastCommonMultipleAda()
{
}


int LeastCommonMultipleAda::NWD(long long int x, long long int y)
{
	long long r = 0;
	do
	{
		r = y % x;
		y = x;
		x = r;
	} while (x != 0);
	return y;
}

int LeastCommonMultipleAda::NWW(long long int a, long long int b)
{
	long long int c = 0;
	c = (a*b) / NWD(a, b);
	return c;
}

int LeastCommonMultipleAda::NWW_wielu( vector <long long int> arg)
{
	long long int a;
	long long int pomoc2 = 0;
//	vector<int> pomoc;
//	for (int i = 0; i<n; i++)
//	{
//		cin >> a;
//		pomoc.push_back(a);
//	}

	pomoc2 = NWW(arg[0], arg[1]);
	for (int j = 2; j<arg.size(); j++)
	{
		pomoc2 = NWW(pomoc2, arg[j]);
	}
	return pomoc2;
}

void LeastCommonMultipleAda::Run()
{
	vector<long long int> arg = { 5, 7, 9, 12 };
	NWW_wielu(arg);
}