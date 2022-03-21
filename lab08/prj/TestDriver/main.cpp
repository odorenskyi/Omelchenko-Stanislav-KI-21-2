#include <iostream>
#include <cmath>
#include "ModulesOmelchenko.h"

using namespace std;

int main()
{
   system("chcp 1251 && cls");

    float possibleresult[5] = {-22.6132 , -22.3023 , -9.2558 , -21.0049 , -10.6245};

    float x[5] = {4,4,3,6,3};
    float y[5] = {7,8,6,3,2};
    float z[5] = {2,2,1,94,1};

    for (short int i = 0; i < 5; i++)
    {
         cout << round(s_calculation(x[i], y[i], z[i])10000)/10000.0 << endl;
         if (round(s_calculation(x[i], y[i], z[i])10000)/10000.0 == round(possibleresult[i]*10000)/10000.0)
            {
            cout << "TEST №[" << i + 1 << "]: PASSED\n";
        }
        else
        {
            cout << "TEST №[" << i + 1 << "]: FAILED\n";
        }
    }

}
