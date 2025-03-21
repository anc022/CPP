#include <iostream>
#include <cmath>
using namespace std;

double Area(double A, int N) {
    if (N < 3 || A <= 0) {
        cerr << "Error: The number of sides must be at least 3, and the side length must be positive." << endl;
        return -1;
    }
    double S = (N * A * A) / (4 * tan(M_PI / N));
    return S;
}

int main() {
    double A;
    int N;

    cout << "Enter the length of the sides(A): ";
    cin >> A;
    cout << "Enter the number of sides(N): ";
    cin >> N;

    double S = Area(A, N);

    if (S != -1) {
        cout << "Area is: " << S;
    }

    return 0;
}
