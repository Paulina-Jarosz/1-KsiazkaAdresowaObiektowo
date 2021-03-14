#include "MetodyPomocnicze.h"

string MetodyPomocnicze :: konwerjsaIntNaString(int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

string MetodyPomocnicze :: pobierzLiczbe(string tekst, int pozycjaZnaku)
{
    string liczba = "";
    while(isdigit(tekst[pozycjaZnaku]) == true)
    {
        liczba += tekst[pozycjaZnaku];
        pozycjaZnaku ++;
    }
    return liczba;
}

<<<<<<< HEAD
int MetodyPomocnicze :: konwersjaStringNaInt(string liczba)
=======
int konwersjaStringNaInt(string liczba)
>>>>>>> 6a4bc256cd0bd31d958c4c04e77e92283f90f5c0
{
    int liczbaInt;
    istringstream iss(liczba);
    iss >> liczbaInt;

    return liczbaInt;
}
