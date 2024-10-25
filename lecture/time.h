// specification file (time.h)

class Time
{
    public:
        void Set(int h, int m, int s);
        // protected si on a une class qui dérive de celle où y'a la protecred elle peux y acceder mais private non
        void Increment();
        void Write() const;
        Time(int initH, int initM, int initS); // constructor
        // protected si on a une class qui dérive de celle où y'a la protecred elle peux y acceder mais private non
        Time(); // default constructor
    
    protected:
        int hrs;
        int mins;
        int secs;
};
