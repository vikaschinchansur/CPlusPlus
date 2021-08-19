#include <iostream>
#include <climits>

using namespace std;

int main(){
    cout << "#### Output of SizeOf Operator ####" << endl;
    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl << endl;
    
    cout << "#### MINIMUM VALUES ######" << endl;
    cout << "char min value : " << CHAR_MIN << endl;
    cout << "int min value : " << INT_MIN << endl;
    cout << "short min value : " << SHRT_MIN << endl;
    cout << "long min value : " << LONG_MIN << endl;
    cout << "long long min value : " << LLONG_MIN << endl << endl;
    
    cout << "#### MAXIMUM VALUES ######" << endl;
    cout << "char max value : " << CHAR_MAX << endl;
    cout << "int max value : " << INT_MAX << endl;
    cout << "short max value : " << SHRT_MAX << endl;
    cout << "long max value : " << LONG_MAX << endl;
    cout << "long long max value : " << LLONG_MAX << endl << endl;
    
    cout << "##### USING SizeOf on variables #####" << endl;
    int age {18};
    cout << "sizeof age variable is : " << sizeof(age) << endl;
    cout << "sizeof age variable is : " << sizeof age << endl;
    double pi {3.14159};
    cout << "sizeof pi variable is: " << sizeof(pi) << endl;
    cout << "sizeof pi variable is: " << sizeof pi  << endl;
    return 0;
}