#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");
    int A,B;
    cout << "¬ведите число A: ";
    cin >> A;
    cout << "¬ведите число B (должно быть больше чем A): ";
    cin >> B;

    if (B<=A){
        cerr << "ќшибка: B должно быть больше A!" << endl;
        return 1;
    }

    ofstream outputFile("Output.txt");
    if (!outputFile.is_open()){
        cerr << "ќшибка при открытии файла!" << endl;
    }

    for (A; A <= B; ++A) {
        outputFile << A*3 << endl;
    }

    outputFile.close();
    return 0;
}
