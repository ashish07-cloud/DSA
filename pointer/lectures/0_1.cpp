#include<iostream>


using namespace std;


int main(){
    // int a = 5;
    // int b = 5;

    // there is a box created and a in the symbol table is created 
    // cout << &a << endl;
    // cout << &b << endl;

    // int a = 5;
    // pointer creation 
    // int *ptr = &a;

    // access the value ptr is pointing to 
    // cout << *ptr << endl;

    // int a = 5;
    // int *p = &a;

    // cout << sizeof(p) << endl;

    // char ch = 'b';
    // char* c  = &ch;

    // cout << sizeof(c) << endl;

    // double dtr = 5.080;
    // double* d =&dtr;

    // cout << sizeof(d) << endl;

    // no matter what type of the data is the pointer will always store the address so it will have the same size for all the data types 

    // NULL POINTER DECLARATION
    // int* ptr = 0;
    // int* ptr = nullptr;

    // cout << *ptr << endl;

    int a = 5;
    int* ptr = &a;
    int*dusraptr = ptr;

    cout << *ptr << endl;
    cout << *dusraptr << endl;


    return 0;
}