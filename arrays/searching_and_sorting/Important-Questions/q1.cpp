#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

// bool isPossibleSolution(vector<long long int> trees, long long int m, long long int mid){
//     long long int woodCollected = 0;
//     for (long long int i = 0; i < trees.size(); i++)
//     {
//         if (trees[i] > mid)
//         {
//             woodCollected += trees[i] - mid;
//         }
//     }
//     return woodCollected >= m;
    
// }

// long long int maxSawLaderHeight(vector<long long int> trees, long long int m){
//     long long start = 0, end, ans = -1;
//     end = *max_element(trees.begin(), trees.end());

//     while (start <= end)
//     {
//         long long int mid = start + (end - start) / 2;
//         if (isPossibleSolution(trees, m , mid))
//         {
//             ans = mid;
//             start = mid +1;
//         }else{
//             end = mid -1 ;
//         }
//     }
//     return ans;
    
// }


// AGGRESIVE COW PROBLEM 

bool isPossibleSolution(vector<int>& stalls, int k, int mid){
    int c = 1;
    int pos = stalls[0];

    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= mid)
        {
            c++;
            pos = stalls[i];
        }
        if(c ==k) return true;
    }
    return false;
    
}

int main(){

    // long long int n, m;
    // cout << "Enter the number of trees and the number of logs: "<< endl;
    // cin >> n >> m;
    // vector<long long int> trees;
    // while(n--){
    //     long long int height;
    //     cin >> height;
    //     trees.push_back(height);
    // }

    // cout << "The maximum height of the sawlader is: " << maxSawLaderHeight(trees, m) << endl;
    // return 0;



    // Q2- AGGRESIVE COW PROBLEM 
    int k, n;
    cout << "Enter the number of cows" << endl;
    cin >> k;
    cout << "Enter the size of the stall " << endl;
    cin >> n;
    vector<int> stalls(n);
    cout << "Enter the postion of the stalls" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> stalls[i];
    }

    // logic if we gate the solution 
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[stalls.size() - 1]  - stalls[0];
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (isPossibleSolution(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        
    }
    cout << "The maximum distance at which cow can be placed are " << ans << endl;


return 0;

}