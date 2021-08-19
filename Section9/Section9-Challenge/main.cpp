#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    char selection {};
    vector <int> num_list {};
    do{
        cout << "\n----------------------------\n"; 
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl << endl;
        cout << "Enter your choice: ";
        cin >> selection;
        
        if(selection=='p' || selection=='P'){
            if(num_list.size()==0){
                cout << "[] - the list is empty" << endl;
            }else{
                cout << "[";
                for(auto v: num_list)
                    cout << " " << v << " ";
                cout << ']' << endl;
            }
        }else if(selection=='a' || selection=='A'){
            int num {0};
            cout << "Enter an integer to add to the list: ";
            cin >> num;
            num_list.push_back(num);
            cout << num << " added" << endl;
        }else if(selection=='m' || selection=='M'){
            if(num_list.size()==0){
                cout << "Unable to calculate the mean - no data" << endl;
            }else{
                double total {0};
                for(auto n: num_list){
                    total += n;
                }
                double avg {total/num_list.size()};
                cout << setprecision(2);
                cout << "The mean is : " << avg << endl;
            }
        }
        else if(selection=='s' || selection=='S'){
             if(num_list.size()==0){
                cout << "Unable to calculate the smallest - no data" << endl;
            }else{
                int smallest {num_list[0]};
                for(auto n: num_list){
                    if(n < smallest)
                        smallest = n;
                }
                cout << "The smallest number is : " << smallest << endl;
            }
            
        }else if(selection=='l' || selection=='L'){
             if(num_list.size()==0){
                cout << "Unable to calculate the largest - no data" << endl;
            }else{
                int largest {0};
                for(auto n: num_list){
                    if(n > largest)
                        largest = n;
                }
                cout << "The largest number is : " << largest << endl;
            }
        }else if(selection=='q' || selection=='Q'){
            cout << "Goodbye!" << endl;
        }else{
            cout << "Unknown selection, please try again" << endl;
        }
    }while(selection!='q' && selection!='Q');
    return 0;
}