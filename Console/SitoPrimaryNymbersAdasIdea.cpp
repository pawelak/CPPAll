#include "stdafx.h"
#include "SitoPrimaryNymbersAdasIdea.h"


SitoPrimaryNymbersAdasIdea::SitoPrimaryNymbersAdasIdea()
{
}


SitoPrimaryNymbersAdasIdea::~SitoPrimaryNymbersAdasIdea()
{
}


void SitoPrimaryNymbersAdasIdea::Sito(bool *tablica, int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (!tablica[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				tablica[j] = 1;
			}
		}
	}
}

void SitoPrimaryNymbersAdasIdea::Run()
{
	int n;
	bool *tablica;		
	cin >> n;
	tablica = new bool[n + 1];

	for (int i = 2; i <= n; i++)
	{
		tablica[i] = 0;			// Tu pojawia si� ciekawe pytanie, po co czy�cisz tablice od 2 pozycji, b�dzie ona wygl�da�a tak: t[0]=�mie�, t[1]=�mie�, t[2]=true;
	}

	Sito(tablica, n);

	for (int i = 2; i <= n; i++)	//czyli miejsca 0 i 1 s� ne uzywane 
	{
		if (!tablica[i])
		{
			cout << i << " ";
		}
	}
}




