#include "stdafx.h"
#include "MyClockMesure.h"
#include <chrono>
#include "InvertMod.h"
#include "InvertModAda.h"


MyClockMesure::MyClockMesure()
{
}


MyClockMesure::~MyClockMesure()
{
}



void MyClockMesure::MesureTime()
{
	InvertMod invert_mod;
	InvertModAda invert_mod_ada;
	auto start = std::chrono::high_resolution_clock::now();
//--------

	auto w1 = invert_mod.InvMod(123, 12377);

//--------
	auto finish = std::chrono::high_resolution_clock::now();
	auto t1 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish - start).count();

//------------------------

	start = std::chrono::high_resolution_clock::now();
//-------

	auto w2 = invert_mod_ada.ExtractAlg(123, 12377);

//--------------
	finish = std::chrono::high_resolution_clock::now();
	auto t2 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish - start).count();

	cout << w1 << " vs " << w2 << endl;
	cout << t1 << " vs " << t2 << endl;
}