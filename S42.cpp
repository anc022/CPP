#include <iostream>
#include <algorithm>
using namespace std;

void sort(int a[10]) {
    for (int i = 0; i < 9; ++i) {
        int max_index = i;
        for (int j = i + 1; j < 10; j++){
            if (a[j] > a [max_index]){
                max_index = j;
            }
        }
        swap(a[i], a[max_index]);
    }
}

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");
    int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 7, 12};

    cout << "До сортировки: ";
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    sort(a);

    cout << "После сортировки: ";
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
