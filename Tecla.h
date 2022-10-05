#ifndef _TECLA_H__
#define _TECLA_H__

using namespace std;

class Tecla {
protected:
	char key;
	
	virtual bool validate(int);
	
public:
	Tecla(int);
	Tecla();
	Tecla(char);
	virtual ~Tecla();
	
	virtual char getKey();
};

#endif
