#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n {};
    cout << "###################" << endl;
    cout << "Value of n is:" << n << endl;
    cout << "Address of n is: " << &n << endl;
    cout << "size of n is: " <<sizeof n << endl;
    
    int *p;
    cout << "###################" << endl;
    cout << "Value of p is:" << p << endl; //garbage value
    cout << "Address of p is: " << &p << endl;
    cout << "size of p is: " <<sizeof p << endl;
    p=nullptr;
    cout << "Value of p is: " << p << endl;
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout << "###################" << endl;
    cout << "size of p1 is: " <<sizeof p1 << endl;
    cout << "size of p2 is: " <<sizeof p2 << endl;
    cout << "size of p3 is: " <<sizeof p3 << endl;
    cout << "size of p4 is: " <<sizeof p4 << endl;
    cout << "size of p5 is: " <<sizeof p5 << endl;
    
    int score {10};
    double high_temp {100.7};
    
    int *score_ptr {};
    cout << "Value in score_ptr (should be garbage): " << score_ptr << endl;
    score_ptr = nullptr;
    cout << "Value in score_ptr (should be 0 now): " << score_ptr << endl;
    score_ptr = &score;
    cout << "Value in score_ptr: " << score_ptr << endl;
    cout << "Address of score is: " << &score << endl;
    cout << "Value of score is: " << score << endl; 
    //score_ptr = &high_temp;     //This should give compiler error.
    return 0;
}