#include <iostream>

using namespace std;

int main(){
    //Literal Constants: Character Literal Constants.
    cout << "Hello! Welcome to Vicky Cleaning services...\n\n";
    cout << "How many room would you like to get cleaned? ";
    int numOfRooms {0};
    cin >> numOfRooms;
    
    const double pricePerRoom {30};
    const double salesTaxRate {0.06};
    const int estimateExpiryDays {30};
    
    cout << "\nEstimate for carpet cleaning services";
    cout << "\nNumber of rooms: " << numOfRooms;
    cout << "\nPrice Per Room : " << pricePerRoom;
    cout << "\nCost: " << pricePerRoom * numOfRooms;
    cout << "\nTax: " << pricePerRoom * numOfRooms * salesTaxRate;
    cout << "\n###############################";
    cout << "\nTotal Estimate: $" << (pricePerRoom * numOfRooms ) + (pricePerRoom * numOfRooms * salesTaxRate);
    cout << "\nThis estimate is valid for : " << estimateExpiryDays;
    
    
    return 0;
}