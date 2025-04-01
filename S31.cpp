#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");
    string numb_names[10] = {
        "ноль", "один", "два", "три", "четыре",
        "пять", "шесть", "семь", "восемь", "девять"
    };

    int numb;
    cout << "Введи цифру от 0 до 9: ";
    cin >> numb;

    if (numb >= 0 && numb <=9){
        cout << "Вы ввели: " << numb_names[numb] << endl;
    } else {
        cout << "Ошибка! Введите цифру от 0 до 9." << endl;
    }
return 0;
}
