#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <ctime>

using namespace std;

void pytanie20()
{
	char odpowiedz;
	cout<<"Jak sie nazywal bohater drugoplanowy w powieœci""Syzyfowe Prace"" Stefana Zeromskiego?"<<endl<<"1. Bernard Borowicz"<<endl<<"2. Walecki Figa"<<endl<<"3.Andrzej Radek "<<endl<<"4. Radek Andrzej"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='1')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie21()
{
	char odpowiedz;
	cout<<"Jaki krzew polaczyl groby Tristana i Izoldy?"<<endl<<"1.Jalowca"<<endl<<"2. Bzu"<<endl<<"3. Glogu "<<endl<<"4. Rozy"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='1')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie22()
{
	char odpowiedz;
	cout<<"Skad pochodzila matka Cezarego Baryki, bohatera Przedwioœnia?"<<endl<<"1. Z Krakowa"<<endl<<"2. Z Naw³oci"<<endl<<"3. Z Petersburga "<<endl<<"4. Z Siedlec"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='4')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie23()
{
	char odpowiedz;
	cout<<"Jak konczy sie ""Kordian""?"<<endl<<"1. Bohater umiera"<<endl<<"2. Bohater wyrusza na walke"<<endl<<"3. Zakonczenie jest otwarte"<<endl<<"4. Kordian ucieka"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='3')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie24()
{
	char odpowiedz;
	cout<<"Kto odkupil kamizelke od Zyda w noweli Prusa?"<<endl<<"1. Stroz"<<endl<<"2. Przyjaciel"<<endl<<"3. Nikt"<<endl<<"4. Sasiad"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='4')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie25()
{
	char odpowiedz;
	cout<<"Gdzie skonal Roland z Piesni o Rolandzie"<<endl<<"1. Na wzgozu pod sosna"<<endl<<"2. Nie umarl"<<endl<<"3. Przy kamieniu"<<endl<<"4. W dolinie pod debem"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='1')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie26()
{
	char odpowiedz;
	cout<<"Jane Austin nie jest autorka:"<<endl<<"1. Dumy i uprzedzenia"<<endl<<"2. Malych Kobietek"<<endl<<"3. Emmy"<<endl<<"4. Mansfield Park"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='2')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie27()
{
	char odpowiedz;
	cout<<"Ojcem Antygony byl: "<<endl<<"1. Edyp"<<endl<<"2. Perseusz"<<endl<<"3. Tezeusz"<<endl<<"4. Achilles"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='1')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie28()
{
	char odpowiedz;
	cout<<"Izolda miala przydomek: "<<endl<<"1. Zielonooka"<<endl<<"2. Wierna"<<endl<<"3. Jasnowlosa"<<endl<<"4. Mila"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='3')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie29()
{
	char odpowiedz;
	cout<<"""Cierpienia Mlodego Wertera""stworzono na podstawie: "<<endl<<"1. Wierszy bohaterow"<<endl<<"2. Listow bohaterow"<<endl<<"3. Opowiadan ich rodzin"<<endl<<"4. Pamietnikow bohaterow"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='2')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void Ksiazki(){
	srand( time( NULL ) );
    int n =( std::rand() % 10 ) + 1;
	switch(n){
		case 1: pytanie20();
		break;
		case 2: pytanie21();
		break;
		case 3: pytanie22();
		break;
		case 4: pytanie23();
		break;
		case 5: pytanie24();
		break;
		case 6: pytanie25();
		break;
		case 7: pytanie26();
		break;
		case 8: pytanie27();
		break;
		case 9: pytanie28();
		break;
		case 10: pytanie29();
		break;
		
	}
	
}
