#include<iostream>
#include<vector>
using namespace std;



// find pairs with difference k in an array 
// find k closest element to a given value in an array 
// exponential scratch 
// unbounded binary search 


// advance binary search 
// book allocation 
// pointer partition 
// aggrestion count
// paratha spoj 
// eko spoj 
int binarySearch(int arr[], int start, int end, int x){
    while (start <= end)
    {
        int mid = start + (end-start)/2;
        if (arr[mid] == x)
        {
            return mid;
        }else if (x > arr[mid])
        {
            start = mid+1;
        }else{
            end  = mid-1;
        }
    }
    return -1;
    
}

int expSearch(int arr[], int n, int x){
    if (arr[x] == 0) return 0;
    int i = 1;
    while ( i < n && arr[i] <= x)
    {
        i = i*2;
    }
    return binarySearch(arr, i/2, min(i, n-1), x);
    

    
    
}


int main(){
    int arr[] = {3, 4, 5, 6, 11, 13, 14 ,15, 56, 70};
    int n = sizeof(arr) / sizeof(int) ;
    int x = 13;

    int ans = expSearch(arr, n , x);
    cout << "The index is " << ans << endl;


}



// class Solution {
//   public:
  
  
//     bool isPosssibleSolution(vector<int>& arr, int arr.size(), int k, int sol){
//         int pageSum = 0;
//         int c = 1;
//         for(int i = 0; i < arr.size(); i++){
//             if(arr[i] > sol){
//                 return false;
//             }
//             if(pageSum + arr[i] > sol){
//                 c++;
//                 pageSum =  arr[i];
//                 if( c > k){
//                     return false;
//                 }
//             }
//             else{
//                 pageSum += arr[i];
//             }
//         }
//         return true;
        
//     }
    
//     int findPages(vector<int> &arr, int k) {
//         // code here
//         if(k>arr.size()) return -1;
        
//         int start = 0;
//         int end = accumulate(arr, arr+arr.size(), 0);
//         int ans = -1;
        
//         while(start <= end){
//             int mid = start + (end-start)/2;
//             if(isPossibleSolution(arr, arr.size(), k, mid)){
//                 ans  = mid;
//                 end = mid-1;
//             }else{
//                 start = mid + 1;
//             }
//         }
//         return ans;
//     }
// };