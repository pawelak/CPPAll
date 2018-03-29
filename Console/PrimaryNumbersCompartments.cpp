#include "stdafx.h"
#include "PrimaryNumbersCompartments.h"
#include <vector>
#include "RevertPrimaryNumbers.h"
#include <chrono>

PrimaryNumbersCompartments::PrimaryNumbersCompartments()
{
}

PrimaryNumbersCompartments::~PrimaryNumbersCompartments()
{
}

int PrimaryNumbersCompartments::OneCompartment(int from, int to, vector<int> vec)
{
	int quantity = 0;

	for (int i = from; i <= to; ++i)
	{
		if (vec[i] != 0)quantity++;
	}
	return quantity;
}

void PrimaryNumbersCompartments::PrepereTab(vector<int> &vec)
{
	for (int i = 0; i < (int)sqrt(vec.size()); ++i)
	{
		if (vec[i] != 0)
		{
			for (int j = (2 * i); j < vec.size() ; j += i)
				vec[j] = 0;
		}
	}
	
}

void PrimaryNumbersCompartments::ClearTab(vector<int> &vec)
{
	int max = 100000;
	for (int i = 0; i < max; ++i)
	{
		vec.push_back(i);
	}
	vec[1] = 0;
}


void PrimaryNumbersCompartments::Run()
{
	vector<int> numbers;
	int amount;

	cout << "ile przedzialow: ";
	cin >> amount;
	vector<int> vec;

	ClearTab(vec);
	PrepereTab(vec);
	
	for (int i = 0; i < amount; ++i)
	{
		int from, to;
		cin >> from >> to;
		numbers.push_back(OneCompartment(from, to, vec));
	}

	for (int i = 0; i < numbers.size(); ++i)
	{
		cout << numbers[i] << endl;
	}
}


void PrimaryNumbersCompartments::RunOneCompartment()
{
	vector<int> vec;
	int from, to;
	cin >> from >> to;

	ClearTab(vec);
	PrepereTab(vec);
	cout << OneCompartment(from, to, vec);

}

