#include <iostream>

using namespace std;

double squared_sum(double a, double b) {
    double sum = a + b;
    return sum * sum;
}

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");
    cout << " вадрат суммы 2.5 и 3.5: " << squared_sum(2.5, 3.5) << endl;
    cout << " вадрат суммы -1.2 и 4.8: " << squared_sum(-1.2, 4.8) << endl;
    cout << " вадрат суммы 0.0 и 10.1: " << squared_sum(0.0, 10.1) << endl;

    return 0;
}
