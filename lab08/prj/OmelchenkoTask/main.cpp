#include <iostream>
#include "ModulesOmelchenko.h"

using namespace std;

void copyrightsign()
{
    cout << "© Îìåëü÷åíêî Ñòàí³ñëàâ" << endl << endl;
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
    cout << "(x) â äåñÿòêîâ³é ñèñòåì³ ÷èñëåííÿ: " << x << endl
         << "(y) â äåñÿòêîâ³é ñèñòåì³ ÷èñëåííÿ: " << y << endl
         << "(z) â äåñÿòêîâ³é ñèñòåì³ ÷èñëåííÿ: " << z << endl << endl;

    cout << "(x) â ø³ñòíàöÿòêîâ³é ñèñòåì³ ÷èñëåííÿ: " << hex << x << endl
         << "(y) â ø³ñòíàöÿòêîâ³é ñèñòåì³ ÷èñëåííÿ: " << hex << y << endl
         << "(z) â ø³ñòíàöÿòêîâ³é ñèñòåì³ ÷èñëåííÿ: " << hex << z << endl;
}

int main()
{
    system("chcp 866 && cls");
    copyrightsign();
    int x = 0,y = 0,z = 0;
    int  a ,b ;
    cout << "Çàäàéòå çíà÷åííÿ: x" << endl;
    cin >> x;
    cout << "Çàäàéòå çíà÷åííÿ: y" << endl;
    cin >> y;
    cout << "Çàäàéòå çíà÷åííÿ: z" << endl;
    cin >> z;
    cout << "Çàäàéòå çíà÷åííÿ: a" << endl;
    cin >> a ;
    cout << "Çàäàéòå çíà÷åííÿ: b" << endl;
    cin >> b ;
    cout <<"S = "<< s_calculation(x,y,z)<< endl;
    expression();
    DH(x,y,z);
    return 0;
}
