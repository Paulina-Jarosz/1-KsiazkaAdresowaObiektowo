#include "AdresatMenedzer.h"


/*void AdresaciMenedzer :: wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> adresaci, int idZalogowanegoUzytkownika){

    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}*/

int AdresatMenedzer :: dodajAdresata()
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatMenedzer :: podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;
    string imie, nazwisko, numerTelefonu, email, adres;
    MetodyPomocnicze metodyPomocnicze;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    imie = wczytajLinie();
    imie = zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie);
    adresat.ustawImie(imie);

    cout << "Podaj nazwisko: ";
    nazwisko = wczytajLinie();
    nazwisko = zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko);
    adresat.ustawNazwisko(nazwisko);

    cout << "Podaj numer telefonu: ";
    numerTelefonu = wczytajLinie();
    adresat.ustawNumerTelefonu(numerTelefonu);

    cout << "Podaj email: ";
    email = wczytajLinie();
    adresat.ustawEmail(email);

    cout << "Podaj adres: ";
    adres = wczytajLinie();
    adresat.ustawAdres(adres);

    return adresat;
}


string AdresatMenedzer :: wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

string AdresatMenedzer :: zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}
