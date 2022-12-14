#ifndef _NUMERO_H__
#define _NUMERO_H__

#include "Tecla.h"

using namespace std;

class Numero : public Tecla {
	protected:
		int num;
		
		virtual bool validate(int);
	public:
		Numero(int);
		Numero();
		Numero(char);
		virtual ~Numero();
		
		void setNum(int);
};


#endif
