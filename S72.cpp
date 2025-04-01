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
        if (amount <= 0) throw invalid_argument("����� ������ ���� �������������");
        Balance += amount;
    }

    void Take(float amount) {
        if (amount <= 0) throw invalid_argument("����� ������ ���� �������������");
        if (amount > Balance) throw runtime_error("������������ �������");
        Balance -= amount;
    }

    void PrintInfo() const {
        cout << "����� #" << Number << ", ������: " << fixed << setprecision(2) << Balance << " ���.\n";
    }

    int getNumber() const { return Number; }
    float getBalance() const { return Balance; }
};

void Transfer(CreditCard& C1, CreditCard& C2, float V) {
    if (C1.getNumber() == C2.getNumber()) {
        cout << "������: ��� ���� � �� �� ����� (#" << C1.getNumber() << ")\n";
        return;
    }

    if (V <= 0) {
        cout << "������: ����� �������� ������ ���� �������������\n";
        return;
    }

    if (C1.getBalance() < V) {
        cout << "������: ������������ ������� �� ����� #" << C1.getNumber()
                  << " (������� ������: " << C1.getBalance() << " ���.)\n";
        return;
    }

    C1.Take(V);
    C2.Put(V);

    cout << "������� ���������� " << V << " ���. � ����� #" << C1.getNumber()
              << " �� ����� #" << C2.getNumber() << "\n";
    cout << "�������� �������:\n";
    C1.PrintInfo();
    C2.PrintInfo();
}

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");
    CreditCard card1(1234, 1000.0f);
    CreditCard card2(5678, 500.0f);
    CreditCard card3(9999, 200.0f);

    cout << "��������� �������:\n";
    card1.PrintInfo();
    card2.PrintInfo();
    card3.PrintInfo();
    cout << "\n";

    cout << "������� �������� 300 ���. � ����� #1234 �� ����� #5678:\n";
    Transfer(card1, card2, 300.0f);
    cout << "\n";

    cout << "������� �������� �� �� �� �����:\n";
    Transfer(card1, card1, 100.0f);
    cout << "\n";

    cout << "������� �������� 900 ���. � ����� #9999:\n";
    Transfer(card3, card2, 900.0f);

    return 0;
}
