#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");
    int A,B;
    cout << "������� ����� A: ";
    cin >> A;
    cout << "������� ����� B (������ ���� ������ ��� A): ";
    cin >> B;

    if (B<=A){
        cerr << "������: B ������ ���� ������ A!" << endl;
        return 1;
    }

    ofstream outputFile("Output.txt");
    if (!outputFile.is_open()){
        cerr << "������ ��� �������� �����!" << endl;
    }

    for (A; A <= B; ++A) {
        outputFile << A*3 << endl;
    }

    outputFile.close();
    return 0;
}
