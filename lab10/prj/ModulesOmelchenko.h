#ifndef MODULESOMELCHENKO_H_INCLUDED
#define MODULESOMELCHENKO_H_INCLUDED

#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdio>
#include <windows.h>
#include <bitset>

using namespace std;

float s_calculation(float x, float y, float z)
{
    return 0.5 * ( pow (x,2)) - sqrt(abs(((pow((y+z),2)) - (pow(x,5)) ))) - log(abs(sin(z)));
}

float deposit(float summ, short months)
{
    float monthly, a;

    if(months == 6)
    {
        a = (summ*16)/100;
        monthly = a/6;
    }
    if (months == 12)
    {
        a = (summ*18)/100;
        monthly = a/12;
    }
    return monthly;
}

short int bofort(float viter[31]){
    float max = viter[0];
    for(int i = 1;i<31;i++){
        if (viter[i] > max){
            max = viter[i];
        }
    }
    if (max < 0.3){
        return 0;
    }
    else if (max < 1.5){
        return 1;
    }
    else if (max < 3.4){
        return 2;
    }
    else if (max < 5.4){
        return 3;
    }
    else if (max < 7.9){
        return 4;
    }
    else if (max < 10.7){
        return 5;
    }
    else if (max < 13.8){
        return 6;
    }
    else if (max < 17.1){
        return 7;
    }
    else if (max < 20.7){
        return 8;
    }
    else if (max < 24.4){
        return 9;
    }
    else if (max < 28.4){
        return 10;
    }
    else if (max < 32.6){
        return 11;
    }
    else {
        return 12;
    }
}

int bitnum(int num)
{
    bitset<32> b_number(num);
    if(b_number[13])
    {
        return b_number.count();
    }
    return 32 - b_number.count();
}

#endif // MODULESOMELCHENKO_H_INCLUDED
