#ifndef _SIMBOLO_H__
#define _SIMBOLO_H__

#include "Tecla.h"

using namespace std;

class Simbolo : public Tecla {
protected:
	virtual bool validate(int);
	
public:

	Simbolo();
	virtual ~Simbolo();
	
	virtual char getKey();
};

inline char Simbolo::getKey(){
	return this->key;
}

#endif
