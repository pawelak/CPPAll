// Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BoolTable.h"
#include "SitoPrimaryNymbersMyIdea.h"
#include "SitoPrimaryNymbersAdasIdea.h"
#include "RevertPrimaryNumbers.h"
#include "PrimaryNumbersCompartments.h"
#include <vector>


int OneCompartment(int from, int to)
{
	int quantity = 0;

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


void Run()
{
	vector<int> numbers;
	int amount;
	cin >> amount;
	vector<int> tab;
	for (int i = 0; i < amount; ++i)
	{
		int from, to;
		cin >> from >> to;
		numbers.push_back(OneCompartment(from, to));
	}
	for (int i = 0; i < numbers.size(); ++i)
	{
		cout << numbers[i] << " ";
	}
}

int main()
{
	Run();
//	BoolTable boolTable;
//	boolTable.Run();
//
//	SitoPrimaryNymbersMyIdea sito_primary_nymbers_my_idea;
//	sito_primary_nymbers_my_idea.Run();

//	SitoPrimaryNymbersAdasIdea sito_primary_nymbers_adas_idea;
//	sito_primary_nymbers_adas_idea.Run();

//	RevertPrimaryNumbers revert_primary_numbers;
//	revert_primary_numbers.Run();

//	PrimaryNumbersCompartments primary_numbers_compartments;
//	primary_numbers_compartments.Run();

	system("pause");
    return 0;
}

