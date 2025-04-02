#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");
    int i = 1;
    int n;

    ifstream inputFile("input.txt");

    if (!inputFile.is_open()) {
        cerr << "Ошибка: не удалось открыть файл 'output.txt'" << endl;
        return 1;
    }

    while(inputFile >> n) {
        cout << i << ". " << n << endl;
        i++;
    }
    inputFile.close();
    return 0;
}
