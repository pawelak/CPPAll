#include "stdafx.h"
#include "InsertEx1.h"


InsertEx1::InsertEx1()
{
}


InsertEx1::~InsertEx1()
{
}


int InsertEx1::solution(int M, int A[], int N) {
	int *count = (int*) malloc((M + 1) * sizeof(int));
	int i;
	for (i = 0; i < M; i++)
		count[i] = 0;
	int maxOccurence = 1;
	int index = -1;
	for (i = 0; i < N; i++) {
		if (A[i] > 0) {
			int tmp = count[A[i]];
			if (tmp >= maxOccurence) {
				maxOccurence = tmp;
				index = A[i];
			}
			count[A[i]] = tmp + 1;
		}
		else {
			//count[A[i]] = 1;
		}
	}
	return A[index];
}