#include "stdafx.h"
#include "MyClockMesure.h"
#include <chrono>
#include "InvertMod.h"
#include "InvertModAda.h"
#include <vector>
#include "LeastCommonMultiple.h"
#include "LeastCommonMultipleAda.h"
#include <numeric>


MyClockMesure::MyClockMesure()
{
}


MyClockMesure::~MyClockMesure()
{
}



void MyClockMesure::MesureTime()
{
	long long int w1, w2;
	vector<long long int> vec = { 5, 7, 9, 12 , 17, 19, 21, 83};


	LeastCommonMultiple least_common_multiple;
	LeastCommonMultipleAda least_common_multiple_ada;

	auto start = std::chrono::high_resolution_clock::now();
//--------


	w1 = least_common_multiple.Run(vec);

//--------
	auto finish = std::chrono::high_resolution_clock::now();
	auto t1 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish - start).count();

//------------------------

	start = std::chrono::high_resolution_clock::now();
//-------

	w2 = least_common_multiple_ada.NWW_wielu(vec);

//--------------
	finish = std::chrono::high_resolution_clock::now();
	auto t2 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish - start).count();

	cout << w1 << " vs " << w2 << endl;
	cout << t1 << " vs " << t2 << endl;
}