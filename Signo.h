#ifndef _SIGNO_H__
#define _SIGNO_H__

#include "Simbolo.h"

using namespace std;

class Signo : public Simbolo {
protected:
	bool validate(int);
	
public:

	Signo();
	Signo(int);
	Signo(char);
	virtual ~Signo();
	
	virtual char getKey();
};

inline char Signo::getKey(){
	return this->key;
}

#endif
