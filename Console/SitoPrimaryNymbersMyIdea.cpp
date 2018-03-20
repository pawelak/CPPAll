#include "stdafx.h"
#include "SitoPrimaryNymbersMyIdea.h"


SitoPrimaryNymbersMyIdea::SitoPrimaryNymbersMyIdea()
{
}


SitoPrimaryNymbersMyIdea::~SitoPrimaryNymbersMyIdea()
{
}

void SitoPrimaryNymbersMyIdea::Run()
{
	int till, topLimit, *tab;
	cout << "podaj maksa:" << "\n";
	cin >> topLimit;
	tab = new int[topLimit - 1];	// liczba 0 oraz 1 i tak nie b�d� brane pod uwag� wi�c tablica moze by� mniejsza
	till = floor(sqrt(topLimit));	// pod�oga z pierwiasta, mo�na to by�o zrobi� te� np tak: (int)sqrt(topLimit) czyli powiedzenie mu �e wynik w fload chcemy interpretowa� w int czyli z uwaleniem tego po przecinku

	for (int i = 0; i <= topLimit - 1; i++)	// wype�nianie tablicy w ramach oszcz�dno�ci zaczyna si� od 2 czyli tab[0]=2, tab[1]=3 ... itp
		tab[i] = i+2;

	for (int i = 2; i < till; i++)	// Rdze� Sito czyli leci a� do pierwiastka z granicy
	{
		if (tab[i] != 0)			// Leci po pozycjach i je�li na kt�ej� jest 0 to pomija (je�li tam jest 0 tzn �e ju� co� z t� pozycj� zrobili�my (oznaczyli�my jako wyzerowan�))
		{
			for (int j = 2 * i; j <= topLimit - 1; j += i)	// Wypiepszamy wieloktotno�ci. Czyli b�d�c na i(2) to wywalimy 2,4,6,8.... �adny rysunek do tego jest tu http://www.algorytm.org/algorytmy-arytmetyczne/sito-eratostenesa.html
				tab[j] = 0;
		}
	}

	for (int i = 0; i < topLimit-1; ++i)	// Wypisuje je�li miejsce w tabeli nie zerowe
	{
		if (tab[i] != 0)
		{
			cout << tab[i] << " ";
		}
	}

}
