#include <iostream>
using namespace std;

int main(){
    /*************************
     * 1) Character Type
     ************************/
    char middle_initial {'K'};
    cout << "My middle initial is: " << middle_initial << endl;
    
    /*************************
     * 2) Integer Types
     * ***********************/
    unsigned short int score {95};
    cout << "My Score is: " << score << endl;
    
    int india_population {1'380'004'385}; //new style (Seprated by ') supported from C++ 14 version. 
    cout << "Population of India is: " << india_population << endl; 
    
    //Advantage of list initilisation is that it handles overflow errors aand shows compilation error if its overflowing.
    //List Advantage + This gives overflow compiler error as value initilised is too large for int to hold.
    //int earth_population {7'794'000'000}; 
    
    //this will NOT give comiplier error, program executes but with an overflow error.
    //int earth_population = 7'794'000'000; 
    
    //this will show correct ouput as long long can hold such big value. No Errors, No overflow.
    long long earth_population {7'794'000'000}; 
    cout << "Population on earth is: " << earth_population << endl;
    
    /*****************************
     * Floating point numbers
     *****************************/
     float my_weight {55.50};
     cout << "My weight is : " << my_weight << endl;
     
     double pi {3.14159265};
     cout << "Value of PI = " << pi << endl;
     
     long double mass_of_earth {5.972e24};
     cout << "Mass of earth is : " << mass_of_earth << endl;
    
    /******************
     * Boolean Types
     * *****************/
     bool game_over {true};
     cout << "Is game over : " << game_over << endl; 
     
     /***********************
      * Overflow Example
      * **********************/
      short  x {12345};
      short  y {10000};
      short  product {x*y};
      cout << "product of" << x  << " and "  << y << " is: " << product << endl; 
     return 0;
}