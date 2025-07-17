#include<iostream>
#include<vector>

using namespace std;

void merge(int *arr, int start, int end){
    
    int mid = (start + end)/2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    // creating dynamically arrays 
    int *left  = new int[len1];
    int *right = new int[len2];

    // copy the values to the new array 
    int k  = start;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid+1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start;

    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        }else{
            arr[mainArrayIndex++] = right[rightIndex++] ;
        }
        
    }

    // copy the remaining values of the left array
    while ( leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    
    // copy the remaining values of the right array 
    while ( rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
    
}

void mergeSort(int *arr, int start, int end){
    // base case 
    if ( start >= end){
        return;
    }
    

    int mid = (start+end)/2;

    // left part sorting 
    mergeSort(arr, start, mid);

    // right part sorting 
    mergeSort(arr, mid+1, end);

    // now to merge the two sorted arrays 
    merge(arr, start, end);

    
}

int main(){
    int arr[] = {23, 4, 6, 46, 7, 3};
    int n =6;


    int start = 0;
    int end = n-1;

    mergeSort(arr, start, end);

    
    cout << "The sorted array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    



    return 0;
}
