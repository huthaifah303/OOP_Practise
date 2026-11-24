#include <iostream>
using namespace std;

class Payment {
public:
    virtual void calculatefee() = 0;
};

class BankTransfer : public Payment {
private:
    double amount;
public:
    BankTransfer(double a) {
        amount = a;
    }
    void calculatefee() override {
        amount = amount - (amount * 0.02);
        cout << "Amount after 2% fee: " << amount << endl;
    }
};

class DigitalWallet : public Payment {
private:
    double amount;
public:
    DigitalWallet(double a) {
        amount = a;
    }
    void calculatefee() override {
        amount = amount - (amount * 0.01);
        cout << "Amount after 1% fee: " << amount << endl;
    }
};

int main() {
    BankTransfer A(10000);
    cout << "Bank Transfer: ";
    A.calculatefee();

    DigitalWallet B(10000);
    cout << "Digital Wallet: ";
    B.calculatefee();

    return 0;
}
