#include "mechanika.h"

Mechanika::Mechanika()
{

}

void Mechanika::wszystkie_dane()
{
    rozmiar_planszy = dane_rozmiar_planszy;
    liczba_symboli_linia = dane_liczba_symboli_linia;
    if(dane_gvsg == true)
    {
        gracz1.nick = "adam";
        gracz2.nick = "adrian";
    }
    else if(dane_gvsg == false)
    {
        gracz1.nick = "adrian";
        gracz2.nick = "KOMPUTER";
    }

    if(dane_zaczynajacy == true)
    {
        gracz1.wartosc = 1;
        gracz2.wartosc = 0;
        if(dane_znak == true)
        {
            gracz1.znak = 'X';
            gracz2.znak = 'O';
        }
        else if(dane_znak == false)
        {
            gracz1.znak = 'O';
            gracz2.znak = 'X';
        }
    }
    else if(dane_zaczynajacy == false)
    {
        gracz1.wartosc = 0;
        gracz2.wartosc = 1;
        if(dane_znak == true)
        {
            gracz1.znak = 'O';
            gracz2.znak = 'X';
        }
        else if(dane_znak == false)
        {
            gracz1.znak = 'X';
            gracz2.znak = 'O';
        }
    }
}

void Mechanika::rozgrywka()
{
    Mechanika::wszystkie_dane();
    cout << gracz1.nick << '\t' << gracz1.znak  << endl<< gracz2.nick << '\t' << gracz2.znak  <<endl;
}

