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
         << " c, d, D - Âèõiä"   << endl
         << " m - Ìåíþ" <<  endl << endl;
}

void s_calcfunction()
{
    double x, y, z;
    cout << "Ââåäiòü x: ";
    cin >> x;
    cout << "Ââåäiòü y: ";
    cin >> y;
    cout << "Ââåäiòü z: ";
    cin >> z;
    cout << s_calculation(x, y, z) << endl;
}

void depositfunction()
{
    float summ, month;
    cout << "Ââåäiòü ñóìó äåïîçèòó: ";
    cin >> summ;
    cout << "Ââåäiòü ñòðîê: ";
    cin >> month;
<<<<<<< HEAD
    cout << "���� �� �i����: " << deposit(summ, month) << endl;
=======
    cout << "Сума за мiсяць: " << deposit(summ, month) << endl;
>>>>>>> 1d4484dc01fab1f90e852792320d770e96700d02
}

void bofortfunction()
{
    float viter [31];
    for(int i = 0; i < 31; i++)
    {
        cin >> viter[i];
    }
    cout << "Áàë áîôîðòà - " <<  bofort(viter) << endl;
}

void bitfunction()
{
    int num;
    cout << "Ââåäiòü íàòóðàëüíå ÷èñëî (0 - 9008000): " << endl;
    cin >> num;
    cout << bitnum(num) << endl;
}

int main()
{
    system("chcp 866 && cls");
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

    cout << "Íàòèñíiòü êëàâiøó: ";
    cin >> symbol;
    }
    return 0;
}
