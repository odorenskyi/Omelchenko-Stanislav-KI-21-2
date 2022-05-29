
#include <iostream>
#include <cstring>
#include <conio.h>
#include <iomanip>

#include "ModulesOmelchenko.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    const string inputWordsArray[5] = {"щастить", "теплі", "притуля", "вітерцю", "птахам"};
    int Ammount[5] = {7, 5, 7, 7, 6};
    const float sCalcX[5] = {4,4,3};
    const float sCalcY[5] = {7,8,6};
    const float sCalcZ[5] = {2,2,1};
    int b [5] = {14, 52, 36};
    double expb [3] = {1110,110100,100100};
    const double expectedResult[5] = {-22.6132 , -22.3023 , -9.2558};

    for(int i = 0; i < 5; i++) {
        cout << boolalpha
             << "Word - "
             << fillInputTxtFile("prjInputFile.txt", inputWordsArray[i])
             << endl;
        cout <<"-------------" << endl;
        cout << boolalpha
             << "10.1(1) - "
             << authorInfo("prjOutputFile.txt")
             << endl;
        cout << boolalpha
             << "10.1(2) - "
             << (Amount("prjOutputFile.txt", inputWordsArray[i]) == Ammount[i])
             << endl;
        cout << boolalpha
             << "Astronaut - "
             << astronaut("prjInputFile.txt", inputWordsArray[i])
             << endl;
        cout << boolalpha
             << "10.1(3) - "
             << findWordInPoem("prjOutputFile.txt", inputWordsArray[i])
             << endl;
        cout <<"-------------" << endl;
        cout << boolalpha
             << "10.2(1) - "
             << poem("prjInputFile.txt")
             << endl;
        cout << boolalpha
             << "10.2(2) - "
             << timestampInFile("prjInputFile.txt")
             << endl;
        cout <<"-------------" << endl;
        cout << boolalpha
             << "10.3(1) - "
             << (sCalculationResInFile("prjOutputFile.txt", sCalcX[i], sCalcY[i], sCalcZ[i]) <= expectedResult[i] + 0.005)
             << endl;
        cout << boolalpha
             << "10.3(2) - "
             << (decimalToBinary("prjOutputFile.txt", b[i]) <= expb[i])
             << endl;
        cout <<"-------------" << endl;

        _getch();
    }
    return 0;
}
