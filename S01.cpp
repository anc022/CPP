#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");

    int iNum = 10;
    double dNum = 5.5;
    float fNum = 3.2f;
    char cNum = 'A';

    cout << "�������� �������� ����������:"<< endl;
    cout << "iNum = " << iNum << endl;
    cout << "dNum = " << dNum << endl;
    cout << "fNum = " << fNum << endl;
    cout << "cNum = '" << cNum << "' (ASCII: " << static_cast<int>(cNum) << ")" << endl;

    cout << "1. �������� (+): iNum + dNum = " << iNum + dNum << endl;
    cout << "2. ��������� (-): dNum - fNum = " << dNum - fNum << endl;
    cout << "3. ��������� (*): fNum * iNum = " << fNum * iNum << endl;
    cout << "4. ������� (/): iNum / fNum = " << iNum / fNum << endl;
    cout << "5. �������� � char (������������ ASCII ���): cNum + iNum = '" << static_cast<char>(cNum + iNum) << "' (ASCII: " << cNum + iNum << ")" << endl;


    return 0;
}
