#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

// Q1 - AGGRESIVE COW PROBLEM

// bool isPossibleSolution(vector<int>& stalls, int k, int mid){
//     int c = 1;
//     int pos = stalls[0];

//     for (int i = 1; i < stalls.size(); i++)
//     {
//         if (stalls[i] - pos >= mid)
//         {
//             c++;
//             pos = stalls[i];
//         }
//         if(c ==k) return true;
//     }
//     return false;

// }

// Q2 -> EKO - SPOJ

// bool isPossible(vector<long long int>& trees, long long int m, long long int mid){
//     int woodCollected = 0;
//     for (int i = 0; i < trees.size(); i++)
//     {
//         if (trees[i] > mid)
//         {
//             woodCollected += trees[i] - mid;
//         }

//     }
//     return woodCollected >= m;

// }

// long long int maxHeight(vector<long long int>& trees, long long int m ){
//     long long start = 0, end, ans = -1;
//     end = *max_element(trees.begin(), trees.end());

//     while (start<= end)
//     {
//         long long int mid = start + (end - start)/2;
//         if (isPossible(trees, m, mid))
//         {
//             ans = mid;
//             start = mid +1;
//         }else{
//             end = mid -1;
//         }

//     }
//     return ans;

// }

// Q-3  PARATA SPOJ -> MINIMUM TIME TAKEN TO COOK A GIVEN AMOUNT OF PARATA BY GIVEN NUMBER OF COOKS
bool isPossibleSolution(vector<int>& cooksRanks,int nP,  int mid){
    int curr = 0;
    for (int i = 0; i < cooksRanks.size(); i++)
    {
        int R = cooksRanks[i], j = 1;
        int timeTaken = 0;

        while (true)
        {
            if (timeTaken + j * R <= mid)
            {
                ++curr;
                timeTaken += j*R;
                ++j;
            }
            else{
                break;
            }
            
        }
        if (curr >= nP)
        {
            return true;
        }
        
        
    }
    return false;
    
}
int minTime(vector<int>& cooksRanks, int nP){
    int start = 0;
    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int end = highestRank * (nP * (nP + 1)/2);
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (isPossibleSolution(cooksRanks, nP, mid))
        {
            ans = mid;
            end = mid -1;
        }else{
            start = mid +1;
        }
        
    }
    return ans;
    
}

int main()
{

    // Q1- AGGRESIVE COW PROBLEM
    // int k, n;
    // cout << "Enter the number of cows" << endl;
    // cin >> k;
    // cout << "Enter the size of the stall " << endl;
    // cin >> n;
    // vector<int> stalls(n);
    // cout << "Enter the postion of the stalls" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> stalls[i];
    // }

    // // logic if we gate the solution
    // sort(stalls.begin(), stalls.end());
    // int start = 0;
    // int end = stalls[stalls.size() - 1]  - stalls[0];
    // int ans = -1;

    // while (start <= end)
    // {
    //     int mid = start + (end - start)/2;
    //     if (isPossibleSolution(stalls, k, mid))
    //     {
    //         ans = mid;
    //         start = mid + 1;
    //     }
    //     else{
    //         end = mid -1;
    //     }

    // }
    // cout << "The maximum distance at which cow can be placed are " << ans << endl;

    // Q2 - EKO - SPOJ -> we have to cut minimum height of trees so that our requirement is satisfied and also enviornment is safe
    // long long int n, m;
    // cout << "Enter the number of trees: ";
    // cin >> n;

    // cout << "Enter the length of wood you require: ";
    // cin >> m;

    // vector<long long int> trees;
    // cout << "Enter the heights of the trees: ";
    // for (int i = 0; i < n; i++) {
    //     long long int height;
    //     cin >> height;
    //     trees.push_back(height);
    // }

    // cout << " So you can setup your blade to the height of " <<maxHeight(trees, m) << endl;

    // Q-3  PARATA SPOJ -> MINIMUM TIME TAKEN TO COOK A GIVEN AMOUNT OF PARATA BY GIVEN NUMBER OF COOKS
    int T, nP, nC, R;
    cout << " Enter the number of test cases " << endl;
    cin >> T;
    cout << "Enter the number of parata to be cooked and number of cooks " << endl;
    while (T--)
    {
        cin >> nP >> nC;
        vector<int> cooksRanks;
        while (nC--)
        {
            cin >> R;
            cooksRanks.push_back(R);
        }
        cout << "So the minimum time is " << minTime(cooksRanks, nP) << endl;
    }

    return 0;
}