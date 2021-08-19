#include <iostream>
using namespace std;
int main(){
    
    cout << "Enter the amount in Cents: ";
    int cents {0};
    cin >> cents;
    int dollars {0}, quaters {0}, dimes {0}, nickels {0}, pennies {0};
    cout << "Cents : " << cents << endl;
    cout << "You can provide change for this as follows: " << endl; 
    
    dollars = cents/100;
    cents = cents % 100;
    cout << "dollars : " << dollars << endl;

    quaters = cents / 25;
    cents = cents % 25;
    cout << "quaters : " << quaters << endl;
    
    dimes = cents / 10;
    cents = cents % 10;
    cout << "dimes : " << dimes << endl;

    nickels = cents / 5;
    cents = cents % 5;
    cout << "nickels : " << nickels << endl;
    
    pennies = cents / 1;
    cents = cents % 1;
    cout << "pennies : " << pennies << endl;
    
    return 0;
}