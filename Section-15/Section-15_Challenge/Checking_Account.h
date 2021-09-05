#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;  
    static constexpr double def_withdrawdal_fees = 1.50;
protected:
    double withdrawdal_fees;
public:
    Checking_Account(std::string name = def_name, double balance =def_balance, double withdrawdal_fees = def_withdrawdal_fees);
    bool withdraw(double amount);
    // Inherits the Account::deposit methods
};

#endif // _CHECKING_ACCOUNT_H_
