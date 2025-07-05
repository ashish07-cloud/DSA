#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

bool isPossibleSolution(vector<long long int> trees, long long int m, long long int mid){
    long long int woodCollected = 0;
    for (long long int i = 0; i < trees.size(); i++)
    {
        if (trees[i] > mid)
        {
            woodCollected += trees[i] - mid;
        }
    }
    return woodCollected >= m;
    
}

long long int maxSawLaderHeight(vector<long long int> trees, long long int m){
    long long start = 0, end, ans = -1;
    end = *max_element(trees.begin(), trees.end());

    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (isPossibleSolution(trees, m , mid))
        {
            ans = mid;
            start = mid +1;
        }else{
            end = mid -1 ;
        }
    }
    return ans;
    
}

int main(){
    long long int n, m;
    cout << "Enter the number of trees and the number of logs: "<< endl;
    cin >> n >> m;
    vector<long long int> trees;
    while(n--){
        long long int height;
        cin >> height;
        trees.push_back(height);
    }

    cout << "The maximum height of the sawlader is: " << maxSawLaderHeight(trees, m) << endl;
    return 0;
}