#include <iostream>
#include <vector>

using namespace std;

int main(){
    std::vector <int> vector1;
    std::vector <int> vector2;
    
    //pushing new elements 10 & 20 to vector1
    vector1.push_back(10);
    vector1.push_back(20);
    
    //Display Vector-1
    cout << "Displaying Vector-1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Size of Vector-1 is: " << vector1.size() << endl;
    
    //pushing new elements 100 & 200 to vector2
    vector2.push_back(100);
    vector2.push_back(200);
    
    //Display Vector-2
    cout << "Displaying Vector-2" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Size of Vector-2 is: " << vector2.size() << endl;
    
    //Declaring empty 2D Vector
    vector <vector <int>> vector_2d;
    
    //Adding vectors to 2D vector
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    //Displaying 2D vector
    cout << "Displaying 2D Vector......" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " <<  vector_2d.at(1).at(1) << endl;
    
    //Changing vector1
    vector1.at(0) = 1000;
    
    //Re-Displaying 2D vector
    cout << "Re-Displaying 2D Vector......" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " <<  vector_2d.at(1).at(1) << endl;
    
    //Display Vector-1
    cout << "Displaying Vector-1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    return 0;
}