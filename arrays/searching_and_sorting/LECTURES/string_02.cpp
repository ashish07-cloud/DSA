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

string removeDuplicateSubstring(string str, string part){
    int pos = str.find(part);
    while (pos != string::npos)
    {
        str.erase(pos, part.length());
        pos = str.find(part);

    }
    return str;
    
}

int main() {
    // Q1 - LEET-CODE - 1407 -> REMOVE ALL ADJACENT DUPLICATES IN STRING 
    // string str;
    // cout << "Enter the string: ";
    // cin >> str;

    // string result = removeDuplicate(str);
    // cout << "Result: " << result << endl;


    // Q2 - LEET-CODE- 1910 -> REMOVE ALL OCCURENCE SUBSTRING
    string str;
    cout << " Enter the main string " << endl;
    cin >> str;
    string part;
    cout << " Enter the substring which has to be removed " << endl;
    cin >> part;

    string result = removeDuplicateSubstring(str, part);
    cout << "Result: " << result << endl;




    return 0;
}
