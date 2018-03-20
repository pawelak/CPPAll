#include "stdafx.h"
#include "PrimaryNumbersCompartments.h"
#include <vector>
#include "RevertPrimaryNumbers.h"


PrimaryNumbersCompartments::PrimaryNumbersCompartments()
{
}


PrimaryNumbersCompartments::~PrimaryNumbersCompartments()
{
}

int PrimaryNumbersCompartments::OneCompartment(int from, int to)
{
	int quantity=0;

	int i = from;
	while (i <= to)
	{
		bool prime = true;
		for (int j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}

		}
		if (prime)quantity++;
		i++;
	}
	return quantity;
}


void PrimaryNumbersCompartments::Run()
{
	vector<int> numbers;
	int amount;
	cout << "ile przedzialow: ";
	cin >> amount;
	vector<int> tab;
	for (int i = 0; i < amount; ++i)
	{
		int from, to;
		cin >> from >> to;
		numbers.push_back(OneCompartment(from,to));
	}
	for (int el : numbers)
	{
		cout << el << endl;
	}
}
