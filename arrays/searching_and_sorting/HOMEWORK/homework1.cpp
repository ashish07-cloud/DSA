#include<iostream>
#include<vector>
using namespace std;

// int missingValue(vector<int>& arr, int n){
//     int start = 0;
//     int end = arr.size() -2;
//     int mid = start + (end-start)/2;

//     while (start <= end)
//     {
//         if (arr[mid] == mid+1)
//         {
//             start = mid+1;
//         }else{
//             end =  mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return mid+1;
// }

// int searchInRotatedSortedArry(vector<int>& arr,  int target){
//     int start = 0;
//     int end = arr.size() - 1 ;

//     while (start <= end)
//     {
//         int mid = start + (end-start)/2;

//         if (arr[mid] == target)
//         {
//             return mid;
//         }
        

//         if (arr[start] <= arr[mid])
//         {
//             // left half is the sorted array 
//             if (target >= arr[start] && target < arr[mid])
//             {
//                 // the target is in left part 
//                 end = mid-1;
//             }else{
//                 start = mid+1;
//             }
            
//         }else{
//             // right half is the sorted array 
//             if(target > arr[mid] && target <= arr[end]){
//                 // the target is in right part 
//                 start = mid +1;
//             }else{
//                 end = mid -1 ;
//             }
//         }
        
//     }
//     return -1;
    
// }

// int findSqrt(int x){
//     // if(x == 0 || x == 1){
//     //     return 1;
//     // }
//     int ans ;
//     int s = 0; int end = x;
//     int target = x;
//     int mid = s + (end -s)/2;

//     while (s <= end)
//     {
//         if (mid*mid == target)
//         {
//             return mid;
//         }

//         if (mid*mid > target)
//         {
//             end = mid -1;
//         }else{
//             ans = mid;
//             s = mid +1;
//         }
//         mid = s + (end-s)/2;
        
//     }
//     return ans;
    
// }

// FINDING PIVOT ELEMENT IN A ROTATED AND SORTED ARRAY 
// THAT MEAN IN A SORTED ARRAY FROM WHICH PLACE HAS IT BEEN ROTATED 

// int sorted(vector<int>& arr){
//     int s = 0;
//     int e = arr.size() -1;
    
//     while(s <= e){
//         int mid = s + (e-s)/2;

//         if (s == e)
//         {
//             return s;
//         }
        
//         if (mid <= e && arr[mid] > arr[mid+1])
//         {
//             return mid;
//         }
//         if ( mid-1 >= s && arr[mid] < arr[mid-1])
//         {
//             return mid;
//         }
        
//         if ( arr[s] > arr[mid])
//         {
//             e = mid-1;
//         }else{
//             s = mid +1;
//         }
//     }
//     return -1;
// }


int main(){
    // int n, target, x;

    // cout << "Enter the size of the array" << endl;
    // cin >> n;
    // vector<int> arr(n);
    // cout << "Enter the element of the array in sorted manner" << endl;
    // // for finding the missing element in the sorted array we will take inout as (i<n-1)
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    

// Q1 - FIND A MISSING ELEMENT IN A SORTED ARRAY USING BINARY SEARCH 
    // int missing = missingValue(arr, n);
    // cout << "the missing value is " <<missing<<endl;


// cout << "Enter the target " << endl;
// cin >> target;

// Q3 - SEARCH IN A ROTATED AND SORTED ARRAY 
// int index = searchInRotatedSortedArry(arr, target);
// cout << "answer is " <<  index << endl;



// Q-4 - SQUARE ROOT USING BINARY SEARCH 
    // cout << "Enter the number to find the square root " << endl;
    // cin >> x;

    // int ans = findSqrt(x);
    // cout << "Ans is " << ans << endl;

    // int precision;
    // cout << "Enter the number of floating digits in presecion  " << endl;
    // cin >> precision;

    // double step = 0.1;
    // double finalAns = ans;
    // for (int i = 0; i < precision; i++)
    // {
    //     for (double j = finalAns; j*j <= n; j = j+step)
    //     {
    //         finalAns = j;
    //     }
    //     step = step/10;
    // }
    // cout << "final answer" << finalAns << endl;


    // FINDING PIVOT IN A ROTATED AND SORTED ARRAY 
    // vector<int> arr(n);
    // int ans = sorted(arr);

    // if (ans == -1)
    // {
    //     cout << "kuch gadbad h re baba" << endl;
    // }else{
    //     cout << "The index is " << ans << endl;
    //     cout << "The value is " << arr[ans] << endl;
    // }


    
    
    






    return 0;
}