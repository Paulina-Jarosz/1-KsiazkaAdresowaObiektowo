#include <iostream>
#include "KsiazkaAdresowa.h"


using namespace std;

int _main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor = 0;
    //int idZalogowanegoUzytkownika = 0;
    vector <Uzytkownik> uzytkownicy;
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;

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
                //idOstatniegoAdresata = ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku();

            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                idOstatniegoAdresata = ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                //wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
                //wyszukajAdresatowPoNazwisku(adresaci);
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                //idUsunietegoAdresata = usunAdresata(adresaci);
                //idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                //edytujAdresata(adresaci);
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


//TEST
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "AdresatMenedzer.h"

int main()
{
    PlikZAdresatami plikZAdresatami ("Adresaci-test.txt");
    Adresat adresat (3,5,"Anna","Kowal","123444","email","adres");

    plikZAdresatami.dopiszAdresataDoPliku(adresat);
    //adresatMenedzer.wyswietlWszystkichAdresatow();

    cout <<plikZAdresatami.pobierzIdOstatniegoAdresata();

}

