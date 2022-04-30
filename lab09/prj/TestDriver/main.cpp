#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdio>
#include <windows.h>
#include <bitset>
#include "ModulesOmelchenko.h"

using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Task 9.1" << endl;
   double input[3][2] = {1000,    6,
                         6000,    12,
                         2500,    12};

    double result[3] = {26.666666,
                        90,
                        37.5};

    for (int i = 0; i < 3; i++)
    {
        cout << "TC_" << i+1 << ":";
        if ((round(deposit(input[i][0], input[i][1])*1000000)/1000000.0 == result[i]))
            {
                cout << "PASSED" << endl;
            }
        else
                cout << "FAILED";
    }

    cout << "Task 9.2" << endl;
    float inpt[31][3] = {0,  3,   1,
                        0.2, 0.1, 3,
                        0.6, 2,   6.1,
                        1,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 7.1,
                        0,   2,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   2,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   1,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   3,   1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   1.3, 1,
                        0.2, 0.1, 3,
                        0.6, 2.5, 6.1,
                        0,   1.6, 1,
                        0.2, 0.1, 3,
                        0.5, 3.2, 1.5,
                        0.6, 2.5, 6.1};

    short expected[3] {1, 2, 4};
    for(int i = 0; i < 3; i++)
    {
        float test[31];
        for(int t = 0; t < 31; t++)
        {
            test[i] = inpt[t][i];
        }
        if (expected[i] == bofort(test))
        {
            cout <<"TC_" << i+1;
            cout <<":PASSED" << endl;
        }
        else
        {
            cout << "TC_" << i+1;
            cout <<":FAILED" << endl;
        }

    }
    cout <<"Task 9.3" << endl;
    int inputs[3] {871365, 777999, 10007993};
    int outp[3] {21, 18, 13};
    for (int i = 0; i < 3; i ++)
    {
        if (bitnum(inputs[i]) == outp[i])
        {

            cout <<"TC_" << i+1;
            cout <<":PASSED" << endl;
        }
        else
        {
            cout <<"TC_" << i+1;
            cout <<":FAILED" << endl;
        }
    }
    return 0;
}


