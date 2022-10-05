#include <iostream>
#include "Letra.h"

using namespace std;

Letra::Letra(int num) : Tecla(num){
	if (validate(num))
		this->key = (char) num;
	else
		this->key = '\0';
}

Letra::Letra(){}

Letra::Letra(char c){
	if (validate((int) c))
		this->key = c;
}

Letra::~Letra() {
}

inline bool Letra::validate(int num){
	return ((65 <= num && num < 91) || (97 <= num && num < 122));
}

void Letra::setLet(int num){
	if (validate(num))
		this->key = (char) num;
}
