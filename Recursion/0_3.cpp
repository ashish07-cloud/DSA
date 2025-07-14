#include<iostream>
#include<limits.h>
#include<vector>


using namespace std;

bool checkSorted(vector<int>&arr, int n, int i){
    if ( i == n-1)
    {
        return true;
    }

    if (arr[i+1] < arr[i])
    {
        return false;
    }

    return checkSorted(arr, n, i+1);
    
    
}

int binarySearch(vector<int>& arr, int start, int end, int target){
    // handle the base conditions 
    if( start > end ) return -1;

    int mid = start + (end-start)/2;

    if( arr[mid] == target){
        return mid;
    }

    return arr[mid] < target ? binarySearch(arr, mid+1, end, target) : binarySearch(arr, start, mid-1, target);
}

int main(){

    // check wheather a array is sorted or not 
    // vector<int> arr{10, 20, 30, 40, 50, 50, 50, 20};
    // int n = arr.size();
    // int i = 0;

    // bool isSorted = checkSorted(arr, n, i);

    // if (isSorted)
    // {
    //     cout << " Array is sorted " << endl;
    // }else{
    //     cout << " Array is not sorted " << endl;
    // }
    

    // applying binary search using recursion 
    vector<int> arr{10, 20, 30, 35, 56, 78};
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int target = 78;

    int ans = binarySearch(arr, start, end, target);

    cout << " Answer is at index " << ans << endl;

    


    return 0;
}