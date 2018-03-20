#include "stdafx.h"
#include "BoolTable.h"


BoolTable::BoolTable()
{
}


BoolTable::~BoolTable()
{
}

void BoolTable::Run()
{
	cout << "tablica normalna:" << endl;
	bool *tab1[10];
	for (bool el : tab1)
	{
		cout << el << " ";
	}
	cout << endl;
	for (bool el : tab1)
	{
		printf("%d " , el);
	}


	cout << endl << endl << "tablica na wskaŸnikach:" << endl;
	bool tab2[10];
	for (bool el : tab2)
	{
		cout << el << " ";
	}
	cout << endl;
	for (bool el : tab2)
	{
		printf("%d ", el);
	}

}

