#pragma once
#include <vector>

class LeastCommonMultiple
{
public:
	LeastCommonMultiple();
	~LeastCommonMultiple();

	int gcd(long long int a, long long int b);

	int lcm(long long int a, long long int b);

	int Run(vector<long long int> vec);




};

