#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    char firstName[20];
    char lastName[20];
    char fullName[50];
    
//    cout << "Enter your First Name: ";
//    cin >> firstName;
//    cout << "ENter your Last Name: ";
//    cin >> lastName;
//    strcpy(fullName, firstName);
//    strcat(fullName, " ");
//    strcat(fullName, lastName);
//    cout << "Full Name: " << fullName << endl;

    cout << "Enter you full name: ";
    //cin >> fullName;
    cin.getline(fullName,50);
    cout << "Full Name: " << fullName << endl;
    return 0;
}