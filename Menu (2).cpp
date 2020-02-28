#include <iostream>
#include "informatyka.h"
#include "Ksiazki.h"
#include "gry.h"
#include "Filmy.h"
#include <string>
using namespace std;
void menu()
{
	char wybor=0 ;
	int l = 0;
	
cout<<"Podaj kategorie: "<<endl<<"1. Informatyka: "<<endl<<"2.Ksiazki: "<<endl<<"3.Filmy i seriale:"<<endl<<"4.Gry: "<<endl<<"5.Wyjœcie "<<endl<<"Twoje Punkty:"<<p<<endl;
	cin>>wybor;
	cout<<endl<<endl;
	
	switch(wybor){
		case '1':
		{
			
			while (l!=10)
			{
			informatyka();
			l+=1;
			}			
			
			menu();
		}
		case '2':
		{
			while (l!=10)
			{
			Ksiazki();
			l+=1;
			}				
			menu();
			cout<<"Twoje Punkty:"<<p<<endl;
		}
		case '3':
		{
			while (l!=10)
			{
			Filmy();
			l+=1;
			}				
			menu();
			cout<<"Twoje Punkty:"<<p<<endl;
		}
		case '4':
		{
			if(p>=100)
			{
				p-=100;
			while (l!=10)
			{
			Gry();
			l+=1;
			}				
			menu();
			cout<<"Twoje Punkty:"<<p<<endl;
			}
			else 
			{
			cout<<"masz za malo punktow. Brakuje:"<<100-p<<endl;
			menu();
			}
		
		}
		case '5':
		{
			cout<<"Narazie "<<endl<<endl;
			exit (0);
		}
		default:
			{
				cout<<"Podaj inna cyfra "<<endl<<endl;
				menu();
				wybor = 0;
				break;
			}
	
}
}



int main()
{
	menu();
}


