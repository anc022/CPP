#include <iostream>
using namespace std;

void print(int num) {
    cout << num << endl;
}

void print(float num) {
    cout << num << endl;
}

void print(char ch) {
    cout << ch << endl;
}

void print(int num1, int num2) {
    cout << num1 << ", " << num2 << endl;
}


int main() {
    print(42);
    print(3.14f);
    print('A');
    print(10, 20);
    return 0;
}
