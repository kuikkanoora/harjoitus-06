/*************************************************************************************************************************************************************
*Tehtävä: Harjoitus6
*Tekijä: Noora Kuikka
*PVM: 05.10.2013
*Kuvaus:
*Harjoitus 6 (palautus vko 40)
*Kirjoita ohjelma, joka kysyy käyttäjältä lompakossa olevan rahamäärän
*ja lihapiirakan hinnan.
*
*Ohjelma tutkii, onko käyttäjällä varaa ostaa lihapiirakka.
*Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon jää vielä rahaa.
*Muuten ohjelma kehottaa käyttäjää paastoamaan.
*
*Käytä vain kahta muuttujaa. älä vähennä lompakon sisältää, ellet voi
*ostaa lihapiirakkaa.
*Versio 1.0 H4719 05.10.2013
**************************************************************************************************************************************************************/
#include <iostream>
using namespace std;
void main()
{
	int pie;
	int wallet;

	cout << "How much does a meat pie cost?";
	cin >> pie;
	cout << "How much money do you have in your wallet?";
	cin >> wallet;

	if(wallet > pie)
	    cout << "The amount of money remaining in your wallet after purchasing a meat pie is " <<wallet - pie;
	else
		cout << "You don't have enough money. Time for a fast!";
}

