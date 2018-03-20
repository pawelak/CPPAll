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
	tab = new int[topLimit - 1];	// liczba 0 oraz 1 i tak nie bêd¹ brane pod uwagê wiêc tablica moze byæ mniejsza
	till = floor(sqrt(topLimit));	// pod³oga z pierwiasta, mo¿na to by³o zrobiæ te¿ np tak: (int)sqrt(topLimit) czyli powiedzenie mu ¿e wynik w fload chcemy interpretowaæ w int czyli z uwaleniem tego po przecinku

	for (int i = 0; i <= topLimit - 1; i++)	// wype³nianie tablicy w ramach oszczêdnoœci zaczyna siê od 2 czyli tab[0]=2, tab[1]=3 ... itp
		tab[i] = i+2;

	for (int i = 2; i < till; i++)	// Rdzeñ Sito czyli leci a¿ do pierwiastka z granicy
	{
		if (tab[i] != 0)			// Leci po pozycjach i jeœli na któejœ jest 0 to pomija (jeœli tam jest 0 tzn ¿e ju¿ coœ z t¹ pozycj¹ zrobiliœmy (oznaczyliœmy jako wyzerowan¹))
		{
			for (int j = 2 * i; j <= topLimit - 1; j += i)	// Wypiepszamy wieloktotnoœci. Czyli bêd¹c na i(2) to wywalimy 2,4,6,8.... ³adny rysunek do tego jest tu http://www.algorytm.org/algorytmy-arytmetyczne/sito-eratostenesa.html
				tab[j] = 0;
		}
	}

	for (int i = 0; i < topLimit-1; ++i)	// Wypisuje jeœli miejsce w tabeli nie zerowe
	{
		if (tab[i] != 0)
		{
			cout << tab[i] << " ";
		}
	}

}
