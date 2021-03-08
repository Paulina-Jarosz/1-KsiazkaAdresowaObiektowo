#ifndef ADRESACIMENEDZER_H
#define ADRESACIMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "Adresat.h"
#include "Uzytkownik.h"
#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer {
    vector <Adresat> adresaci;
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;


public:
    //AdresaciMenedzer (string nazwaPlikuZAdresatami) : plikZAdresatami (nazwaPlikuZAdresatami){};
    int dodajAdresata ();
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    string wczytajLinie(); // Metody Pomocnicze??
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst); // Metody Pomocnicze??

};

#endif
