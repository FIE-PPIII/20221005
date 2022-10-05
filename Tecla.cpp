#include <iostream>
#include "Tecla.h"

using namespace std;

Tecla::Tecla(int num){
	if (validate(num))
		this->key = (char) num;
	else
		this->key = '\0';
}

Tecla::Tecla(){
}

Tecla::Tecla(char c){
	this->key = c;
}

Tecla::~Tecla(){
}

inline bool Tecla::validate(int num){
	return (0 <= num && num < 256);
}

inline char Tecla::getKey(){
	return this->key;
}
