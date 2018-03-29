#include "stdafx.h"
#include "InvertMod.h"
#include <vector>


InvertMod::InvertMod()
{
}


InvertMod::~InvertMod()
{
}


int InvertMod::InvMod(int a, int b)
{
	int u, w, x, z, q;

	u = 1; w = a;
	x = 0; z = b;

	while (w)
	{
		if (w < z)
		{
			q = u; u = x; x = q;
			q = w; w = z; z = q;
		}
		q = w / z;
		u -= q * x;
		w -= q * z;
	}
	if (z == 1)
	{
		if (x < 0) x += b;
		return x;
	}
	return -1;

}


void InvertMod::Run()
{
	int ile, a, b;
	vector<int> wyniki;

	cin >> ile;
	for (int i = 0; i < ile; ++i)
	{
		cin >> a >> b;
		wyniki.push_back(InvMod(a, b));
	}

	for (int i = 0; i < wyniki.size(); ++i)
	{
		cout << wyniki[i] << endl;
	}
}