
// RECURSION ->  When a function call itself then it is called recursion
#include<iostream>
using namespace std;

int factorial(int n){
    if (n ==1)
    {
        return 1;
    }
    int ans = n * factorial(n-1);
    
    return ans;
}

// void print(int n){
//     if (n == 0)
//     {
//         return;
//     }


//     // when the recursive function is called before printing then it is called head recursion
//     print(n-1);


//     cout << n;

    
    
// }

// void print(int n){
//     if (n == 0)
//     {
//         return;
//     }

//     cout << n;

//     // when the recursive function is called at the last then it is called tail recursion 
//     print(n-1);
    
// }

int fib(int n){
    if (n == 1) return 0;
    if( n == 2) return 1;

    int ans = fib(n-1) + fib(n-2);

    return ans;
}

int main(){
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    // int ans = factorial(n);

    // cout << "factorial is " << ans << endl;

    // print(n);

    cout << fib(n);

    return 0;
}