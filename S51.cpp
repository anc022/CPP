#include <iostream>
#include <string>

using namespace std;

void reverse(const string& str) {
    for (int i = str.length() - 1; i >= 0; --i) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    reverse("Testing");
return 0;
}
