#include <iostream>
using namespace std;

int main(){
    int num {};
    cout << "Enter an integer:";
    cin >> num;
    cout << num << " is " << ((num%2==0)? "Even" : "Odd");
    return 0;
}