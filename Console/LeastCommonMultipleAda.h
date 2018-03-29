#pragma once
#include <vector>

class LeastCommonMultipleAda
{
public:
	LeastCommonMultipleAda();
	~LeastCommonMultipleAda();

	int NWD(long long int x, long long int y);

	int NWW(long long int a, long long int b);

	int NWW_wielu(vector<long long int> arg);

	void NWW_wielu(long long int n);

	void Run();


	

};

