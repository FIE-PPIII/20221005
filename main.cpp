#include <iostream>
#include <list>
#include "Tecla.h"
#include "Numero.h"
#include "Letra.h"
#include "Signo.h"
#include "Matematico.h"

using namespace std;

int main()
{
    cout<<"Hello, world!"<<endl;
	
	list<Tecla> teclas;
	teclas.push_back(Letra(65));
	teclas.push_back(Numero('7'));
	teclas.push_back(Signo('{'));
	teclas.push_back(Matematico(43));
	
	for (list<Tecla>::iterator it = teclas.begin(); it != teclas.end(); it++)
		cout<<(*it).getKey()<<endl;
	
    return 0;
}
