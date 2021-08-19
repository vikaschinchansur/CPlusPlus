#include <iostream>
using namespace std;
int main(){
    cout << "#####Program to breakdown entered amount in units of currency#### : Without using Modulo Operator" << endl; 
    cout << "Enter the amount in Cents: ";
    int cents {0};
    cin >> cents;
    int dollars {0}, quaters {0}, dimes {0}, nickels {0}, pennies {0};
    cout << "Cents : " << cents << endl;
    dollars = cents / 100;
    cout << "dollars : " << dollars << endl;
    cents -= dollars * 100;
    quaters = cents / 25;
    cout << "quaters : " << quaters << endl;
    cents -= quaters * 25;
    dimes = cents / 10;
    cents -= dimes * 10;
    cout << "dimes : " << dimes << endl;
    nickels = cents / 5;
    cents -= nickels * 5;
    cout << "nickels : " << nickels << endl;
    pennies = cents / 1;
    cout << "pennies : " << pennies << endl;
    cents -= pennies * 1;
    return 0;
}