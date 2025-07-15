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
// int solve(vector<int>& arr, int target, int output) {
//     // Base cases
//     if (output == target) return 0;
//     if (output > target) return INT_MAX;

//     int mini = INT_MAX;
//     for (int i = 0; i < arr.size(); i++) {
//         int res = solve(arr, target, output + arr[i]);
//         if (res != INT_MAX) {
//             mini = min(mini, res + 1);  // Include this coin
//         }
//     }

//     return mini;
// }

int solve(int n, int x, int y, int z){
    // base case 
    if( n == 0) return 0;
    if (n < 0) return INT_MIN;

    int ans1 = solve(n-x, x, y, z) + 1; // here +1 is done in all the answers because the solve function return ans for the value n-x
    int ans2 = solve(n-y, x, y, z) + 1;
    int ans3 = solve(n-z, x, y, z) + 1;

    int ans = max(ans1, max(ans2, ans3));
    return ans;


}


int main () {

    // vector<int> arr{2, 3};
    // int target = 5;
    // int output = 0;

    // int ans = solve(arr, target, output);

    // cout << "answer is " << ans << endl;

    int n = 7, x = 5, y = 2, z = 2;

    int ans = solve(n, x, y, z);

    if(ans < 0){
        ans = 0;
    }
    cout << " Answer is " << ans << endl;





    return 0;
}