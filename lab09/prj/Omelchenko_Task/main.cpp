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
         << " c, d, D - Вихід"   << endl
         << " m - Меню" <<  endl << endl;
}

void s_calcfunction()
{
    double x, y, z;
    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть y: ";
    cin >> y;
    cout << "Введіть z: ";
    cin >> z;
    cout << s_calculation(x, y, z) << endl;
}

void depositfunction()
{
    float summ, month;
    cout << "Введіть суму депозиту ";
    cin >> summ;
    cout << "Ввндіть строк: ";
    cin >> month;
    cout << "Сума за мiсяць: " << deposit(summ, month) << endl;
}

void bofortfunction()
{
    float viter [31];
    for(int i = 0; i < 31; i++)
    {
        cin >> viter[i];
    }
    cout << "Бал бофорта - " <<  bofort(viter) << endl;
}

void bitfunction()
{
    int num;
    cout << "Введіть натуральне число (0 - 9008000): " << endl;
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

    cout << "Нажміть клавішу: ";
    cin >> symbol;
    }
    return 0;
}
