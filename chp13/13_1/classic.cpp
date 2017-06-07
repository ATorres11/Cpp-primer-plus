#include "classic.h"
using namespace std;

Cd::Cd(char * s1, char * s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label,s2);
	selections = n;
    playtime = x;
}

Cd::Cd()
{
    performers[0] = NULL;
    label[0] = NULL;
    selections = 0;
    playtime = 0;
}

void Cd::Report() const
{
	cout << "performers: " << performers << endl;
    cout << "label: " << label << endl;
	cout << "selections: " << selections << endl;
    cout << "playtime: " << playtime << endl;
}

Classic::Classic(char * p, char * s1, char * s2, int n, double x) : Cd(s1, s2, n, x)
{
	strcpy(primary, p);

}

Classic::Classic()  
{
    primary[0] = NULL;
}

void Classic::Report() const
{
    Cd::Report();
    cout << "primary: " << primary << endl;
}
