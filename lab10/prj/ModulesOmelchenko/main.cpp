#include <iostream>
#include <fstream>
#include <time.h>
#include <cstring>
#include <math.h>
#include <tgmath.h>
#include <windows.h>
#include <string>
#include <bitset>
#include <fstream>

using namespace std;

float s_calculation(float x, float y, float z)
{
    return 0.5 * ( pow (x,2)) - sqrt(abs(((pow((y+z),2)) - (pow(x,5)) ))) - log(abs(sin(z)));
}

float deposit(float summ, short months)
{
    float monthly, a;

    if(months == 6)
    {
        a = (summ*16)/100;
        monthly = a/6;
    }
    if (months == 12)
    {
        a = (summ*18)/100;
        monthly = a/12;
    }
    return monthly;
}

int bofort(int viter[31]){
    float max = viter[0];
    for(int i = 1;i<31;i++){
        if (viter[i] > max){
            max = viter[i];
        }
    }
    if (max < 0.3){
        return 0;
    }
    else if (max < 1.5){
        return 1;
    }
    else if (max < 3.4){
        return 2;
    }
    else if (max < 5.4){
        return 3;
    }
    else if (max < 7.9){
        return 4;
    }
    else if (max < 10.7){
        return 5;
    }
    else if (max < 13.8){
        return 6;
    }
    else if (max < 17.1){
        return 7;
    }
    else if (max < 20.7){
        return 8;
    }
    else if (max < 24.4){
        return 9;
    }
    else if (max < 28.4){
        return 10;
    }
    else if (max < 32.6){
        return 11;
    }
    else {
        return 12;
    }
}

int bitnum(int num)
{
    bitset<32> b_number(num);
    if(b_number[13])
    {
        return b_number.count();
    }
    return 32 - b_number.count();
}

bool fillInputTxtFile(string inputFileName, string ukrWord)
{
    ofstream inputFile(inputFileName, ios::out);
inputFile << ukrWord << endl << endl;
inputFile.close();
return true;
}


bool authorInfo(string outputFileName)
{
    ofstream outputFile(outputFileName, ios::out);
outputFile << "====================================================================" << endl
               << " Виконавець:         Омельченко Станіслав Сергійович" << endl
               << " Рік розробки:       2022" << endl
               << " Місто/Країна:       Кропивницький/Україна" << endl
               << " ВНЗ:                Центральний Національний Технічний Університет" << endl
               << "====================================================================" << endl << endl;
    outputFile.close();
    return true;
}


bool poem(string pathfile){
    ofstream file(pathfile,ios::app);
    file << "Хай щастить у Вашій хаті, мамо,"<< endl
         << "Всім, хто переступить ваш поріг:"<< endl
         << "Добрим людям, і птахам так само," << endl
         << "Хай щастить кожненькій деревині,"<< endl
         << "Що до хати віт притуля"<< endl
         << "Хай щастить малесенькій травині."<< endl
         << "Й вітерцю, що приліта здаля," << endl << endl << endl;
    file.close();
    return true;
}


int Amount (string outPutfile, string ukrWord)
{
    int amount = 0;
    ofstream file(outPutfile, ios::app);
    for (int i=0; i<ukrWord.length(); i++)
    {
        if((ukrWord[i] >= 'А' && ukrWord[i] <= 'я') || (ukrWord[i] >= 'а' && ukrWord[i] <= 'Я'))
        {
            amount++;
        }
    }
    file << "Кількість символів: " << amount << endl << endl;
    file.close();
    return amount;
}


bool astronaut (string outPutfile, string ukrWord)
{
    ofstream file(outPutfile, ios::app);
    for (int i=0; i<2; ++i)
    {
        if((ukrWord[i] >= 'А' && ukrWord[i] <= 'я') || (ukrWord[i] >= 'а' && ukrWord[i] <= 'Я'))
        {
            file << "Перший космонавт незалежної України - Леонід Каденюк" << endl << endl;
        }
        return true;
    }
    file.close();
}


bool findWordInPoem(string outputFileName, string ukrWord)
{
    ofstream outputFile(outputFileName, ios::app);
    string poemVI = {  "Хай щастить у Вашій хаті, мамо,\n"
                      "Всім, хто переступіть Ваш поріг:\n"
                      "Добрим людям, і птахам так само,\n"
                      "І котові, що в теплі приліг;\n"
                      "Хай щастить кожненькій деревині,\n"
                      "Що до хати віти притуля,\n"
                      "Хай щастить малесенькій травині\n"
                      "Й вітерцю, що приліта здаля.\n" };
    size_t foundWord;


    foundWord = poemVI.find(ukrWord);
    if (foundWord != string::npos) {
        outputFile << "Знайдено слово \"" << ukrWord << "\"" << endl << endl;
        outputFile.close();
        return true;
    }
    outputFile << "Cлово \"" << ukrWord << "\" - не знайдено" << endl << endl;
    outputFile.close();
    return false;
}


bool timestampInFile(string inputFileName)
{
    ofstream inputFile(inputFileName, ios::app);
    time_t rawtime;
    time(&rawtime);
    inputFile << "Дата та час дозапису інформаціїї: " << ctime(&rawtime) << endl << endl;
    inputFile.close();
    return true;
}


double sCalculationResInFile(string outputFileName, float x, float y, float z)
{
    ofstream outputFile("prjOutputFile.txt", ios::app);
    outputFile << "Результат виконання s_calculation: " << s_calculation(x, y, z) << endl << endl;
    outputFile.close();
    return s_calculation(x, y, z);
}


bool decimalToBinary(string outPutfile, int b)
{
    ofstream file (outPutfile, ios::app);
    bitset <32> b_number(b);
    file << "Число " << b << " в двійковій системі: " << b_number << endl;
    file.close();
    return 0;
}

