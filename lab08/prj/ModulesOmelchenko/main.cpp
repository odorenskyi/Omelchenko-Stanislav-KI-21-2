#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdio>

using namespace std;

float s_calculation(float x, float y, float z)
{
    return 0.5 * ( pow (x,2)) - sqrt(abs(((pow((y+z),2)) - (pow(x,5)) ))) - log(abs(sin(z)));
}
int deposit(int summpercent, int summwithpercent, int sum, int months)
{
    summwithpercent = sum * pow((1+0.18/12), months);
    summpercent = summwithpercent - sum;
    cout << "���� � �i��������: " << summwithpercent << endl;
    cout << "���� �i�����i�: " << summpercent << endl;
    cout << "���i����i �������: " << summpercent / months << endl;
}
float bofort(double max, double chisla)
{
    for (int j = 1 ; j <= 31 ; j++) {
        if (chisla>max)
            max=chisla;
    cout << "����i�� ���i �� " << j << " ci���: ";
}
     if (chisla < 0.3) {
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 0. ³�������� ����. ��� ��������� ����������. ����� ����� �������" << endl;
    }
    else if (0.3 <= chisla && chisla <= 1.5) {
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 1. ��� �����. ������ �� ����������." << endl;
    }
    else if (1.6 <= chisla && chisla <= 3.4) {
        cout << "����������� �������� ���� ������� ����:" << max << "��� ������ ���������� ��������. ��������� �����, ������� ����������." << endl;
    }
    else if (3.4 <= chisla && chisla <= 5.4) {
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 3. ������ �����, ��������� ���� ����. �������� �������." << endl;
    }
    else if (5.5 <= chisla && chisla <= 7.9) {
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 4. ��������� ���� ���� �����. ³��� ����� ��� �� ������ ������." << endl;
    }
    else if (8.0 <= chisla && chisla <= 10.7) {
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 5. ��������� ����� ����. �� ��� �'��������� ����." << endl;
    }
    else if (10.8 <= chisla && chisla <= 13.8) {
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 6. ��������� ����� ����" << endl;
    }
    else if (13.9 <= chisla && chisla <= 17.1) {
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 7. ��������� ������� �������� �����. �� ��� ���������� ����, �������" << endl;
    }
    else if (17.2 <= chisla && chisla <= 20.7) {
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 8. ��������� ���� ����� � ����� ��� ����� ����" << endl;
    }
    else if (20.8 <= chisla && chisla <= 24.4) {
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 9. ������� ����������, ����� ������, ����� �����" << endl;
    }
    else if (24.5 <= chisla && chisla <= 28.4) {
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 10. ����� ����������. ������ ����������� � �������" << endl;
    }
    else if (28.5 <= chisla && chisla <= 32.6) {
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 11. ����� ����������" << endl;
    }
    else if (chisla >= 32.7){
        cout << "����������� �������� ���� ������� ����:" << max << "���� ������� - 12. ���������� �� ����������" << endl;
    }
}
