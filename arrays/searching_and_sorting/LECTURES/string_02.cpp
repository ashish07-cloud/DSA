#include <iostream>
#include <string>

using namespace std;

// string removeDuplicate(string str) {
//     string ans = "";

//     for (int i = 0; i < str.length(); i++) {
//         if (!ans.empty() && ans.back() == str[i]) {
//             ans.pop_back();
//         } else {
//             ans.push_back(str[i]);
//         }
//     }

//     return ans;
// }

// string removeDuplicateSubstring(string str, string part){
//     int pos = str.find(part);
//     while (pos != string::npos)
//     {
//         str.erase(pos, part.length());
//         pos = str.find(part);

//     }
//     return str;
    
// }

bool checkPalindrome(string str, int i, int j){
    while ( i <= j)
    {
        if ( str[i] != str[j])
        {
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
    
}

bool isPalindrome(string str){
    int i = 0;
    int j = str.length() -1;

    while ( i <= j)
    {
        if ( str[i] != str[j])
        {
            // removes either i or either j 
            return checkPalindrome(str, i+1, j) || checkPalindrome(str, i, j-1);
        }else{
            i++;
            j--;
        }
        
    }
    return true;
    
}

int main() {
    // Q1 - LEET-CODE - 1407 -> REMOVE ALL ADJACENT DUPLICATES IN STRING 
    // string str;
    // cout << "Enter the string: ";
    // cin >> str;

    // string result = removeDuplicate(str);
    // cout << "Result: " << result << endl;


    // Q2 - LEET-CODE- 1910 -> REMOVE ALL OCCURENCE SUBSTRING
    // string str;
    // cout << " Enter the main string " << endl;
    // cin >> str;
    // string part;
    // cout << " Enter the substring which has to be removed " << endl;
    // cin >> part;

    // string result = removeDuplicateSubstring(str, part);
    // cout << "Result: " << result << endl;


    // Q.3 - LEET - CODE - 680 -> VALID PALINDROME || -> returns true if the string can be made palindrome by removing a letter 
    string str;
    cout << " Enter the string " << endl;
    cin >> str;

    bool result = isPalindrome(str);
    cout << "Result: " << result << endl;



    return 0;
}
