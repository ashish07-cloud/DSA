#include<iostream>

using namespace std;

bool isPalindrome(string &s, int start, int end){
    // base case
    if(start >= end) return true;

    // solving for one case
    if(s[start] != s[end]) return false;

    // recursive call
    return isPalindrome(s, start+1, end-1);
}

int main(){
    string s;
    cout << "Enter the string to check the palindrome" << endl;
    cin >>s;
    cout << "Answer is : " << isPalindrome(s, 0, s.size()-1) << endl;
}