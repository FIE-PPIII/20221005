#include <iostream>
#include <list>
#include "Tecla.h"
#include "Numero.h"

using namespace std;

int main()
{
    cout<<"Hello, world!"<<endl;
	
	list<Numero> nums;
	for (int i = 0; i < 10; i++)
		nums.push_back(Numero(i+48));
	list<Numero>::iterator iter = nums.begin();
	for (int i = 0; i < nums.size(); i++) {
		cout<<iter.operator*().getKey()<<endl;
		iter.operator++();
	} 
    return 0;
}
