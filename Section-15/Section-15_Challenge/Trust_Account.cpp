#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate} {
}

bool Trust_Account::deposit(double amount) {
    if(amount>=5000.00)
        amount = amount + bonus;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if(amount <= (balance * 0.20) && no_of_withdraw<max_withdraw_limit){
        this->no_of_withdraw +=  1;
        return Savings_Account::withdraw(amount);
    }
    return false;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "% " << account.bonus << "]\n";
    return os;
}

