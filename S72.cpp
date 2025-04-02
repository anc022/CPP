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
            throw invalid_argument("Номер карты должен быть 4-значным");
        }
    }

    void Put(float amount) {
        if (amount <= 0) throw invalid_argument("Сумма должна быть положительной");
        Balance += amount;
    }

    void Take(float amount) {
        if (amount <= 0) throw invalid_argument("Сумма должна быть положительной");
        if (amount > Balance) throw runtime_error("Недостаточно средств");
        Balance -= amount;
    }

    void PrintInfo() const {
        cout << "Карта #" << Number << ", Баланс: " << fixed << setprecision(2) << Balance << " руб.\n";
    }

    int getNumber() const { return Number; }
    float getBalance() const { return Balance; }
};

void Transfer(CreditCard& C1, CreditCard& C2, float V) {
    if (C1.getNumber() == C2.getNumber()) {
        cout << "Ошибка: это одна и та же карта (#" << C1.getNumber() << ")\n";
        return;
    }

    if (V <= 0) {
        cout << "Ошибка: сумма перевода должна быть положительной\n";
        return;
    }

    if (C1.getBalance() < V) {
        cout << "Ошибка: недостаточно средств на карте #" << C1.getNumber()
                  << " (текущий баланс: " << C1.getBalance() << " руб.)\n";
        return;
    }

    C1.Take(V);
    C2.Put(V);

    cout << "Успешно переведено " << V << " руб. с карты #" << C1.getNumber()
              << " на карту #" << C2.getNumber() << "\n";
    cout << "Итоговые балансы:\n";
    C1.PrintInfo();
    C2.PrintInfo();
}

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");
    CreditCard card1(1234, 1000.0f);
    CreditCard card2(5678, 500.0f);
    CreditCard card3(9999, 200.0f);

    cout << "Начальные балансы:\n";
    card1.PrintInfo();
    card2.PrintInfo();
    card3.PrintInfo();
    cout << "\n";

    cout << "Попытка перевода 300 руб. с карты #1234 на карту #5678:\n";
    Transfer(card1, card2, 300.0f);
    cout << "\n";

    cout << "Попытка перевода на ту же карту:\n";
    Transfer(card1, card1, 100.0f);
    cout << "\n";

    cout << "Попытка перевода 900 руб. с карты #9999:\n";
    Transfer(card3, card2, 900.0f);

    return 0;
}
