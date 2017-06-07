#ifndef classic_H_
#define classic_H_
#include <iostream>
class Cd {
private:
	char performers [50];
	char label [20];
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd();
	virtual ~Cd() {};
	virtual void Report () const;
};

class Classic : public Cd
{
private:
	char primary [100];
public:
	Classic(char * p, char * s1, char * s2, int n, double x);
	Classic();
	virtual ~Classic() {};
	virtual void Report () const;
};

#endif
