#pragma once
#include <vector>

class PrimaryNumbersCompartments
{
public:
	PrimaryNumbersCompartments();
	~PrimaryNumbersCompartments();

	int OneCompartment(int from, int to, vector<int> vec);

	int OneCompartment(int from, int to, int * tab);

	void PrepereTab(vector<int> &vec);



	void ClearTab(vector<int> &vec);

	void Run();









};

