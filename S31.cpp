#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");

    string numb_names[10] = {"����", "����", "���", "���", "������", "����", "�����", "����", "������", "������"};

    int numb;

    cout << "����� ����� �� 0 �� 9: ";
    cin >> numb;

    if (numb >= 0 && numb <=9){
        cout << "�� �����: " << numb_names[numb] << endl;
    } else {
        cout << "������! ������� ����� �� 0 �� 9." << endl;
    }
    return 0;
}
