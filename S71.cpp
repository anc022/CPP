#include <iostream>
#include <iomanip>

using namespace std;

class CreditCard {
private:
    int Number;
    float Balance;

public:
    CreditCard(int num, float balance) : Number(num), Balance(balance) {
        if (num < 1000 || num > 9999) {
            throw invalid_argument("����� ����� ������ ���� 4-�������");
        }
    }

    void Put(float amount) {
        if (amount <= 0) {
            throw invalid_argument("����� ������ ���� �������������");
        }
        Balance += amount;
        cout << "�� ����� " << Number << " �������: " << amount << " ���.\n";
    }

    void Take(float amount) {
        if (amount <= 0) {
            throw invalid_argument("����� ������ ���� �������������");
        }
        if (amount > Balance) {
            throw runtime_error("������������ ������� �� �����");
        }
        Balance -= amount;
        cout << "� ����� " << Number << " �����: " << amount << " ���.\n";
    }

    void PrintInfo() const {
        cout << "����� #" << Number
                  << ", ������: " << fixed << setprecision(2)
                  << Balance << " ���.\n";
    }
};

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");
    CreditCard* firstCC = new CreditCard(1234, 50.0f);

    firstCC->PrintInfo();
    firstCC->Put(150.5f);
    firstCC->Take(75.25f);
    firstCC->PrintInfo();

    try {
        firstCC->Take(200.0f);
    } catch (const exception& e) {
        cerr << "������: " << e.what() << endl;
    }

    delete firstCC;

    return 0;
}
