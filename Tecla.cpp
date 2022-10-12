#include <iostream>
#include "Tecla.h"

using namespace std;


Tecla::Tecla(){
}

Tecla::~Tecla(){
}

bool Tecla::validate(int num){
    return num >= 0 and num <= 255;
}

char Tecla::getKey(){
    return this->key;
}
