#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor = 0;
    int idOstatniegoAdresata = 0;
    int idUsunietegoAdresata = 0;
    vector <Adresat> adresaci;

     while (true)
    {
        if (ksiazkaAdresowa.czyUzytkownikJestZalogowany() == false)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {

            if (adresaci.empty() == true)

            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                idUsunietegoAdresata = ksiazkaAdresowa.usunAdresata();
                idOstatniegoAdresata = ksiazkaAdresowa.podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata);
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                adresaci.clear();
                break;
            }
        }
    }
    return 0;
}


/*//TEST
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "PlikZUzytkownikami.h"
#include "AdresatMenedzer.h"

int main()
{
    PlikZUzytkownikami plikZUytkownikami("Uzytkownicy_testing.txt");
    Uzytkownik uzytkownik(11, "Jan", "aaa");
    plikZUytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);
    /*AdresatMenedzer adresatMenedzer ("Adresaci.txt",1);
    adresatMenedzer.wyswietlWszystkichAdresatow();
    adresatMenedzer.dodajAdresata();
    adresatMenedzer.wyswietlWszystkichAdresatow();

}*/

