#include <iostream>
#include "Tecla.h"
#include "Numero.h"

using namespace std;

int main()
{
    cout<<"Hello, world!"<<endl;
    
    Numero nums[10];
    for (int i = 0; i < 10; i++)
    	nums[i].setNum(i+48);
    	
    for (int i = 0; i < 10; i++)
		cout<<nums[i].getKey()<<endl;
    return 0;
}
