

// BINARY SEARCH 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 


int n, target;
// int binarySearch(int arr[], int size, int target){
//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end-start) / 2;

//     while(start <= end ){
//         int element = arr[mid];

//         if (element == target)
//         {
//             return mid;
//         }else if( target < element){
//             // searching in the left side 
//             end = mid -1 ;
//         }else{
//             // searching in the right side 
//             start = mid+1;
//         }
//         mid = start + (end-start) / 2;
//     }
    
//     return -1;

// }

// Q-1 RETURING THE INDEX OF THE FIRST OCCURENCE OF THE TARGET
int firstOccurance(vector<int>& arr, int n, int target){
    int start = 0;
    int end = arr.size() - 1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        int element  = arr[mid];
        if (element == target)
        {
            // store the answer
            ans = mid;
            // and search in the left side 
            end = mid -1;
        }else if(target < element){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
        
    }
    return ans;

}

// Q2 - RETURNING THE INDEX OF THE LAST OCCURENCE OF THE TARGET 
int lastOccurence(vector<int>& arr, int n, int target){
    int start = 0;
    int end = arr.size() -1;

    int mid = start + (end-start)/2;

    int ans = -1;
    while(start <= end){
        int element = arr[mid];
        if( element == target){
            // store the ans 
            ans = mid;
            start = mid+1;
        }else if( target < element){
            // left serch 
            end = mid -1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}


// Q-3 RETURNING THE NO OF OCCURENCE OF A PARTICULAR TARGET 
// in this we use the last occurence and first occurence values 
// no of occurence = lastOccurence - firstOccurence + 1;

int main(){
    // int arr[] = {2, 4, 6, 8, 10, 12, 16};
    // int size = 7;
    // int target = 17;

    // int indexOftarget = binarySearch(arr, size, target);

    // if(indexOftarget == -1){
    //     cout << "Target not found" << endl;
    // }else{
    //     cout << "Target found at index " << indexOftarget << endl;
    // }


    // vector<int> v{1, 2, 3, 4, 5, 6}; 
    // int arr[] = {1, 2, 3,4 ,5 ,6, 7};
    // int size = 7;

    // if (binary_search(arr, arr+size, 4))
    // {
    //     cout << "found" << endl;
    // }
    // else{
    //     cout << "not found" << endl;
    // }
    // 
    // STANDARD TEMPLATE LIBRARY OR FUNCTION FOR BINARY SEARCH 
    // if(binary_search(v.begin(), v.end(), 4)){
    //     cout << "found" << endl;
    // }
    // else{
    //     cout << "not found" << endl;
    // }


    // QUESTIONS 
    // Q-1 - RETURNING THE INDEX OF THE FIRST OCCURANCE OF THE TARGET 

    // int n, target;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << " Enter the element which you want to search for  occurence " << endl;
    cin >> target;

    int indexOfFirstOccurance = firstOccurance(arr, n, target);
    
    cout << "First occurence is at  " << indexOfFirstOccurance << endl;


    // Q-2 RETURNING INDEX OF THE LAST INDEX OF THE TARGET ELEMENT

    int indexOfLastOccurence = lastOccurence(arr, n, target);
    cout << "Last occurence at" << indexOfLastOccurence << endl;

    // there are build templates to find the first and the last occurence of the elements 
    // read it once the standart template library for first occurence and last occurence 
    
    // auto ans2 = lower_bound(arr.begin(), arr.end(), target);
    // cout << "ans is " << ans2 - arr.begin() << endl;


    // Q-3 COUTING THE NUMBER OF OCCURENCE OF A PARTICULAR TARGET IN SORTED ARRAY
    
    // cout << " The number of occurences are " << (indexOfLastOccurence - indexOfFirstOccurance)+1 ;


    // Q-4 - FIND MISSING ELEMENT IN AN ARRAY WITH BINARY SEARCH  -> HOMEWORK 

    // Q-5 - FIND PEAK ELEMENT IN A MOUNTAIN ARRAY -> HOMEWORK 



    

    return 0;
}