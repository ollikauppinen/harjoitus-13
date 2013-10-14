/**********************************************************
*Tehtävä: Harjoitus13
*Tekijä: Olli Kauppinen
*PVM: 08.10.2013
*Kuvaus:
*Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
*yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
*lopuksi naytölle.
*
*
*a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
*tehdäksesi merkkijonojen yhdistämisen
*b) Kayta string-kirjastoa (C++:n merkkijonot)
*tehdäksesi merkkijonojen yhdistämisen  TEE, JOS ON AIKAA
*
*Esimerkki
*Anna etunimi: Aku
*Anna sukunimi: Ankka
*Nimesi oli: Aku Ankka
*
* Versio 1.0 H4718 08.10.2013
***********************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char nimi[14];
	char sukunimi[24];
	char kokonimi[38];

	cout << "Etunimesi?\n";
	cin >> nimi;
	cout << "\nSukunimesi?\n";
	cin >> sukunimi;

	strcpy_s (kokonimi, nimi);
	strcat_s (kokonimi, " ");
	strcat_s (kokonimi, sukunimi);
	
	cout << "\nNimesi on " << kokonimi << endl;
}