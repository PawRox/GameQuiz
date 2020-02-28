#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <ctime>

using namespace std;

void pytanie40()
{
	char odpowiedz;
	cout<<"Jak sie nazywal bohater drugoplanowy w powieœci""Syzyfowe Prace"" Stefana Zeromskiego?"<<endl<<"1. Bernard Borowicz"<<endl<<"2. Walecki Figa"<<endl<<"3.Andrzej Radek "<<endl<<"4. Radek Andrzej"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='1')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie41()
{
	char odpowiedz;
	cout<<"Jaki krzew polaczyl groby Tristana i Izoldy?"<<endl<<"1.Jalowca"<<endl<<"2. Bzu"<<endl<<"3. Glogu "<<endl<<"4. Rozy"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='1')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie42()
{
	char odpowiedz;
	cout<<"Skad pochodzila matka Cezarego Baryki, bohatera Przedwioœnia?"<<endl<<"1. Z Krakowa"<<endl<<"2. Z Naw³oci"<<endl<<"3. Z Petersburga "<<endl<<"4. Z Siedlec"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='1')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie43()
{
	char odpowiedz;
	cout<<"Ktory z tych filmow jest najstarszy?"<<endl<<"1. Epoka Lodowcowa"<<endl<<"2. Resident Evili"<<endl<<"3. Gladiator "<<endl<<"4. Szybcy i Wsciekli"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='3')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie44()
{
	char odpowiedz;
	cout<<"Ktory film otrzymal nagrode Zlotej Maliny w kategori Najgorszy film w roku 2015?"<<endl<<"1. Transformers: Wiek zaglady"<<endl<<"2. Wojownicze zolwie ninja"<<endl<<"3. Legenda Herkulesa"<<endl<<"4. Savings Christmas"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='4')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie45()
{
	char odpowiedz;
	cout<<"Starsza pani pozbywa sie z domu niechcianego lokatora. To fabula fimu:?"<<endl<<"1. Zolty szalik(2000)"<<endl<<"2. Pora umierac(2007)"<<endl<<"3. Petla (1957))"<<endl<<"4. Wszyscy jestemsy Chystusami(2006)"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='2')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie46()
{
	char odpowiedz;
	cout<<"W ktorej czesci serii filmow Niezgodna glowna bohaterka Triss obciela wlosy?"<<endl<<"1. Niezgodna"<<endl<<"2. Cztery"<<endl<<"3. Zbuntowana"<<endl<<"4. Wierna"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='3')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie47()
{
	char odpowiedz;
	cout<<"WKtore z twierdzien o filmie Pulp Fiction (1994) nie jest prawdziwe?"<<endl<<"1. Film jest hippisowskim protestem przeciwko dyskryminacji kobiet"<<endl<<"2. Jest filmem brutalnym"<<endl<<"3. Zawiera scene tanca"<<endl<<"4. Opowiada m.in. o gangsterach"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='1')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie48()
{
	char odpowiedz;
	cout<<"W ktorym filmie pojawia sie postac Hannibala Lectera?"<<endl<<"1. Teksanska Masakra pila mechaniczna"<<endl<<"2. Milczenie owiec"<<endl<<"3. Psychoza"<<endl<<"4. Koszmar z ulicy Wiazow"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='2')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie49()
{
	char odpowiedz;
	cout<<"W ktorym filmie nie zagrala Marilyn Monroe?"<<endl<<"1. Pol zartem, pol serio"<<endl<<"2. Bulwar Zachodzacego slonca"<<endl<<"3. Slomiany wdowiec"<<endl<<"4. Mezczyzni wola blondynki"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='2')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie50()
{
	char odpowiedz;
	cout<<"Czy Leonadro Di Caprio otrzymal Oscara?"<<endl<<"1. Tak"<<endl<<"2. Nie"<<endl<<"3. Byc moze"<<endl<<"4. Nie wiem"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='1')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void Filmy(){
	srand( time( NULL ) );
    int n =( std::rand() % 10 ) + 1;
	switch(n){
		case 1: pytanie40();
		break;
		case 2: pytanie41();
		break;
		case 3: pytanie42();
		break;
		case 4: pytanie43();
		break;
		case 5: pytanie44();
		break;
		case 6: pytanie45();
		break;
		case 7: pytanie46();
		break;
		case 8: pytanie47();
		break;
		case 9: pytanie48();
		break;
		case 10: pytanie49();
		break;
		case 11: pytanie50();
		break;
	}
	
	
}
