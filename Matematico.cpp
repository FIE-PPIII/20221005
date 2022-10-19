#include <iostream>
#include "Matematico.h"

using namespace std;

Matematico::Matematico(int num) : Simbolo(){
	if (validate(num))
		this->key = (char) num;
	else
		this->key = '\0';
}

Matematico::Matematico() : Simbolo(){
	this->key = '\0';
}

Matematico::Matematico(char c) : Simbolo(){
	if (validate((int) c))
		this->key = c;
}

Matematico::~Matematico(){
}

bool Matematico::validate(int num){
	return (40 <= num && num <= 47) || (60 <= num && num <= 62);
}
