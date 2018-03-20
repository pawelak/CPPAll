# CPPAll


**Opis dla Ady:**

W projektach o takiej budowie powinnaś zacząć pisać aczkolwiek jak Ci się nie chce to robię instrukcję odpalania "na szybko" i drugą "pełną" co tu się dzieje.

### Na szybko
Mówię Ci że rozwiązanie jest w **SitoPrimaryNymbersAdasIdea.cpp** to wchodzisz tam  i żeby odpalić to w znany Ci sposób wystarczy:

- Wejść do **Run()** w danej klasie skopiujesz i wstawisz do `int main() { //tu//  }`
- Jakieś inne funkcje poza konstruktorami tak jak w tamtym folderze funkcja: `void SitoPrimaryNymbersAdasIdea::Sito(bool *tablica, int n)`
-  to bierzesz ją całą i wklejasz przed `int main() { }` i wywalasz to co jest przed dwókropkami(razem z dwókropkami), w tym przypadku frazę:  **SitoPrimaryNymbersAdasIdea::**
- czyli ma to wyglądać tak:

###
    #include<jakiś>

    void funkcje1()
    {
	}
    
    void funkcje1()
    {
    }

    .
    .
    .
    
    int main()
    {
    	ciało właściwe
    	return 0;
    }

#


### Bardziej zaawansowane

#### Struktura Projektu 

![Project](https://raw.githubusercontent.com/pawelak/CPPAll/master/img/proj_struc.png)

Od góry:
(jak chcesz mieć tak ładnie tak jak ja to ussz zainstalować w końcu visuala, wersje najlepiej darmowe czyli Express albo Community)
[Pobierz](https://www.visualstudio.com/pl/vs/express/?rr=https%3A%2F%2Fwww.google.pl%2F "Pobierz")

**External Dependencies** - nie zaglądaj bo Ci nie potrzebne

**Header Files** - nagłówki (wszytkie .h), musiałaś mieć na obiektówce. Każdemu .cpp odpowiada jeden .h

**Resource Fils** - tam mogą być np. obrazki jak w programie ich używasz

**Source Fils** - ciała klas (.cpp), tu defacto działasz

Znajduje się tu plik o takiej samej nazwie jak projekt czyli Console i to tam znajduje się funkcja **main()**


W folderach z nagłowkami(Header Files) oraz odpowiadającymi im cpp(Source Fils)
podzieliłem na dodatkowe foldery czyli: **ExercisesAda** i **TestsAda** które są dedykowane dla Cb i będziesz miała tam tylko Twoje kody.


Co możesz nie ogarniać:

**stdafx.h** czyli pliki w któym mam wszystkie includy żebym nie musiał pisać ich litanii w każdej klasie, tak mam biblioteki w zestawie którego będę częściej używał.

**stdafx.cpp** jak jest .h to musi być .cpp


**Console.cpp** czyli **main()**
No i tu mamy:

	BoolTable boolTable;
	boolTable.Run();

czyli chcąc odpalić coś to tworzysz obiekt tego typu i w nim odpalasz funkcje **Run()**

    #include "stdafx.h"
    #include "BoolTable.h"

Oczywiście chcąc używać klas musisz je załączyć (BoolTable.h) i również mam tu załączony (stdafx.h) już wspomniany wcześniej