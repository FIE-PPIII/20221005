#ifndef _LETRA_H__
#define _LETRA_H__

#include "Tecla.h"

using namespace std;

class Letra : public Tecla {
	protected:
		
		virtual bool validate(int);
	public:
		Letra(int);
		Letra();
		Letra(char);
		virtual ~Letra();
		
		char getKey();
		void setLet(int);
};


inline char Letra::getKey(){
	return this->key;
}

#endif
