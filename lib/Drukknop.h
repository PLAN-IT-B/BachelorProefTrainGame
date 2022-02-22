#ifndef Drukknop_h
#define Drukknop_h


class Drukknop{
    private:
     const double afstand_deadzone= 1000;

    public:
        Drukknop();
        int bepaalZone(int x, int y);
        bool deadZone(int x, int y);
};
#endif