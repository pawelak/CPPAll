// Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BoolTable.h"
#include "SitoPrimaryNymbersMyIdea.h"
#include "SitoPrimaryNymbersAdasIdea.h"


int main()
{
	BoolTable boolTable;
	boolTable.Run();

//	SitoPrimaryNymbersMyIdea sito_primary_nymbers_my_idea;
//	sito_primary_nymbers_my_idea.Run();

	SitoPrimaryNymbersAdasIdea sito_primary_nymbers_adas_idea;
	sito_primary_nymbers_adas_idea.Run();


	system("pause");
    return 0;
}

