#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <ctime>

using namespace std;
int p = 0;
void punkty()
{
	
}
void pytanie1()
{
	
	int odpowiedz;
	cout<<"Kto zalozyl Google?"<<endl<<"1. Larry Page i Sergey Brin "<<endl<<"2. Steve Jobs i Steve Wozniak"<<endl<<"3. Mark Zuckerberg"<<endl<<"4. Radek Andrzej"<<endl;
	cin>>odpowiedz;
	if (odpowiedz==1)
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie2()
{
	
	int odpowiedz;
	cout<<"Jaka litera odpowiada za podkreslenie tekstu w jêzyku HTML ?"<<endl<<"1. b "<<endl<<"2. i"<<endl<<"3. u"<<endl<<"4. p"<<endl;
	cin>>odpowiedz;
	if (odpowiedz==3)
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie3()
{
	
	int odpowiedz;
	cout<<"Na ktorym serwerze mozna odtworzyc wideo strumieniowane?"<<endl<<"1. YouTube "<<endl<<"2. o2.pl"<<endl<<"3. wp.pl"<<endl<<"4. onet.pl"<<endl;
	cin>>odpowiedz;
	if (odpowiedz==1)
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie4()
{
	
	int odpowiedz;
	cout<<"Najpopularniejszy format plikow muzycznych to:"<<endl<<"1. DOC "<<endl<<"2. AVI"<<endl<<"3. BMP"<<endl<<"4. MP3"<<endl;
	cin>>odpowiedz;
	if (odpowiedz==4)
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie5()
{
	
	int odpowiedz;
	cout<<"Klasa adresów sieci C zaczyna sie liczba:"<<endl<<"1. 12 do 123 "<<endl<<"2. 192 do 223"<<endl<<"3. 1 do 127"<<endl<<"4. 128 do 191"<<endl;
	cin>>odpowiedz;
	if (odpowiedz==2)
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie6()
{
	
	int odpowiedz;
	cout<<"Datagram to?"<<endl<<"1. port komunikacyjny"<<endl<<"2. maska sieci"<<endl<<"3. adres komputera"<<endl<<"4. pakiet danych zaopatrzony w adres"<<endl;
	cin>>odpowiedz;
	if (odpowiedz==4)
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie7()
{
	
	int odpowiedz;
	cout<<"Bit uwierzytelniania ustawiony jest w komunikacie odpowiedzi:"<<endl<<"1. autorytatywnych"<<endl<<"2. rekurencyjnych"<<endl<<"3. iteracyjnych"<<endl<<"4. nieautorytatywnych"<<endl;
	cin>>odpowiedz;
	if (odpowiedz==1)
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie8()
{
	
	int odpowiedz;
	cout<<"Wewnatrz kazdej domeny mozna tworzyc:"<<endl<<"1. poddomeny"<<endl<<"2. minidomeny"<<endl<<"3. subdomeny"<<endl<<"4. indomeny"<<endl;
	cin>>odpowiedz;
	if (odpowiedz==3)
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie9()
{
	
	int odpowiedz;
	cout<<"Numer nadawany interfejsowi sieciowemu to: "<<endl<<"1. adres BC"<<endl<<"2. adres ID"<<endl<<"3. adres PC"<<endl<<"4. adres IP"<<endl;
	cin>>odpowiedz;
	if (odpowiedz==4)
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void pytanie10()
{
	
	int odpowiedz;
	cout<<"Ktory z protokolow uzywa obu protokolow naraz (UDP i TCP)?"<<endl<<"1. IRC"<<endl<<"2. SSH"<<endl<<"3. DNS"<<endl<<"4. SMB"<<endl;
	cin>>odpowiedz;
	if (odpowiedz==4)
	{
		p+=10;
		cout<<"Dobrze!"<<"twoje punkty:"<<p<<endl;
	}
	else cout<<"Zle!"<<endl<<"Twoje Punkty: "<<p<<endl;
}

void informatyka(){
	srand( time( NULL ) );
    int n =( std::rand() % 10 ) + 1;
	switch(n){
		case 1: pytanie1();
		break;
		case 2: pytanie2();
		break;
		case 3: pytanie3();
		break;
		case 4: pytanie4();
		break;
		case 5: pytanie5();
		break;
		case 6: pytanie6();
		break;
		case 7: pytanie7();
		break;
		case 8: pytanie8();
		break;
		case 9: pytanie9();
		break;
		case 10: pytanie10();
		break;
	}
	
}
