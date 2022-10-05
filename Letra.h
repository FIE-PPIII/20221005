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
		
		void setLet(int);
};


#endif
