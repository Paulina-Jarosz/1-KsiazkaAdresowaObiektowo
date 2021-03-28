#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa {

UzytkownikMenedzer uzytkownikMenadzer;
AdresatMenedzer *adresatMenedzer;
const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
    : uzytkownikMenadzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI (nazwaPlikuZAdresatami) {
        adresatMenedzer = NULL;
    }
    ~KsiazkaAdresowa() {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    };

    char wybierzOpcjeZMenuGlownego();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    int dodajAdresata ();
    void wyswietlWszystkichAdresatow();
    bool czyUzytkownikJestZalogowany();
    char wybierzOpcjeZMenuUzytkownika();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    int usunAdresata();
};

#endif
