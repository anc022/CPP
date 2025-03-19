#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double A,S;
    int N;
    cout << "Enter the length of the sides: ";
    cin >> A;
    cout << "Enter the number of sides: ";
    cin >> N;

    if (N < 3 || A <=0){
        cerr << "Error: The number of sides must be at least 3, and the side length must be positive.";
        return 1;
    }

    S = (N * A * A) / (4 * tan(M_PI / N));
    cout << "The area is equal to: " << S;

    return 0;
}
