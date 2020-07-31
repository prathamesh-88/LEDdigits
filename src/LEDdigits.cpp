#include <Arduino.h>
#include <LEDdigits.h>

LEDdigits :: LEDdigits(int a, int b, int c, int d, int e, int f, int g,int periodf, int d1, int d2, int d3, int d4){
    pinA = a; pinB = b; pinC = c; pinD = d;
    pinE = e; pinF = f; pinG = g; period = periodf;
    D1 = d1; D2 = d2;D3 = d3; D4 = d4;
}

LEDdigits ::LEDdigits(int a, int b, int c, int d, int e, int f, int g, int periodf, int d1)
{
    pinA = a; pinB = b; pinC = c; pinD = d;period = periodf;
    pinE = e; pinF = f; pinG = g; D1 = d1;
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
    pinMode(D1, OUTPUT);
    if(n==4){
        pinMode(D2, OUTPUT);
        pinMode(D3, OUTPUT);
        pinMode(D4, OUTPUT);
    }
}

void LEDdigits :: digit(int n){
    switch (n)
    {
    case 1:
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, HIGH);
        digitalWrite(period,HIGH);
        break;
    case 2:
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, HIGH);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, LOW);
        digitalWrite(period, HIGH);
        break;

    case 3:
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, HIGH);
        digitalWrite(pinG, LOW);
        digitalWrite(period, HIGH);
        break;
    case 4:
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, HIGH);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
        digitalWrite(period, HIGH);
        break;

    case 5:
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, HIGH);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
        digitalWrite(period, HIGH);
        break;

    case 6:
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, HIGH);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
        digitalWrite(period, HIGH);
        break;

    case 7:
        digitalWrite(pinA,LOW);
        digitalWrite(pinB,LOW);
        digitalWrite(pinC,LOW);
        digitalWrite(pinD,HIGH);
        digitalWrite(pinE,HIGH);
        digitalWrite(pinF,HIGH);
        digitalWrite(pinG,HIGH);
        digitalWrite(period, HIGH);
        break;
    case 8:
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
        digitalWrite(period, HIGH);
        break;

    case 9:
        digitalWrite(pinA,LOW);
        digitalWrite(pinB,LOW);
        digitalWrite(pinC,LOW);
        digitalWrite(pinD,HIGH);
        digitalWrite(pinE,HIGH);
        digitalWrite(pinF,LOW);
        digitalWrite(pinG,LOW);
        digitalWrite(period, HIGH);
        break;
    case 0:
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, HIGH);
        digitalWrite(period, HIGH);
        break;

    default:
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, LOW);
        digitalWrite(pinC, LOW);
        digitalWrite(pinD, LOW);
        digitalWrite(pinE, LOW);
        digitalWrite(pinF, LOW);
        digitalWrite(pinG, LOW);
        digitalWrite(period, HIGH);
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