#include "stdafx.h"
#include "InvertModAda.h"
#include <vector>


InvertModAda::InvertModAda()
{
}


InvertModAda::~InvertModAda()
{
}

int InvertModAda::ExtractAlg(int a, int b)
{
	int pomoc;
	for (int i = 0; i <= b - 1; i++)
	{
		pomoc = (i*a) % b;
		if (pomoc == 1)
		{
			return i;
		}
	}
}

void InvertModAda::Run(int n)
{
	cin >> n;
	int pomoc;
	vector<int> wyniki;
	for (int j = 1; j <= n; j++)	// za d³ugo
	{
		int a, b;
		cin >> a >> b;
		for (int i = 0; i <= b - 1; i++)
		{
			pomoc = (i*a) % b;
			if (pomoc == 1)
			{
				wyniki.push_back(i);
			}
		}
	}
	for (int k = 0; k<n; k++)
	{
		cout << wyniki[k] << endl;
	}
}