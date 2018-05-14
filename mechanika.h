#ifndef MECHANIKA_H
#define MECHANIKA_H

#include <iostream>

using namespace std;

struct zawodnik
{
   char znak;
   bool wartosc;
   string nick;
};

class Mechanika
{
public:
    Mechanika();

    int dane_rozmiar_planszy = 3;
    int dane_liczba_symboli_linia = 2;
    bool dane_gvsg = true, dane_znak = true, dane_zaczynajacy = true;

    void rozgrywka();

private:
    int rozmiar_planszy, liczba_symboli_linia;
    zawodnik gracz1, gracz2;

    void wszystkie_dane();

};

#endif // MECHANIKA_H
