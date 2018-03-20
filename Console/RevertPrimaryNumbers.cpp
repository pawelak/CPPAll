#include "stdafx.h"
#include "RevertPrimaryNumbers.h"
#include <vector>


RevertPrimaryNumbers::RevertPrimaryNumbers()
{
}


RevertPrimaryNumbers::~RevertPrimaryNumbers()
{
}

void RevertPrimaryNumbers::Run()
{
	int currentI = 2, amount;
	vector<int> tab;
	cout << "podaj maksa:" << "\n";
	cin >> amount;

	int i = 2;
	while (tab.size() != amount)
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
		if (prime)tab.push_back(i);
		i++;
	}
	for (int x = tab.size()-1; x >= 0; --x)
	{
		cout << tab[x] << " ";
	}
}

//wypisuje liczby pierwsze razem z licznikiem
void RevertPrimaryNumbers::PrimaryNumbers()
{
	int num = 1;
	for (int i = 2; i<10000; i++)
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
		if (prime) cout <<num++ <<" "<< i << endl;
	}
}

void RevertPrimaryNumbers::test()
{
	int i = 1, num = 0;
	while(i < 100)
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
		i++;
		if (prime) cout << num++ << " " << i << endl;
	}
}