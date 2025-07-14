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

int main(){

    // check wheather a array is sorted or not 
    vector<int> arr{10, 20, 30, 40, 50, 50, 50, 20};
    int n = arr.size();
    int i = 0;

    bool isSorted = checkSorted(arr, n, i);

    if (isSorted)
    {
        cout << " Array is sorted " << endl;
    }else{
        cout << " Array is not sorted " << endl;
    }
    
    


    return 0;
}