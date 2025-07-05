//  2d array 
#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

// void printingRowWiseSum(int arr[][3], int rows, int cols){
//     for (int i = 0; i < rows; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < cols ; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//         cout << sum << endl;
        
//     }
    
// }

// bool linearSearch(int arr[][3], int rows, int cols, int x){
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (arr[i][j] == x)
//             {
//                 return true;
//             }
            
//         }
        
//     }
//     return false;
// }

// int findMax(int arr[][3], int rows, int cols){
//     int maxi = INT_MIN;
//     for (int i = 0; i < rows; i++)
//     {
        
//         for (int j = 0; j < cols ; j++)
//         {
//             if (arr[i][j] > maxi)
//             {
//                 maxi = arr[i][j];
//             }
            
//         }
        
//     }
//     return maxi;
// }

// int findMin(int arr[][3], int rows, int cols){
//     int mini = INT_MAX;
//     for (int i = 0; i < rows; i++)
//     {
        
//         for (int j = 0; j < cols ; j++)
//         {
//             if (arr[i][j] < mini)
//             {
//                 mini = arr[i][j];
//             }
            
//         }
        
//     }
//     return mini;
// }

// void transpose(int arr[][3], int rows, int cols) {
//     int transposed[3][3]; // assuming max 3x3

//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             transposed[j][i] = arr[i][j];
//         }
//     }

//     cout << "The array after transpose:" << endl;
//     for (int i = 0; i < cols; ++i) {
//         for (int j = 0; j < rows; ++j) {
//             cout << transposed[i][j] << " ";
//         }
//         cout << endl;
//     }
// }






int main (){

    // declaration - int arr[3][4]

    // int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // cout << brr[2][2];
    // printing row wise 
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3 ; j++)
    //     {
    //         cout <<brr[i][j] << " ";
    //     }
    //     cout << endl;
        
    // }

    // taking input 
    // int arr[4][3];
    // int rows = 4;
    // int cols = 3;

    // cout<< " Enter the elements of the array " << endl;
    // for (int i = 0; i < rows; i++)
    // {
        
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
        
    // }

    // cout << "Printing the output " << endl;
    // for (int i = 0; i < rows; i++)
    // {
        
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout <<  arr[i][j]<< " ";
    //     }
    //     cout << endl;
        
    // }

    // Q1 - print row sum 
    // int arr[3][3];
    // int rows = 3;
    // int cols = 3;

    // cout << " Taking input " << endl;
    // for (int i = 0; i < rows ; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
        
    // }

    // cout << " Printing original array  " << endl;
    // for (int i = 0; i < rows ; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout <<  arr[i][j]<< " ";
    //     }
    //     cout << endl;
    // }

    // cout << " Printing the row wise sum " << endl;
    // printingRowWiseSum(arr, rows, cols);

    // int x;
    // cout << " Enter the element to be searched " << endl;
    // cin >> x;
    // if(linearSearch(arr, rows, cols, x)){
    //     cout << "Element found";
    // }
    // else{
    //     cout << " Element not found";
    // }

    // cout << " The largest number in the array is " << findMax(arr, rows, cols)<< endl;
    // cout << " The smallest number in the array is " << findMin(arr, rows, cols)<< endl;

    // cout << " The array after transpose " <<endl;
    // transpose(arr, rows, cols);



    // VECTOR IN VECTOR 

    // vector<vector<int>> arr;

    // vector<int> a{1, 2, 3};
    // vector<int> b{2, 4, 6};
    // vector<int> c{1, 3, 7};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    int row = 3;
    int col = 5;

    vector<vector<int> > arr(row, vector<int>(col, 101));

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    


    
    



    
    
    return 0;


}