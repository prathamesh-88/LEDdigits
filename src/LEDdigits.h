#ifndef LEDdigits_h
#define LEDdigits_h

#include<Arduino.h>

class LEDdigits{
    private:
        int pinA;
        int pinB;
        int pinC;
        int pinD;
        int pinE;
        int pinF;
        int pinG;
        int period;
        int D1;
        int D2;
        int D3;
        int D4;
    public:
        LEDdigits(int a,int b,int c,int d, int e,int f, int g,int period ,int d1,int d2,int d3,int d4);
        LEDdigits(int a, int b, int c, int d, int e, int f, int g, int period, int d1);
        void setPins(int);
        void digit(int);
        void display(int);
};


#endif