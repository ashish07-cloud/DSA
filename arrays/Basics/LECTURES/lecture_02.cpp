#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr) {
    int ans = 0;

    for (int i = 0; i < arr.size() ; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
    
}


int main(){

    // creating vector 
    // vector<int> arr;

    // // int ans  = (sizeof(arr)/sizeof(int));
    // // cout << ans << endl;

    // // cout << arr.size() << endl; // it tells how much elements are there in the array
    // // cout << arr.capacity() << endl; // it tells us how much element the array can hold

    // //  insert 
    // arr.push_back(5);
    // arr.push_back(6);

    // // print
    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;

    // vector<int> brr(n, -101);
    // cout << "Size of b" << brr.size() << endl;
    // cout << "Capacity of b" << brr.capacity() << endl;

    // for(int i = 0; i < brr.size(); i++){
    //     cout << brr[i] << " ";
    // }
    // cout << endl;

    // pop_back() -> removes the last element inserted in the array 
    // arr.empty() -> returns "0" if there is no element that is false 
    //             -> returns "1" if there are elements in the array that is true 



    // practice questions 

    //Q1-  finding a unique element in the array 

    // int n;
    // cout << " Enter the size of the array " << endl;
    // cin >> n;

    // vector<int> arr(n);
    // cout << " Enter the elements of the array " << endl;
    // for(int i = 0; i < arr.size(); i++){
    //     cin >> arr[i];
    // }

    // int uniqueElement = findUnique(arr);

    // cout << " Unique element" << uniqueElement << endl;


    //Q2-  Union of two arrays 

    // int arr[] = {1, 2, 5, 6, 7};
    // int sizea = 5;
    // int brr[] = {3, 4, 8, 9};
    // int sizeb = 4;

    // vector<int> ans;
    // for (int i = 0; i < sizea; i++)
    // {
    //     ans.push_back(arr[i]);
    // }

    // for (int i = 0; i < sizeb; i++)
    // {
    //     ans.push_back(brr[i]);
    // }

    // cout << "Printing the union of array " << endl;
    // for (int i = 0; i < ans.size() ; i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // Q3 - intersection of two arrays 

    // vector<int> arr{1, 2, 3, 3, 4, 6, 8};
    // vector<int> brr{3, 3, 4, 10};

    // vector<int> ans ;

    // // running outer loop on arr 
    // for(int i = 0; i < arr.size(); i++){
    //     int element = arr[i];

    //     //  for every element of arr , running loop on brr to match is they are same or not 
    //     for(int j = 0; j < brr.size(); j++){
    //         if (element == brr[j])
    //         {
    //             // mark the element which has been checked 
    //             brr[j] = -1;
    //             // then push the element in the ans array 
    //             ans.push_back(element);
    //         }
            
    //     }
    // }

    // // print ans 
    // // for (int i = 0; i < ans.size() ; i++)
    // // {
    // //     cout << ans[i];
    // // }
    
    // for (auto value: ans)
    // {
    //     cout << value << " ";
    // }
    

    // Q4 - Find intersection of two arrays in which duplicates are there but they are not repeated in the final array 

    // Q5 -  pair sum problem 

    // int arr[] = {10, 20, 30 ,40, 60, 70};
    // int size = 6;
    // int target = 70;

    // // print all pairs 
    // // outer loop will traverse for each element 
    // for (int i = 0; i < size ; i++)
    // {
    //     int element = arr[i];
    //     //  for every element , will traverse aage wala element 
    //     for (int j = i+1 ; j < size ; j++)
    //     {
    //         if (element + arr[j] == target)
    //         {
    //             cout << " The number are (" << element << "," << arr[j] << ")" << endl;
    //         }
            
    //     }
        
    // }

    // Q6 - Triplet problem 
    // in a given array find the triplet whose sum is equals to target 
    
    // int arr[] = {10, 20, 30, 40};
    // int size = 4;
    // int target = 80;

    // for (int i = 0; i < size; i++)
    // {
    //     int element  = arr[i];
    //     for (int j = i+1; j < size; j++)
    //     {
    //         int element_2 = arr[j];
    //         for (int k = j+1; k < size; k++)
    //         {
    //             if (element + element_2 + arr[k] == target)
    //             {
    //                 cout << " The triplets are (" << element << "," << element_2 << "," << arr[k] << ")" << endl;
    //             }
                
    //         }
            
    //     }
        

    // }
    //  this i have done for static array 
    // do this same question by taking input from the user 


    // Q7 - Sort 0's and 1's 

    // int n;
    // cout << " Enter the size of the array " <<endl;
    // cin >> n;
    // vector<int> arr(n);
    // cout << " Enter the elements in the array " << endl;
    // for(int i = 0; i < arr.size(); i++){
    //     cin>>arr[i];
    // }
    
    
    
    // int start = 0;
    // int end = arr.size() - 1;
    // int i = 0;

    // while ( i <= end)
    // {
    //     if (arr[i] == 0)
    //     {
    //         swap(arr[start] , arr[i]);
    //         i++;
    //         start++;
    //     }
    //     else
    //     {
    //         swap(arr[i], arr[end]);
    //         end--;
            
    //     }
        
        
    // }
    

    // for ( int k = 0; k < arr.size(); k++)
    // {
    //     cout << arr[k] << ",";
    // }
    

    // Q8 - LEFT ROTATE AN ARRAY BY  1 ELEMENT - each element move to its left index by one and the first element will move to the end of the array 


    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;

    // vector<int> arr(n);
    // cout << "Enter the elements in the array ";
    // for (int i = 0; i < arr.size(); i++) {
    //     cin >> arr[i];
    // }


    // int start = 0;
    // int end = arr.size() - 1;
    // for (int k = start+1 ; k <= end ; k++)
    // {
    //     swap(arr[k], arr[start]);
    //     start++;
    // }

    // another method without iteration 
    // int temp = arr[0];
    // for (int i = 1; i < arr.size() ; i++)
    // {
    //     arr[i - 1] = arr[i];
    // }
    // arr[arr.size() - 1 ] = temp;
    
    
    
    // cout << " Printing the array " << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    



    // Q9 - MAJORITY ELEMENT IN AN ARRAY - return the element of the array which is repeated more tha n/2 times , the element which is most repeated in an array 
    
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in the array ";
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    

    cout << " Printing the array " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    


    // Q10 - BUY AND SELL STOCK 
    
    
    

    
    
    
    
    
    return 0;

}