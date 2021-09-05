#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double withdrawdal_fees)
    : Account {name, balance}, withdrawdal_fees{withdrawdal_fees} {
}

bool Checking_Account::withdraw(double amount) {
    amount = amount + withdrawdal_fees;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Checking_Account: " << account.name << ": " << account.balance << ", " << account.withdrawdal_fees << "]";
    return os;
}

