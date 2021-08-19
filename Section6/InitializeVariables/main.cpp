#include <iostream>

using namespace std;
int main(){
    cout << "Enter the room width: ";
    int room_width {0};
    cin >> room_width;
    
    cout << "Enter the room length: ";
    int room_length {0};
    cin >> room_length;
    
    cout << "The area of room is: " << room_width * room_length << " Square Feet. " << endl; 
    return 0;
}