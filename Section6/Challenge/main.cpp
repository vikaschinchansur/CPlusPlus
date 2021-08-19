#include <iostream>

using namespace std;

int main(){
    cout << "Hello! Welcome to Vicky Cleaning services...\n\n";
    int numOfSmallRooms {0};
    int numOfLargeRooms {0};
    cout << "How many small rooms would you like to get cleaned? ";
    cin >> numOfSmallRooms;
    cout << "How many Large rooms would you like to get cleaned? ";
    cin >> numOfLargeRooms;
    
    const double pricePerSmallRoom {25};
    const double pricePerLargeRoom {35};
    const double salesTaxRate {0.06};
    const int estimateExpiryDays {30};
    
    cout << "\nEstimate for carpet cleaning services";
    cout << "\nNumber of small rooms: " << numOfSmallRooms;
    cout << "\nNumber of large rooms: " << numOfLargeRooms;
    cout << "\nPrice Per Small Room : $" << pricePerSmallRoom;
    cout << "\nPrice Per Large Room : $" << pricePerLargeRoom;
    cout << "\nCost: " << (pricePerSmallRoom * numOfSmallRooms) + (pricePerLargeRoom * numOfLargeRooms);
    cout << "\nTax: " << (pricePerSmallRoom * numOfSmallRooms * salesTaxRate) + (pricePerLargeRoom * numOfLargeRooms * salesTaxRate);
    cout << "\n###############################";
    cout << "\nTotal Estimate: $" << (pricePerSmallRoom * numOfSmallRooms ) + (pricePerSmallRoom * numOfSmallRooms * salesTaxRate) + (pricePerLargeRoom * numOfLargeRooms ) + (pricePerLargeRoom * numOfLargeRooms * salesTaxRate);
    cout << "\nThis estimate is valid for : " << estimateExpiryDays;
    
    
    return 0;
}