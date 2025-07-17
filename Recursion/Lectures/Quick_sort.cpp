#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivotIndex = s;
    int pivotElement = arr[s];

    // count how many elements are <= pivot
    int count = 0;
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivotElement) {
            count++;
        }
    }

    // place pivot at the right position
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex) {
        // ya to pivot element ke left or right me sorted honge to simple aage badhte jao 
        while (arr[i] <= pivotElement) {
            i++;
        }
        while (arr[j] > pivotElement) {  // ✅ FIXED: should check arr[j]
            j--;
        }

        // left aur right me sorted nahi h to swap kardo 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }

    return pivotIndex; // ✅ Moved outside loop
}

void quickSort(int arr[], int s, int e) {
    if (s >= e) return;

    
    int p = partition(arr, s, e);

    // left part sorting 
    quickSort(arr, s, p - 1);
    // right part sorting 
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[] = {6, 4, 2, 7, 90, 34, 4, 23,6,3,23,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
