#include <iostream>
#include <limits.h>
#include <math.h>
#include <cmath>
#include <vector>

using namespace std;

int n;
// this is for the static array
// void sortedArray(int arr[], int size){
//     int low = 0, mid = 0;
//     int high = size - 1;

//     while ( mid < high)
//     {
//         if ( arr[mid] == 0)
//         {
//             swap(arr[mid], arr[low]);
//             low++;
//             mid++;
//         }
//         else if ( arr[mid] == 1)
//         {
//             mid++;
//         }
//         else{
//             swap(arr[mid], arr[high]);
//             high--;
//         }

//     }
// }

// in this i am taking array input from the user
// void sortedArray(vector<int>& arr){
//     int low = 0, mid = 0;
//     int high = arr.size() - 1;

//     while ( mid < high)
//     {
//         if ( arr[mid] == 0)
//         {
//             swap(arr[mid], arr[low]);
//             low++;
//             mid++;
//         }
//         else if ( arr[mid] == 1)
//         {
//             mid++;
//         }
//         else{
//             swap(arr[mid], arr[high]);
//             high--;
//         }

//     }
// }

// void sortNegative(vector<int>& arr){
//       int start = 0, k = 0;
//       int end = arr.size() -1 ;

//       while( k < end) {
//         if (arr[k] > 0)
//         {
//             swap(arr[k], arr[end]);
//             end--;
//         }
//         else if(arr[k] < 0){
//             swap(arr[k], arr[start]);
//             k++;
//             start++;
//         }
//         else{
//             k++;
//         }

// this method is called DUTCH NATIONAL FLAG ALGORITHM
// void sortNegative(vector<int>& arr){
//     int low = 0;
//     int high = arr.size() -1 ;

//     while( low < high) {
//         if (arr[high] > 0)
//         {

//             high--;
//         }
//         else if(arr[low] < 0){
//             low++;
//         }
//         else{
//             swap(arr[low], arr[high]);
//         }
// }
// }

//       }
// }

// this is the brute force method in which the time order is order of n^2
// int  duplicate(vector<int>& arr){
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i+1; j < arr.size(); j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 return arr[i];
//             }

//         }
//         // return -1;
//     }
//     return -1;
// }

// this method is called tortoise and hare method to find a duplicate in the array in which we you something concept of linkedlist to detect a cycle
//  and then find the duplicates
// int duplicate(vector<int>& arr){
//     int i = arr[0];
//     int j = arr[0];

//     do
//     {
//         i = arr[i];
//         j = arr[arr[j]];
//     } while ( i != j);

//     i = arr[0];
//     while ( i != j)
//     {
//         i = arr[i];
//         j = arr[j];
//     }
//     return i;
// }

// int missingElement(vector<int>& arr) {
//     int n = arr.size();
//     int expected_sum = (n + 1) * (n + 2) / 2;
//     int actual_sum = 0;

//     for (int i = 0; i < arr.size(); i++) {
//         actual_sum += arr[i] ;
//     }

//     return expected_sum - actual_sum;
// }

// int commonElement_in_3_arrays(int arr[], int brr[], int crr[]){
//     for (int i = 0; i <= 5; i++)
//     {
//         int element1 = arr[i];
//         for (int j = 0; j <= 5; j++)
//         {
//             int element2 = brr[j];
//             for (int k = 0; k <= 5; k++)
//             {
//                 int element3 = crr[k];
//                 if (element1 == element2 && element2 == element3)
//                 {
//                     return element1;
//                 }
//             }
//         }
//     }
// }

// void missing_with_duplicates(vector<int>& arr) {
//     int n = arr.size();

//     for (int i = 0; i < n; i++) {
//         int index = abs(arr[i]) - 1;

//         if (index < n && arr[index] > 0) {
//             arr[index] *= -1;
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > 0) {
//             cout << (i + 1) << " ";
//         }
//     }

//     cout << endl;
// }

// sorting and swapping
// in this method we will swap the value of the array with their index
// that is if on the index 0 we have 3 , then we will swap the value of 3 with the value of 0

// void swap_sort_method(vector<int>& arr){
//     int i = 0;
//     while ( i <n)
//     {
//         int index = arr[i] - 1;
//         if (arr[i] != arr[index])
//         {
//             swap(arr[i], arr[index]);
//         }
//         else{
//             i++;
//         }
//     }
//     // for (int i = 0; i < arr.size(); i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] != i+1)
//         {
//             cout << i+1 << " ";
//         }

//     }

// }

// void wavePrint(int arr[][3] ){
//     int m = 3;
//     int n = 3;
//     for(int startCol = 0; startCol < n; startCol++){
//         // if even no of col  then print ->  Top to Bottom
//         if ((startCol & 1) == 0){
//             for(int i = 0; i < m; i++){
//                 cout << arr[i][startCol] << " ";
//             }
//         }
//         else{
//             // if odd no of col then print -> Bottom to Top
//             for(int i = m - 1; i >= 0; i--){
//                 cout << arr[i][startCol] << " ";
//             }
//         }
//     }
//     cout << endl;
// }

// void wavePrintUsingRow(int arr[][3]){
//     int row = 3;
//     int col = 3;

//     for (int startRow = 0; startRow < row; startRow++)
//     {
//         // if the row are even then  print -> left to right
//         if ((startRow & 1) == 0)
//         {
//             for (int i = 0; i < col; i++)
//             {
//                 cout << arr[startRow][i] << " ";
//             }

//         }else{
//             for (int i = row - 1; i >= 0 ; i--)
//             {
//                 cout << arr[startRow][i] << " ";
//             }

//         }

//     }
//     cout << endl;
// }

void spiralPrint(int arr[][3]) {
    int row = 3, col = 3;
    int startRow = 0, startCol = 0;
    int endRow = row - 1, endCol = col - 1;

    while (startRow <= endRow && startCol <= endCol) {
        // Left to Right
        for (int i = startCol; i <= endCol; i++) {
            cout << arr[startRow][i] << " ";
        }
        startRow++;

        // Top to Bottom
        for (int i = startRow; i <= endRow; i++) {
            cout << arr[i][endCol] << " ";
        }
        endCol--;

        // Right to Left
        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                cout << arr[endRow][i] << " ";
            }
            endRow--;
        }

        // Bottom to Top
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                cout << arr[i][startCol] << " ";
            }
            startCol++;
        }
    }
}


int main()
{
    // rotate by 90deg
    // spiral  print
    // sort 0's, 1's and 2's
    // move all negative to one side
    // find duplicate element
    // find missing element
    // find first repeating element
    // find common element in 3 arrays
    // factorial of large no
    // wave print
    // missing element with duplicates

    // q1 - In a given array sort the arrays on 0's , 1's and 2's that is print all zeros together and then after all 1's and then after all 2's

    // int arr[] = {2, 0, 2, 1, 1, 0};
    // int size = 6;

    // cout << "Original Array " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << " The sorted array " << endl;
    // sortedArray(arr, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << "Enter the size of the array " << endl;
    // cin >> n;
    // vector<int> arr(n);

    // cout << "Give the input for the array " << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "The original array " << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i]<< " ";
    // }
    // cout << endl;

    // sortedArray(arr);
    // cout << "The Sorted array " << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i]<< " ";
    // }

    // Q2 -  MOVE ALL THE NEGATIVE NUMBERS IN THE ARRAY IN THE ONE SIDE
    // sortNegative(arr);
    // cout << "The Sorted array " << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i]<< " ";
    // }

    // Q3 - FIND DUPLICATE ELEMENT
    // cout << duplicate(arr);

    // Q4 - IN A GIVEN ARRAY OF SIZE N THER ARE N+1 ELEMENTS IN IT AND YOU HAVE TO FIND WHICH ELEMENT IS MISSING FROM THE RANGE
    // cout << missingElement(arr);

    // Q5 - Find 1st common elements - it as as same as i have done the brut force method in finding the duplicate element

    // Q6 - FIND COMMON ELEMENT IN 3 ARRAYS
    // int arr[5] = {1, 2, 3, 4, 5};
    // int brr[5]  = {14, 5, 3, 7, 8};
    // int crr[5] = {9, 10, 3, 15, 16};
    // cout << " The common element in all three arrays is = " <<  commonElement_in_3_arrays(arr, brr, crr);

    // Q7 - FIND THE MISSING ELEMENT IN AN ARRAY IN WHICH DUPLICATES ARE ALSO THERE
    // missing_with_duplicates(arr);

    // doing with the swapping and sorting method
    // swap_sort_method(arr);

    // Q8 - WAVE PRINT A MATRIX
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // wavePrint(arr);

    // Q9 - WAVE PRINT A MATRIX USING ROW WISE
    // int arr[3][3] =  {
    //                     {1, 2, 3},
    //                     {4, 5, 6},
    //                     {7, 8, 9}
    //                 };
    // wavePrintUsingRow(arr);

    // Q-10 SPIRAL PRINT - In this a 2d matrix of nxm is given and you hava to print it in a spiral form
    // that is start from the left most right element then print the entire row then print the last column the print the last row and then
    // from the bottom most left element go up and print

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    spiralPrint(arr);
}