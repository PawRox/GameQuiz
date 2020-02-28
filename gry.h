#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <ctime>

using namespace std;



void pytanie30()
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

void pytanie31()
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

void pytanie32()
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

void pytanie33()
{
	char odpowiedz;
	cout<<"Jak siê nazywa cz³owiek, który po³¹czy³ siê z Ner'Zulem i sta³ siê Królem Liszem?"<<endl<<"1.Arthas Menetil"<<endl<<"2. Anduin Lothar"<<endl<<"3. Tyrion Fordring "<<endl<<"4. Wszystkie z powyzszych"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='1')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie34()
{
	char odpowiedz;
	cout<<"Dokoñcz cytat: (...) Ale gniew Beliara byl tak wielki, ze...:"<<endl<<"1. Zeslal potezna fale"<<endl<<"2. Pomierzyl on cala ziemie, by zeslac bestie"<<endl<<"3. Uprosil Innosa, by ten zostawi³ czesc swojej mocy na Ziemi"<<endl<<"4. Wszystkie z powyzszych"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='2')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie35()
{
	char odpowiedz;
	cout<<"W jakim przedziale czasowym dzieje siê Europa Universalis IV?"<<endl<<"1.1444-1821"<<endl<<"2. 1400-1800"<<endl<<"3. 1350 - 1850"<<endl<<"4. 1343-1820"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='1')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie36()
{
	char odpowiedz;
	cout<<"Jaki krzew polaczyl groby Tristana i Izoldy?"<<endl<<"1.Isabela"<<endl<<"2. Morrigan"<<endl<<"3. Kartarmona "<<endl<<"4. Aisha"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='2')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie37()
{
	char odpowiedz;
	cout<<"Jak siê nazywa g³ówny bohater gry Bound by Flame?"<<endl<<"1.Gejzer"<<endl<<"2. Jacob"<<endl<<"3. Anton "<<endl<<"4. Wulkan"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='4')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie38()
{
	char odpowiedz;
	cout<<"Czyj¹ zbrojê odnajduje Ezio w Rzymie?"<<endl<<"1.Cezara"<<endl<<"2. Brutusa"<<endl<<"3. Fladiusa "<<endl<<"4. Nie wiem"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='2')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie39()
{
	char odpowiedz;
	cout<<"Jak siê nazywa mod przenosz¹cy akcjê Medievala 2 do realiów Warhammera Fantasy?"<<endl<<"1.Warhammer The End of Time"<<endl<<"2. Call of Warhammer"<<endl<<"3. Warhammer Total War "<<endl<<"4. Nie wiem"<<endl;
	cin>>odpowiedz;
	if (odpowiedz=='2')
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void Gry(){
	srand( time( NULL ) );
    int n =( std::rand() % 10 ) + 1;
	switch(n){
		case 1: pytanie30();
		break;
		case 2: pytanie31();
		break;
		case 3: pytanie32();
		break;
		case 4: pytanie33();
		break;
		case 5: pytanie34();
		break;
		case 6: pytanie35();
		break;
		case 7: pytanie36();
		break;
		case 8: pytanie37();
		break;
		case 9: pytanie38();
		break;
		case 10: pytanie39();
		break;
		}
	}

	

