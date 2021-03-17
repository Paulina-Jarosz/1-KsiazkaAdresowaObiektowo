#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa :: rejestracjaUzytkownika() {

    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa :: wypiszWszystkichUzytkownikow() {

    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa :: logowanieUzytkownika() {

    uzytkownikMenadzer.logowanieUzytkownika();
}

void KsiazkaAdresowa :: zmianaHaslaZalogowanegoUzytkownika() {

    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

int KsiazkaAdresowa :: dodajAdresata() {

    adresatMenedzer.dodajAdresata();
}

void KsiazkaAdresowa :: wyswietlWszystkichAdresatow() {

    adresatMenedzer.wyswietlWszystkichAdresatow();
}
