# CPPAll
C++ tests







Opis dla Ady:
w takich projektach powinna� zacz�� pisa� aczkolwiek jak Ci si� nie chce to robi� instrukcj� odpalania "na szybko" i drug� "pe�n�" co tu si� dzieje

1. Na szybko 
m�wi� Ci �e rozwi�zanie jest w SitoPrimaryNymbersAdasIdea.cpp to w dowolnym zadaniu �eby odpali� to w znany Ci spos�b wystarczy �e tam wejdziesz i to co jest
wewn�trz Run() skopiujesz i wstawisz do int main() { //tu//  }
natomiast je�li s� jakie� inne funkcje poza konstruktorami tak jak w tamtym folderze funkcja void SitoPrimaryNymbersAdasIdea::Sito(bool *tablica, int n)
to bierzesz j� ca��, wklejasza przed int main() { } i wywalasz to co jest przed dw�kropkami(razem z dw�kropkami), w tym przypadku:  SitoPrimaryNymbersAdasIdea::
czyli ma to wygl�da� tak 


#include <jaki�>


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
	cia�o w�a�ciwe

	return 0;
}


