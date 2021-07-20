/* Section-5) 
 * Topic: Basic Input and Output [cin and cout].
 */
 
#include <iostream>

using namespace std;

int main(){
    int num1;
    int num2;
    double num3;
    
    //using COUT with endl and \n
    /*cout << "Hello World!" << endl;
    cout << "Hello" << " World!" << endl;
    cout << "Hello" << " World!\n";
    cout << "Hello\nOut\nThere\n";*/
    
    //Reading an integer from keyboard and storing it in variable.
    /*cout << "Enter an integer: ";
    cin >> num1;
    cout << "You entered: " << num1 << endl;*/
    
    //Chaining the extraction operator >> 
    /*cout << "Enter 2 intergers seprated with a space:";
    cin >> num1 >> num2;
    cout << "You entered " << num1 << " and " << num2;
    return 0;*/
    
    //Reading integer and double together.
    cout << "Enter an integer number: ";
    cin >> num1;
    
    cout << "Enter an double number: ";
    cin >> num3;
    
    cout << "The integer is: " << num1 << endl;
    cout << "The double is: " << num3 << endl;
}