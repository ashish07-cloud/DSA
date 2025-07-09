#include <iostream>
#include<vector>
#include<algorithm>
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

// bool checkPalindrome(string str, int i, int j){
//     while ( i <= j)
//     {
//         if ( str[i] != str[j])
//         {
//             return false;
//         }else{
//             i++;
//             j--;
//         }
//     }
//     return true;
    
// }

// bool isPalindrome(string str){
//     int i = 0;
//     int j = str.length() -1;

//     while ( i <= j)
//     {
//         if ( str[i] != str[j])
//         {
//             // removes either i or either j 
//             return checkPalindrome(str, i+1, j) || checkPalindrome(str, i, j-1);
//         }else{
//             i++;
//             j--;
//         }
        
//     }
//     return true;
    
// }

// int minimumTime(vector<string>& timePoints) {
//     vector<int> minutes;

//     // Convert each time to minutes
//     for (int i = 0; i < timePoints.size(); i++) {
//         string curr = timePoints[i];
//         int hrs = stoi(curr.substr(0, 2));
//         int min = stoi(curr.substr(3, 2));
//         int totalMinutes = 60 * hrs + min;
//         minutes.push_back(totalMinutes);
//     }

//     // Sort the time in minutes
//     sort(minutes.begin(), minutes.end());

//     // Find minimum difference between adjacent times
//     int mini = INT_MAX;
//     for (int i = 1; i < minutes.size(); i++) {
//         int diff = minutes[i] - minutes[i - 1];
//         mini = min(mini, diff);
//     }

//     // Check circular difference (last -> first across midnight)
//     int circularDiff = (minutes[0] + 1440) - minutes[minutes.size() - 1];
//     mini = min(mini, circularDiff);

//     return mini;
// }

int expandIndex(string s, int i, int j){
    int count = 0;
    while ( i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
    
}

int countPalindromicSubstring(string s){
    int count  = 0;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        // for the odd string 
        int oddAns = expandIndex(s, i, i);
        count = count + oddAns;

        // for the even string 
        int evenAns = expandIndex(s, i , i+1);
        count = count + evenAns;
    }
    return count;
    
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
    // string str;
    // cout << " Enter the string " << endl;
    // cin >> str;

    // bool result = isPalindrome(str);
    // cout << "Result: " << result << endl;

    // Q.4 - LEET-CODE - 539 -> MINIMUM TIME DIFFERENCE

    // vector<string> timePoints = {"23:59", "05:00", "12:30"};
    // cout << "Minimum time difference: " << minimumTime(timePoints) << " minutes" << endl;

    
    // Q.5 - LEET CODE - 647 -> PALINDROMIC SUBSTRING -> find number of palindromic substring in a string 
    string s;
    cout << "Enter the string " << endl;
    cin >> s;

    int result = countPalindromicSubstring(s);
    cout << " Number of palindromic substring are : " << result << endl;
    
    return 0;
}
