#include<iostream>
#include<math.h>
#include<vector>
using namespace std; 


// Q- SEARCHING AND ELEMENT IN A 2D MATRIX
// bool binarySearch(int arr[][4], int row, int col, int target){
//     int start = 0;
//     int total = row*col;
//     int end = total - 1;
//     int mid = start + (end - start)/2;

//     while (start <= end)
//     {
//         int mid = start + (end-start)/2;
//         int rowIndex= mid/col;
//         int colIndex = mid%col;
//         if (arr[rowIndex][colIndex] == target)
//         {
//             return true;
//         }

//         if (arr[rowIndex][colIndex] > target)
//         {
//             end = mid -1;
//         }else{
//             start = mid+1;
//         }
//         // mid = start + (end - start)/2;
//     }
//     return false;
    
// }


// Q - SEARCHING AN ELEMENT IN A NEARLY SORTED ARRAY IN LOG TIME

// int indexOfTarget(int arr[], int size, int target){
//     int s = 0;
//     int e = size-1;

//     while (s <= e)
//     {
//         int mid = s + (e-s)/2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }else if (mid > s && arr[mid-1] == target)
//         {
//             return mid-1;
//         }else if(mid < e && arr[mid+1] == target){
//             return mid+1;
//         }


//         if (target < arr[mid])
//         {
//             // left search
//             e = mid-2;
//         }else {
//             // right search 
//             s = mid+2;
//         }
        
//     }
//     return -1;
// }

// Q - DIVISION OF TWO NUMBERS USING BINARY SEARCH 

// int solve(int dividend, int divisor){
//     int start = 0;
//     int end = abs(dividend);
//     int ans = 0;

//     while (start <= dividend)
//     {
//         int mid = start + (end-start)/2;
//         if (abs(mid*divisor == abs(dividend)))
//         {
//             return mid;
//         }

//         if (abs(mid*divisor > abs(dividend)))
//         {
//             end = mid-1;
//         }else{
//             ans = mid;
//             start = mid+1;
//         }
        
//     }
//     return ans;
// }

int oddOccurence(vector<int>& arr){
    int s = 0;
    int e = arr.size() -1;

    while (s <= e)
    {
        int mid = s + (e-s)/2;
        if (s == e)
        {
            return mid;
        }
        // there are two conditions odd and even 
        if (mid %2 == 0)
        {
            if (arr[mid] == arr[mid+1])
            {
                // search in the right side 
                s = mid +2;
            }else{
                // here e = mid because the mid element can be the answer also 
                e = mid;
            }
            
        }else{
            if (arr[mid] == arr[mid-1])
            {
                // search in the right side
                s= mid+1;
            }else{
                e = mid-1;
            }
            
        }
        
    }
    return -1;
    
}



int main(){
    


    // Q - SERCHING AN ELEMENT IN A 2D MATRIX
    // int arr[5][4] = {   {1, 2, 3, 4,}, 
    //                     {5, 6, 7, 8},
    //                     {9, 10, 11, 12},
    //                     {13, 14, 15, 16},
    //                     {17, 18, 19, 20}
    //                 };

    // int row = 5;
    // int col = 4;

    // int target = 14;
    
    // bool ans = binarySearch(arr, row, col, target);

    // if (ans)
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }
    

    // Q- SEARCHING AN ELEMENT IN A NEARLY SORTED ARRAY IN  LOG TIME USING BINARY SEARCH 

    // int arr[7] = {10, 3, 40, 20, 50, 80, 70};
    // int size = 7;
    // int target = 40;

    // int ans = indexOfTarget(arr, size, target);
    // if (ans != -1) {
    //     cout << "Target found at index: " << ans << endl;
    // } else {
    //     cout << "Target not found in the array." << endl;
    // }


    //Q -  DIVISION OF 2 NUMBERS USING BINARY SEARCH 

    // int dividend = 22;
    // int divisor = 7;

    // int ans = solve(dividend, divisor);
    // cout << "the answer is "<< ans << endl;


    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = oddOccurence(arr);
    cout << "The index of odd occurence is " << ans << endl;
    cout << "The element is " << arr[ans] << endl;

    return 0;
}