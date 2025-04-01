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
        if (amount <= 0) {
            throw invalid_argument("Сумма должна быть положительной");
        }
        Balance += amount;
        cout << "На карту " << Number << " внесено: " << amount << " руб.\n";
    }

    void Take(float amount) {
        if (amount <= 0) {
            throw invalid_argument("Сумма должна быть положительной");
        }
        if (amount > Balance) {
            throw runtime_error("Недостаточно средств на карте");
        }
        Balance -= amount;
        cout << "С карты " << Number << " снято: " << amount << " руб.\n";
    }

    void PrintInfo() const {
        cout << "Карта #" << Number
                  << ", Баланс: " << fixed << setprecision(2)
                  << Balance << " руб.\n";
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
        cerr << "Ошибка: " << e.what() << endl;
    }

    delete firstCC;

    return 0;
}
