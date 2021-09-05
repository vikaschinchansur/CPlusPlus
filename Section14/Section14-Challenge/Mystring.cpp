#include <iostream>
#include <cstring>
#include "Mystring.h"

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

//overload equality operator
bool Mystring::operator==(const Mystring &rhs) const{
    if(std::strcmp(str, rhs.str) == 0)
        return true;
    else
        return false;
}

//overload in-equality operator
bool Mystring::operator!=(const Mystring &rhs) const{
    return !(*this==rhs);
}

//overload < comparison operator
bool Mystring::operator<(const Mystring &rhs) const{
    if(std::strcmp(str, rhs.str) == -1)
        return true;
    else
        return false;
}

//overload > comparison operator
bool Mystring::operator>(const Mystring &rhs) const{
    return !(*this<rhs);
}

//overload - unary operator
Mystring Mystring::operator-() const{
    for(size_t i {0}; i < std::strlen(str); i++){
        str[i] = std::tolower(str[i]);
    }
    return *this;
}

//overload  + binary operator
Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char[std::strlen(str)+ std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//overload += binary operator
Mystring Mystring::operator+=(const Mystring &rhs){
    char *buff = new char[std::strlen(str)+ std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    std::strcpy(str, buff);
    delete [] buff;
    return *this;
}

//overload * binary operator
Mystring Mystring::operator*(const size_t count) const{
    char *buff = new char[(std::strlen(str)*count) + 1];
    std::strcpy(buff, str);
    for(size_t i {2}; i<=count; i++ ){
        std::strcat(buff, str);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//overload *= binary operator
Mystring &Mystring::operator*=(const size_t count){
    *this = *this * count;
    return *this;
}

//overload increment operator ++
Mystring &Mystring::operator++(){
    for(size_t i {0}; i < std::strlen(str); i++){
        str[i] = std::toupper(this->str[i]);
    }
    return *this;
}

Mystring Mystring::operator++(int){
    Mystring temp {*this};
    operator++();
    return temp;
}
