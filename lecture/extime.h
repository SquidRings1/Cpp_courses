// SPECIFICATION FILE (exttime.h)
#include "time.h"
enum ZoneType {EST, CST, MST, PST, EDT, CDT, MDT, PDT } ;
class ExtTime: public Time        
// Time is the base class and use public inheritance
{
    public :
        void Set(int h, int m, int s, ZoneType timeZone) ;       
        void Write() const; // overridden    
        ExtTime(int initH, int initM, int initS, ZoneType initZone) ;   
        ExtTime(); // default constructor
    private :    
        ZoneType  zone ; //  added data member
}; 
