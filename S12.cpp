#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");
    int i = 1;
    int s = 0;

    while (i <= 1000) {
        if (i%7==0){
            s += i;
        }
        i+=4;
    }
    cout << "����� = " << s;
    return 0;
}
