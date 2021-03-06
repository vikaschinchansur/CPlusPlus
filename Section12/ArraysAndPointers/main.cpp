#include <iostream>

using namespace std;

int main(){
    int scores[] {100, 90, 80};
    cout << "Value of scores: " << scores << endl;
    
    int *scores_ptr {scores};
    cout << "value of scores_ptr: " << scores_ptr << endl;
    
    cout << "############################" << endl;
    cout << "Array subscript notation" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    
    cout << "############################" << endl;
    cout << "Pointer subscript notation" << endl;
    cout << scores_ptr[0] << endl;
    cout << scores_ptr[1] << endl;
    cout << scores_ptr[2] << endl;
    
    cout << "############################" << endl;
    cout << "Array offset notation" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;
    
    cout << "############################" << endl;
    cout << "Pointer offset notation" << endl;
    cout << *scores_ptr << endl;
    cout << *(scores_ptr+1) << endl;
    cout << *(scores_ptr+2) << endl;
    
    return 0;
}