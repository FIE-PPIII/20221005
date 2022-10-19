#include <iostream>
#include "Signo.h"

using namespace std;

Signo::Signo(int num) : Simbolo(){
	if (validate(num))
		this->key = (char) num;
	else
		this->key = '\0';
}

Signo::Signo() : Simbolo(){
	this->key = '\0';
}

Signo::Signo(char c) : Simbolo(){
	if (validate((int) c))
		this->key = c;
}

Signo::~Signo(){
}

bool Signo::validate(int num){
	return (32 <= num && num <= 39) || (58 <= num && num <= 59) || (63 <= num && num <= 64) || (91 <= num && num <= 96) || (123 <= num && num <= 126);
}
