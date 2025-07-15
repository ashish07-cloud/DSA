#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void reverseString(string &str, int start, int end){
    // base condition 
    if(start >= end) return;

    // handle the one case 
    swap(str[start], str[end]);
    // ans.push_back


    // recursive call 
    reverseString(str, start+1, end-1);
}

int main(){

    // reverse a string using recursion 
    string str;
    cout << " Enter the string " << endl;
    cin >> str;

    int start = 0;
    int end = str.size()-1;

    reverseString(str, start, end);

    cout << " The reversed string is " << str << endl;
    

    return 0;
}