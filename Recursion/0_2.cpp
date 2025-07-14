#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int climbingStairs(int n){
    if( n == 0 || n ==1) return 1;

    int ans = climbingStairs(n-1) + climbingStairs(n-2);

    return ans;
}

void print(int arr[], int n, int i){
    if ( i>= n)
    {
        return;
    }

    cout << arr[i] << " ";

    print(arr, n, i+1);
    
}

void findMax(int arr[], int n, int i, int &maxi){
    if( i >= n){
        return;
    }

    if (arr[i] > maxi)
    {
        maxi = max(maxi, arr[i]);
    }

    findMax(arr, n, i+1, maxi);
    
}

void findMin(int arr[], int n, int i, int &mini){
    if( i >= n) return;

    if (arr[i] < mini)
    {
        mini = min(arr[i], mini);
    }

    findMin(arr, n, i+1, mini);
    
}

bool findKey(string str, int n, int i, char key){
    if ( i >= n) return false;

    if( str[i] == key){
        return true;
    }

    return findKey(str, n, i+1, key);
    
}

int main(){

    // int n;
    // // stair problem 
    // cout << " Enter the value of n " << endl;
    // cin >> n;

    // int ans = climbingStairs(n);

    // cout << ans << endl;

    // printing a array using recursion 
    // int arr[5] = {10, 20, 30, 40, 50};
    // int n = 5;
    // int i = 0;
    // print(arr, n, i);


    // finding maximum number in a array 
    // int arr[5] = {34, 556, 32, 24, 65};
    // int n = 5;
    // int i = 0;
    // int maxi = INT_MIN;
    // int mini = INT_MAX;
    // findMax(arr, n, i, maxi);
    // findMin(arr, n, i, mini);

    // cout << "Maximum number is " << maxi << endl;
    // cout << "Minimum number is " << mini << endl;


    // finding key in a  string 
    string str = "ashish";
    int n = str.length();

    char key = 'h';
    int i = 0;
    bool ans = findKey(str, n, i, key);
    cout << "Key is present or not " << ans << endl;


    return 0;
}