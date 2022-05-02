#include <iostream>
#include "ModulesOmelchenko.h"
#include <clocale>
#include <iomanip>
#include <conio.h>
#include <cstring>

using namespace std;

void copyright()
{
    cout << "© Омельченко Станіслав" << endl << endl;
}

void res ()
{
    int  a = 0,b = 0;
    if (a + 1 <= b){
        cout <<"Результат виразу 1"<<endl;
    }
    else {
        cout <<"Результат виразу 0"<<endl;
    }

}
void decimalHexNumbersOutput(int x, int y, int z){



    cout << "x В десятковій: " << dec << x << "\t x В шістнадцятковій: " << hex << x << endl;
    cout << "y В десятковій: " << dec << y << "\t y В шістнадцятковій: " << hex << y << endl;
    cout << "z В десятковій: " << dec << z << "\t z В шістнадцятковій: " << hex << z << endl << endl;


}

int main()
{
    system("chcp 866 && cls");
    copyright();
    float x ,y ,z ;
    int  a = 0,b = 0;
    cout << "Введіть x" << endl;
    cin >> x;
    cout << "Введіть y" << endl;
    cin >> y;
    cout << "Введіть z" << endl;
    cin >> z;
    cout << "Введіть a" << endl;
    cin >> a ;
    cout << "Введіть b" << endl;
    cin >> b;
    cout <<"S = "<< s_calculation(x, y, z)<< endl;
    res();
    decimalHexNumbersOutput(x, y, z);
    cout << endl << "Результат виразу: " << s_calculation(x, y, z);
    getch();
    return 0;
}
