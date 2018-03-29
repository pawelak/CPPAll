#include "stdafx.h"
#include "LeastCommonMultiple.h"
#include <numeric>
#include <vector>


LeastCommonMultiple::LeastCommonMultiple()
{
}


LeastCommonMultiple::~LeastCommonMultiple()
{
}


int LeastCommonMultiple::gcd(long long int a, long long int b)
{
	for (;;)
	{
		if (a == 0) return b;
		b %= a;
		if (b == 0) return a;
		a %= b;
	}
}

int LeastCommonMultiple::lcm(long long int a, long long int b)
{
	int temp = gcd(a, b);

	return temp ? (a / temp * b) : 0;
}

int LeastCommonMultiple::Run(vector<long long int> vec)
{
	long long int a;
	long long int pomoc2 = 0;
	pomoc2 = lcm(vec[0], vec[1]);
	for (int j = 2; j<vec.size(); j++)
	{
		pomoc2 = lcm(pomoc2, vec[j]);
	}
	return pomoc2;
}


