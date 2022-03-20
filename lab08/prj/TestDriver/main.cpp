#include <iostream>
#include <cmath>
#include "ModulesOmelchenko.h"

using namespace std;

int main()
{
   system("chcp 1251 && cls");

    float possibleresult[5] = {1.1438 , -55767.2244 , -75.9464 , -23.3496 , -7.9294};

    float x[5] = {3,81,4,6,3};
    float y[5] = {6,2,89,4,3};
    float z[5] = {9,6,1,94,3};

    for (short int i = 0; i < 5; i++)
    {
        if (round (s_calculation(x[i], y[i], z[i])*10000/10000.0 == possibleresult[i]))
        {
            cout << "Test ¹[" << i + 1 << "]: passed\n";
        }
        else
        {
            cout << "Test ¹[" << i + 1 << "]: failed\n";
        }
    }

}

