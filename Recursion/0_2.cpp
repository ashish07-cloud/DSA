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

// if to found the key is either in the string or not 
// bool findKey(string str, int n, int i, char key){
//     if ( i >= n) return false;

//     if( str[i] == key){
//         return true;
//     }

//     return findKey(str, n, i+1, key);
    
// }


// if to found at which index the key is present 
// int findKey(string str, int n, int i, char key){
//     if ( i >= n) return -1;

//     if( str[i] == key){
//         return i;
//     }

//     return findKey(str, n, i+1, key);
    
// }

// if we have to store the index of the key in the array 
// int findKey(string str, int n, int i, char key, vector<int> &ans, int count ){
//     if ( i >= n) return -1;

//     if( str[i] == key){
//         ans.push_back(i);
//         // return i;
//         count++;
//     }

//     return findKey(str, n, i+1, key, ans);
    
// }

// printing the digits of a number 
void printDigits(int n){
    if ( n == 0)
    {
        return;
    }

    int newValueofN = n / 10;
    printDigits(newValueofN);

    int digit = n % 10;
    cout << digit << " ";
    
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
    // string str = "ashish";
    // int n = str.length();

    // char key = 'h';
    // int i = 0;
    // int count  = 0;
    // vector<int> ans;
    // findKey(str, n, i, key, ans, count);
    // // cout << "found at index " << ans << endl;

    // cout << "printing ans" << endl;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << endl;

    // printing all the digits of a number 
    int n = 0647;

    printDigits(n);
    
    


    return 0;
}