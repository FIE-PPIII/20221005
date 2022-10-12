#include <iostream>
#include <list>
#include "Tecla.h"
#include "Numero.h"
#include "Letra.h"

using namespace std;

int main()
{
    cout<<"Hello, world!"<<endl;
	
	list<Tecla> teclas;
	list<Numero> nums;
	for (int i = 0; i < 10; i++)
		nums.push_back(Numero(i+48));
	list<Numero>::iterator itern = nums.begin();
	for (int i = 0; i < nums.size(); i++) {
		cout<<itern.operator*().getKey()<<endl;
		teclas.push_back(*itern);
		itern.operator++();
	}
	
	list<Letra> lets;
	for (int i = 65; i < 123; i++)
		lets.push_back(Letra(i));
	list<Letra>::iterator iterl = lets.begin();
	for (int i = 0; i < lets.size(); i++) {
		cout<<iterl.operator*().getKey()<<endl;
		teclas.push_back(*iterl);
		iterl.operator++();
	}
	
	cout<<endl<<"Start of list<Tecla>"<<endl;
	for (list<Tecla>::iterator it = teclas.begin(); it != teclas.end(); it++)
	    cout<<(*it).getKey()<<endl;
    return 0;
}
