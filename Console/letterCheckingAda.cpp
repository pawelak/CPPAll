#include "stdafx.h"
#include "letterCheckingAda.h"


letterCheckingAda::letterCheckingAda()
{
}


letterCheckingAda::~letterCheckingAda()
{
}

void letterCheckingAda::Run()
{
	char s[100001];
	int n, max, L[27];

	for (int i = 0; i<27; ++i)
	{
		L[i] = 0; // zeruje tablice (rozmiar - ilosc liter
	}
	cin >> n >> s;
	for (int i = 0; i<n; ++i)
	{
		L[(int)(s[i] & 0x1f)]++;
	}
	max = 0;
	for (int i = 1; i<27; ++i)
	{
		if (L[max]<L[i]);
		{
			max = i;
		}
	}
	cout << L[max] << " " << (char)(max | 0x60);
	
}





