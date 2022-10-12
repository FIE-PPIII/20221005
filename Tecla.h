#ifndef _TECLA_H__
#define _TECLA_H__

using namespace std;

class Tecla {
protected:
	char key;
	
	virtual bool validate(int);
	
public:

	Tecla();
	virtual ~Tecla();
	
	virtual char getKey();
};

#endif
