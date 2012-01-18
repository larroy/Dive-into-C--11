#include <iostream>
#include <typeinfo>
using namespace std;


// We call the template with the macro stringified to correctly print the type
#define NULL_is_type(T) NULL_are_you_my_type<T>(#T)

template<typename T>
void NULL_are_you_my_type(const char* type)
{
    cout << "Dave: The type of NULL is " << type << "?" << endl;
    if(typeid(NULL) == typeid(T))
        cout << "\tHal: yes" << endl;
    else
        cout << "\tHal: no" << endl;
    cout << endl;
}

#define nullptr_is_type(T) nullptr_are_you_my_type<T>(#T)

template<typename T>
void nullptr_are_you_my_type(const char* type)
{
    cout << "Dave: The type of nullptr is " << type << "?" << endl;
    if(typeid(nullptr) == typeid(T))
        cout << "\tHal: yes" << endl;
    else
        cout << "\tHal: no" << endl;
    cout << endl;
}

int main(int argc, char *argv[])
{
    NULL_is_type(const char*);
    NULL_is_type(char*);
    NULL_is_type(int);
    NULL_is_type(long);
    NULL_is_type(long long);
    NULL_is_type(double);
    NULL_is_type(void*);
    NULL_is_type(const void*);

    nullptr_is_type(const char*);
    nullptr_is_type(char*);
    nullptr_is_type(int);
    nullptr_is_type(long);
    nullptr_is_type(long long);
    nullptr_is_type(double);
    nullptr_is_type(void*);
    nullptr_is_type(const void*);

    // so nullptr is not a type, is a keyword that is interpreted as a rvalue for a pointer of any type
}

