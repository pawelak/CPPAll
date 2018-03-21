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

int PrimaryNumbersCompartments::OneCompartment(int from, int to, int *tab)
{
	int quantity = 0;

	for (int i = from; i <= to; ++i)
	{
		if (tab[i] != 0)quantity++;
	}
	return quantity;
}

void PrimaryNumbersCompartments::PrepereTab(int *tab)
{
	for (int i = 0; i < 100; ++i)
	{
		if (tab[i] != 0)
		{
			for (int j = (2 * i); j < 10000 ; j += i)
				tab[j] = 0;
		}
	}
	
}

void PrimaryNumbersCompartments::ClearTab(int *tab)
{

	for (int i = 0; i < 10000; ++i)
	{
		tab[i] = i;
	}
	tab[1] = 0;
}


void PrimaryNumbersCompartments::Run()
{
	vector<int> numbers;
	int amount;

	cout << "ile przedzialow: ";
	cin >> amount;
	int tab[100000];

	ClearTab(tab);
	PrepereTab(tab);
	
	for (int i = 0; i < amount; ++i)
	{
		int from, to;
		cin >> from >> to;
		numbers.push_back(OneCompartment(from, to, tab));
	}

	for (int i = 0; i < numbers.size(); ++i)
	{
		cout << numbers[i] << endl;
	}
}

