#include<iostream>
#include <limits.h>
using namespace std;

// void printArray(int arr[], int size ){
//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i] << " ";
//     }
//     cout << endl;
    
// }

// void inc(int arr[], int size){
//     arr[0] = arr[0] + 15;

// }

// bool find( int arr[], int size, int key){
//     //  linear search 

//     for(int i = 0; i<size; i++){
//         if(arr[i] == key)
//         return true;
//     }

//     // we have searched the complete array and if it is not present it means it is absent
//     return false;
// }

int main(){

//  if we are passing array into a function and make any change in it then it is reflected in the original array
    //  
    // int arr[5];


    // cout<< "Taking the input ";
    // for(int i = 0; i < 5; i++){
    //     cin>>arr[i];
    // }

    // cout<< "Printing the output";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]*2;
    // }

    // changing all values to 1 
    // for(int i = 0 ; i < 5; i++){
    //     arr[i]= 1;
    //     cout<<arr[i]<< " ";
    // }

    // arrays and functions 


    // int arr[5] = {1, 3, 5, 7, 8};
    // int size = 5;

    // cout << "Enter the key to find" << endl;
    // int key;
    // cin >> key;

    // if (find(arr, size, key))
    // {
    //     cout<< "Found" << endl;
    // }
    // else{
    //     cout << "Not found" << endl;
    // }
    

    // count the number of zeros and ones in an array 
    // int arr[] = {1, 0, 0 , 1, 1, 0, 1, 0, 1 , 1, 1, 1, 0, 0, 0, 1 };
    // int size = 19;

    // int numZero = 0;
    // int numOne = 0;

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         numZero++;
    //     }
    //     if (arr[i]== 1)
    //     {
    //         numOne++;
    //     }
        
        
    // }
    // cout <<" Number of zeros" << numZero << endl;
    // cout << "Number of ones " << numOne;


    // finding the maximum number in an array 

    // int arr[] = {2, 4, 6, 1, 3, 7, 9, 12, 56, 43, 21};
    // int size = 11;
    // int maxi  = INT_MIN;

    // for (int i = 0; i < size; i++)
    // {
    //     if(arr[i] > maxi){
    //         maxi = arr[i];
    //     }
    // }
    
    // cout << "Maximum number is "<< maxi<< endl;

    // printing extreme points in the array {1, 2, 3, 4, 5, 6} -> {1, 6, 2, 5, 3, 4}

    // int arr[8] = {10, 20, 30 ,  40, 50 ,60 , 70 , 80};
    // int size = 8;

    // int start = 0;
    // int end = size-1;

    // while (true)
    // {
    //     if (start > end)
    //         break;

    //     cout << arr[start] << " ";
    //     cout << arr[end] << " ";
    //     start++;
    //     end--;
    // }


    // reverse an array 
    // int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    // int size = 8;

    // int start = 0;
    // int end = size-1;

    // while(start <= end){
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    // // printing array 
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    

    int n , k;
    int arr[n];
    cout << "Taking the size and the key to search "<<endl;
    cin >> n, k;
    // taking the input in array 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<arr[n];
    



    
    

    

    return 0;
}
