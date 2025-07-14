#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

// in this method i have used decrement that is first the target is taken then after we go on checking each element of the array and check 
// wheather it is 0 or not 
// int solve(vector<int>& arr, int target){
//     // base conditions 
//     if( target == 0) return 0;

//     if ( target < 0) return INT_MAX;

//     int mini = INT_MAX;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int ans = solve(arr, target- arr[i]);
//         if (ans != INT_MAX)
//         mini = min(mini, ans+1);
//     }
    
//     return mini;
// }


// this is the second method to do the same but here we will take a output which is intialized to 0 and then after we go on increasing until the target is achieved 
int solve(vector<int>& arr, int target, int output) {
    // Base cases
    if (output == target) return 0;
    if (output > target) return INT_MAX;

    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        int res = solve(arr, target, output + arr[i]);
        if (res != INT_MAX) {
            mini = min(mini, res + 1);  // Include this coin
        }
    }

    return mini;
}


int main () {

    vector<int> arr{2, 3};
    int target = 5;
    int output = 0;

    int ans = solve(arr, target, output);

    cout << "answer is " << ans << endl;


    return 0;
}