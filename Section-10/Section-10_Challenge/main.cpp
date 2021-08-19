#include <iostream>
#include <string>

using namespace std;
int main(){
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    string encryptedMsg {};
    string decryptedMsg {};
    
    //cout << "alphabet: " << alphabet << endl;
    //cout << "key: " << key << endl;
    
    string original_msg {};
    cout << "Enter your secret message: ";
    getline(cin, original_msg);
    
    cout << "\n\nEncrypting message..." << endl;
    for(size_t i=0; i<original_msg.length(); i++){
        size_t position = alphabet.find( original_msg.at(i) );
        if(position != string::npos){
            encryptedMsg = encryptedMsg +key[position];
        }else{
            encryptedMsg = encryptedMsg + original_msg.at(i);
        }
    }
    cout << "Encrypted message: ";
    cout << encryptedMsg;
    cout << "\n\nDecrypting message..." << endl;
    
    for(size_t i=0; i<encryptedMsg.length(); i++){
        size_t position = key.find( encryptedMsg.at(i) );
        if(position != string::npos){
            decryptedMsg = decryptedMsg +alphabet[position];
        }else{
            decryptedMsg = decryptedMsg + encryptedMsg.at(i);
        }
    }
    
    cout << "Decrypted message: ";
    cout << decryptedMsg;
    return 0;
}