#include <iostream>
#include "Numero.h"

using namespace std;

Numero::Numero(int num){
	if (validate(num))
		this->key = (char) num;
	else
		this->key = '\0';
}

Numero::Numero(){}

Numero::Numero(char c){
	if (validate((int) c))
		this->key = c;
}

Numero::~Numero() {
}

inline bool Numero::validate(int num){
	return (48 <= num && num < 58);
}

void Numero::setNum(int num){
	if (validate(num))
		this->key = (char) num;
}
