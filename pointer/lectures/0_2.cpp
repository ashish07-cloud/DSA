#include<iostream>
#include<vector>


using namespace std;

void solve(int arr[]){
    cout << "Size inside the solve function " << sizeof(arr) << endl;

    cout << "arr" << arr << endl;
    cout << "&arr" << &arr << endl;

    arr[0] = 50;
}

void update(int *a, int *b){
    *a = 100;
    *b = 200;
}

int main(){
    
    // int arr[4] = {12, 54 ,16, 18};

    // cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << &arr << endl;
    // cout << &arr[0] <<endl;


    // cout << *arr << endl;
    // cout << *(arr+2) << endl;
    // cout << *(arr) + 2 << endl;


    // int i  = 0;
    // cout << arr[i] << endl;
    // cout << i[arr] << endl; 


    // cout << sizeof(arr) << endl;

    // int* p  = arr;
    // cout << sizeof(p) << endl;
    // cout << sizeof(*p) << endl;


    // char ch[10] = "Ashish";
    // char* c = ch;

    // cout << ch << endl;
    // cout << &ch << endl;
    // cout  << ch[0] << endl;

    // cout << c << endl;
    // cout << *c<< endl;
    // cout << *(c+3) << endl;

    // char name[10] = "SherBano";
    // char* cptr = &name[0];

    // cout << name << endl;
    // cout << &name << endl;
    // cout  << *(name+3) << endl;
    // cout << cptr << endl;
    // cout << &cptr << endl;
    // cout << *(cptr+3) << endl;
    // cout << cptr + 2 << endl; 
    // cout << *cptr << endl;
    // cout << cptr+6 << endl;

    
    // char ch = 'k';
    // char* cptr = &ch;
    // it will print garbage value after the k until its found null character
    // cout << cptr << endl;


    // pointers with function 
    // int arr[10] = {1, 2, 3, 4};
    // cout << "Size inside main function " << sizeof(arr) << endl;

    // cout << "arr" << arr << endl;
    // cout << "&arr" << &arr << endl;

    // // printing the array inside main 
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }cout << endl;

    // cout << endl << "Now calling the solve function " << endl;
    
    // solve(arr);

    // cout << "wapas main function me aagye " << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }cout << endl;

    int arr[4] = {10, 20, 30, 40};
    int* p = &arr[1];
    int* q = &arr[2];

    update(p, q);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;






    

    return 0;
}