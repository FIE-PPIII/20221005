#ifndef _MATEMATICO_H__
#define _MATEMATICO_H__

#include "Simbolo.h"

using namespace std;

class Matematico : public Simbolo {
protected:
	bool validate(int);
	
public:

	Matematico();
	Matematico(int);
	Matematico(char);
	virtual ~Matematico();
	
	virtual char getKey();
};

inline char Matematico::getKey(){
	return this->key;
}

#endif
