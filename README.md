# CPPAll
C++ tests







Opis dla Ady:
w takich projektach powinnaœ zacz¹æ pisaæ aczkolwiek jak Ci siê nie chce to robiê instrukcjê odpalania "na szybko" i drug¹ "pe³n¹" co tu siê dzieje

1. Na szybko 
mówiê Ci ¿e rozwi¹zanie jest w SitoPrimaryNymbersAdasIdea.cpp to w dowolnym zadaniu ¿eby odpaliæ to w znany Ci sposób wystarczy ¿e tam wejdziesz i to co jest
wewn¹trz Run() skopiujesz i wstawisz do int main() { //tu//  }
natomiast jeœli s¹ jakieœ inne funkcje poza konstruktorami tak jak w tamtym folderze funkcja void SitoPrimaryNymbersAdasIdea::Sito(bool *tablica, int n)
to bierzesz j¹ ca³¹, wklejasza przed int main() { } i wywalasz to co jest przed dwókropkami(razem z dwókropkami), w tym przypadku:  SitoPrimaryNymbersAdasIdea::
czyli ma to wygl¹daæ tak 


#include <jakiœ>


void funkcje1(...)
{
	...
}

void funkcje2(...)
{
	...
}

.
.
.

int main()
{
	cia³o w³aœciwe

	return 0;
}


