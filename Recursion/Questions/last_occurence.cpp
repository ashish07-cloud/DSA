#include<iostream>
#include<vector>

using namespace std;

void lastOccurenceLTR(string str, char ch, int i, int &ans){ // here ans is the local variable created in this function so pass by reference 
    // base condition
    if( i > str.length()) {
        return;
    }

    if(str[i] == ch){
        ans =  i;
    }

    lastOccurenceLTR(str, ch, i+1, ans);

}

void lastOccurenceRTL(string str, char ch, int i, int &ans){
    // base condition 
    if(i < 0) return;

    // handling the one case 
    if (str[i] == ch)
    {
        ans = i;
        return;
    }

    lastOccurenceRTL(str, ch, i-1, ans);
    
}

int main(){

    // last occurence of a character in a string 
    string str;
    cout << "Enter the string " << endl;
    cin >> str;
    char ch;
    cout << "Enter the character to be searched" << endl;
    cin >> ch;
    // int i = 0;
    int ans = -1;
    // lastOccurenceLTR(str, ch, i, ans);

    // cout << "Answer is " << ans << endl;

    lastOccurenceRTL(str, ch, str.size() - 1, ans);
    cout << "Answer is " << ans << endl;


    return 0; 

}