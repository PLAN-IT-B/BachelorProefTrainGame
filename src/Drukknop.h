#ifndef Drukknop_h
#define Drukknop_h

// verbindingen:
// GND -> GND
// +5V -> 3V3
// VRX -> 13
// VRY -> 12
// SW  -> 14

class Drukknop{
    private:
     const double afstand_deadzone= 1000;

    public:
        Drukknop();
        int bepaalZone(int x, int y);
        bool deadZone(int x, int y);
};
#endif