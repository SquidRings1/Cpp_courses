#include <iostream>
#include <string.h>

using namespace std;

// diff type de constructor dans une classe qui vont avoir des param diff...
class Str
{
    char *pData;
    int nLenght;
    public:
        // constructors
        Str();
        Str(char *s);
        Str(const Str &str);

        // accessors
        char* get_Data();
        int get_Len();

        // destructor
        ~Str();
};

Str::Str()
{
    pData = new char[1];
    *pData = '\0';
    nLenght = 0;
};

Str::Str(char *s)
{
    pData = new char[strlen(s) + 1];
    strcpy(pData, s);
    nLenght = strlen(s);
};

Str::Str(const Str &str)
{
    int n = str.nLenght;
    pData = new char[n+1];
    nLenght = n;
    strcpy(pData, str.pData);
};
