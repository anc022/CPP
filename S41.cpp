#include <iostream>
using namespace std;

double squared_sum(double a, double b) {
    double sum = a + b;
    return sum * sum;
}

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");
    cout << "������� ����� 12 � 6: " << squared_sum(12, 6) << endl;
    cout << "������� ����� -1.2 � 4.8: " << squared_sum(-1.2, 4.8) << endl;
    cout << "������� ����� 0.0 � 10.1: " << squared_sum(0.0, 10.1) << endl;

    return 0;
}
