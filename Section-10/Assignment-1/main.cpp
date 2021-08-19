#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string str;
    cout << "Enter the string: ";
    cin >> str;
    
    int no_of_rows = str.length();
    int no_of_cols = (2*str.length())-1;
    for(int i=1; i<=no_of_rows; i++){
        //Logic for whitespace
        for(int j=1; j<=no_of_rows-i; j++){
            cout << "  ";
        }
        //Logic for printing numbers
        for(int k=1; k <= (2*i-1); k++){
            if(k>i) 
                cout << str.at((2 * i -k)-1)<< " ";
            else
                cout << str.at(k-1) << " ";
        }
        cout << endl;
    }
    return 0;
}