#ifndef LEDdigits_h
#define LEDdigits_h
#define COMMON_ANODE 0
#define COMMON_CATHODE 1

#include<Arduino.h>

class LEDdigits{
    private:
        int pinA; int pinB; int pinC; int pinD;
        int pinE; int pinF; int pinG; int period;
        int D1;   int D2;   int D3;   int D4;
        int mode;

    public:
        LEDdigits(int mode1,int a,int b,int c,int d, int e,int f, int g,int period ,int d1,int d2,int d3,int d4);
        LEDdigits(int mode1,int a, int b, int c, int d, int e, int f, int g, int period);
        void setPins(int=4);
        void digit(int);
        void display(int);
};


#endif