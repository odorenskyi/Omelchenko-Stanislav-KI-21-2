#include <iostream>
#include <conio.h>
#include "ModulesOmelchenko.h"

using namespace std;

void menu()
{
     setlocale(LC_ALL, "");
    cout << " k - s_calculation" << endl
         << " h - Task 9.1"      << endl
         << " g - Task 9.2"      << endl
         << " f - Task 9.3"      << endl
         << " c, d, D - ¬ихiд"   << endl
         << " m - ћеню" <<  endl << endl;
}

void s_calcfunction()
{
    double x, y, z;
    cout << "¬ведiть x: ";
    cin >> x;
    cout << "¬ведiть y: ";
    cin >> y;
    cout << "¬ведiть z: ";
    cin >> z;
    cout << s_calculation(x, y, z) << endl;
}

void depositfunction()
{
    float summ, month;
    cout << "¬ведiть суму депозиту: ";
    cin >> summ;
    cout << "¬ведiть строк: ";
    cin >> month;
    cout << "—ума котру потрiбно сплатити за мiс€ць: " << deposit(summ, month) << endl;
}

void bofortfunction()
{
    float viter [31];
    for(int i = 0; i < 31; i++)
    {
        cin >> viter[i];
    }
    cout << "Ѕал бофорта - " <<  bofort(viter) << endl;
}

void bitfunction()
{
    int num;
    cout << "¬ведiть натуральне число (0 - 9008000): " << endl;
    cin >> num;
    cout << bitnum(num) << endl;
}

int main()
{
    char symbol = 'm';
    while (1)
    {
    if (symbol == 'm')
            menu();
    if (symbol == 'c')
            break;
    if (symbol == 'd')
            break;
    if (symbol == 'D')
            break;
    if (symbol == 'k')
            s_calcfunction();
    if (symbol == 'g')
            bofortfunction();
    if (symbol == 'h')
            depositfunction();
    if (symbol == 'f')
            bitfunction();

    cout << "Ќатиснiть клавiшу: ";
    cin >> symbol;
    }
    return 0;
}
