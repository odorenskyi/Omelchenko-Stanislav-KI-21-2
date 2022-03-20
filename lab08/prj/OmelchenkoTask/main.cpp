#include <iostream>
#include "ModulesOmelchenko.h"

using namespace std;

void copyrightsign()
{
    cout << "© Омельченко Станіслав" << endl << endl;
}
void expression ()
{
    int  a ,b ;
    if (a + 1 <= b){
        cout <<"1"<<endl;
    }
    else {
        cout <<"0"<<endl;
    }

}
void DH(int x, int y, int z){
    cout << "(x) в десятковій системі числення: " << x << endl
         << "(y) в десятковій системі числення: " << y << endl
         << "(z) в десятковій системі числення: " << z << endl << endl;

    cout << "(x) в шістнацятковій системі числення: " << hex << x << endl
         << "(y) в шістнацятковій системі числення: " << hex << y << endl
         << "(z) в шістнацятковій системі числення: " << hex << z << endl;
}

int main()
{
    system("chcp 1251 && cls");
    copyrightsign();
    int x = 0,y = 0,z = 0;
    int  a ,b ;
    cout << "Задайте значення: x" << endl;
    cin >> x;
    cout << "Задайте значення: y" << endl;
    cin >> y;
    cout << "Задайте значення: z" << endl;
    cin >> z;
    cout << "Задайте значення: a" << endl;
    cin >> a ;
    cout << "Задайте значення: b" << endl;
    cin >> b ;
    cout <<"S = "<< s_calculation(x,y,z)<< endl;
    expression();
    DH(x,y,z);
    return 0;
}
