#include <iostream>
using namespace std;

// void util(int* p){
//     // p = p+1  -> when this is done then the change has occured in the copy of p and not reflected in the original
//     // *p = *p +1; // when we use this then the change is occured in the original
//     **p = *p + 1;

// }

void solve(int &num)
{
    num += 50;
}

int main()
{
    // int a = 5;
    // int* p  = &a;
    // int** q = &p;

    // cout << a << endl;
    // cout << &a << endl;
    // cout << p << endl;
    // cout << &p << endl;
    // cout << *p << endl;
    // cout << **q << endl;

    // int a = 5;
    // int* p = &a;
    // int*q = &p;
    // cout << "before " << endl;
    // cout << a << endl;
    // cout << p << endl;
    // cout  << *p << endl;

    // util(p);

    // cout << "after " << endl;
    // cout << a << endl;
    // cout << p << endl;
    // cout  << *p << endl;

    // int a  = 5;
    // int*p = &a;
    // int**q = &p;

    // cout << *q << endl;

    // reference variable

    // int a = 5;
    // // declaration of reference variable
    // int &b = a;

    // cout << a << endl;
    // cout << b << endl;

    // b++;
    // cout << b << endl;

    // a++;
    // b++;
    // cout << "a: " << a << " b : " << b <<  endl;

    int a = 5;
    solve(a);

    cout << a << endl;

    return 0;
}