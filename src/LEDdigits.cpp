#include <Arduino.h>
#include <LEDdigits.h>
#define COMMON_ANODE  0
#define COMMON_CATHODE  1

LEDdigits :: LEDdigits(int mode1,int a, int b, int c, int d, int e, int f, int g,int periodf, int d1, int d2, int d3, int d4){
    pinA = a; pinB = b; pinC = c; pinD = d;
    pinE = e; pinF = f; pinG = g; period = periodf;
    D1 = d1; D2 = d2;D3 = d3; D4 = d4;mode=mode1; 
}

LEDdigits ::LEDdigits(int mode1,int a, int b, int c, int d, int e, int f, int g, int periodf)
{
    pinA = a; pinB = b; pinC = c; pinD = d;period = periodf;
    pinE = e; pinF = f; pinG = g; mode = mode1;

}

void LEDdigits :: setPins(int n = 4){
    pinMode(pinA, OUTPUT);
    pinMode(pinB, OUTPUT);
    pinMode(pinC, OUTPUT);
    pinMode(pinD, OUTPUT);
    pinMode(pinE, OUTPUT);
    pinMode(pinF, OUTPUT);
    pinMode(pinG, OUTPUT);
    pinMode(period,OUTPUT);
    if(n==4){
        pinMode(D1, OUTPUT);
        pinMode(D2, OUTPUT);
        pinMode(D3, OUTPUT);
        pinMode(D4, OUTPUT);
    }
}

void LEDdigits :: digit(int n){
    switch (n)
    {
    case 1:
        digitalWrite(pinA, !mode);
        digitalWrite(pinB, !mode);
        digitalWrite(pinC, !mode);
        digitalWrite(pinD, !mode);
        digitalWrite(pinE, mode);
        digitalWrite(pinF, mode);
        digitalWrite(pinG, !mode);
        digitalWrite(period,!mode);
        break;
    case 2:
        digitalWrite(pinA, mode);
        digitalWrite(pinB, mode);
        digitalWrite(pinC, !mode);
        digitalWrite(pinD, mode);
        digitalWrite(pinE, mode);
        digitalWrite(pinF, !mode);
        digitalWrite(pinG, mode);
        digitalWrite(period, !mode);
        break;

    case 3:
        digitalWrite(pinA, mode);
        digitalWrite(pinB, mode);
        digitalWrite(pinC, mode);
        digitalWrite(pinD, mode);
        digitalWrite(pinE, !mode);
        digitalWrite(pinF, !mode);
        digitalWrite(pinG, mode);
        digitalWrite(period, !mode);
        break;
    case 4:
        digitalWrite(pinA, !mode);
        digitalWrite(pinB, mode);
        digitalWrite(pinC, mode);
        digitalWrite(pinD, !mode);
        digitalWrite(pinE, !mode);
        digitalWrite(pinF, mode);
        digitalWrite(pinG, mode);
        digitalWrite(period, !mode);
        break;

    case 5:
        digitalWrite(pinA, mode);
        digitalWrite(pinB, !mode);
        digitalWrite(pinC, mode);
        digitalWrite(pinD, mode);
        digitalWrite(pinE, !mode);
        digitalWrite(pinF, mode);
        digitalWrite(pinG, mode);
        digitalWrite(period, !mode);
        break;

    case 6:
        digitalWrite(pinA, mode);
        digitalWrite(pinB, !mode);
        digitalWrite(pinC, mode);
        digitalWrite(pinD, mode);
        digitalWrite(pinE, mode);
        digitalWrite(pinF, mode);
        digitalWrite(pinG, mode);
        digitalWrite(period, !mode);
        break;

    case 7:
        digitalWrite(pinA,mode);
        digitalWrite(pinB,mode);
        digitalWrite(pinC,mode);
        digitalWrite(pinD,!mode);
        digitalWrite(pinE,!mode);
        digitalWrite(pinF,!mode);
        digitalWrite(pinG,!mode);
        digitalWrite(period, !mode);
        break;
    case 8:
        digitalWrite(pinA, mode);
        digitalWrite(pinB, mode);
        digitalWrite(pinC, mode);
        digitalWrite(pinD, mode);
        digitalWrite(pinE, mode);
        digitalWrite(pinF, mode);
        digitalWrite(pinG, mode);
        digitalWrite(period, !mode);
        break;

    case 9:
        digitalWrite(pinA,mode);
        digitalWrite(pinB,mode);
        digitalWrite(pinC,mode);
        digitalWrite(pinD,!mode);
        digitalWrite(pinE,!mode);
        digitalWrite(pinF,mode);
        digitalWrite(pinG,mode);
        digitalWrite(period, !mode);
        break;
    case 0:
        digitalWrite(pinA, mode);
        digitalWrite(pinB, mode);
        digitalWrite(pinC, mode);
        digitalWrite(pinD, mode);
        digitalWrite(pinE, mode);
        digitalWrite(pinF, mode);
        digitalWrite(pinG, !mode);
        digitalWrite(period, !mode);
        break;

    default:
        digitalWrite(pinA, mode);
        digitalWrite(pinB, mode);
        digitalWrite(pinC, mode);
        digitalWrite(pinD, mode);
        digitalWrite(pinE, mode);
        digitalWrite(pinF, mode);
        digitalWrite(pinG, mode);
        digitalWrite(period, mode);
        break;
    }
}

void LEDdigits :: display(int n){
    switch (n)
    {
    case 1:
        digitalWrite(D1, HIGH);
        digitalWrite(D2, LOW);
        digitalWrite(D3, LOW);
        digitalWrite(D4, LOW);
        break;
    
    case 2:
        digitalWrite(D1, LOW);
        digitalWrite(D2, HIGH);
        digitalWrite(D3, LOW);
        digitalWrite(D4, LOW);
        break;

    case 3:
        digitalWrite(D1, LOW);
        digitalWrite(D2, LOW);
        digitalWrite(D3, HIGH);
        digitalWrite(D4, LOW);
        break;

    case 4:
        digitalWrite(D1, LOW);
        digitalWrite(D2, LOW);
        digitalWrite(D3, LOW);
        digitalWrite(D4, HIGH);
        break;

    default:
        break;
    }
}