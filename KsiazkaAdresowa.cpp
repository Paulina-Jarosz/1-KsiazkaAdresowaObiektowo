#include "KsiazkaAdresowa.h"

char KsiazkaAdresowa ::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze :: wczytajZnak();

    return wybor;
}

void KsiazkaAdresowa :: rejestracjaUzytkownika() {

    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa :: wypiszWszystkichUzytkownikow() {

    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa :: logowanieUzytkownika() {

    uzytkownikMenadzer.logowanieUzytkownika();
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer (NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa :: zmianaHaslaZalogowanegoUzytkownika() {

    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa :: wylogowanieUzytkownika(){
    uzytkownikMenadzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

int KsiazkaAdresowa :: dodajAdresata() {

    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer -> dodajAdresata();
    } else {

        cout << "Aby dodaæ adresata nale¿y siê najpierw zalogowaæ " << endl;
        system ("pause");
    }
}

void KsiazkaAdresowa :: wyswietlWszystkichAdresatow() {

    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer -> wyswietlWszystkichAdresatow();
    }
}

bool KsiazkaAdresowa :: czyUzytkownikJestZalogowany(){
    uzytkownikMenadzer.czyUzytkownikJestZalogowany();
}

char KsiazkaAdresowa :: wybierzOpcjeZMenuUzytkownika() {
    uzytkownikMenadzer.wybierzOpcjeZMenuUzytkownika();
}

void KsiazkaAdresowa :: wyszukajAdresatowPoImieniu(){
    adresatMenedzer -> wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa :: wyszukajAdresatowPoNazwisku(){
    adresatMenedzer -> wyszukajAdresatowPoNazwisku();
}

int KsiazkaAdresowa :: usunAdresata(){
    adresatMenedzer -> usunAdresata();
}

void KsiazkaAdresowa :: edytujAdresata(){
    adresatMenedzer -> edytujAdresata();
}

int KsiazkaAdresowa :: podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata){
    adresatMenedzer -> podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsuwanegoAdresata);
}
