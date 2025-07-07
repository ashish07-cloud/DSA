#include <iostream>
#include <string>

using namespace std;

string removeDuplicate(string str) {
    string ans = "";

    for (int i = 0; i < str.length(); i++) {
        if (!ans.empty() && ans.back() == str[i]) {
            ans.pop_back();
        } else {
            ans.push_back(str[i]);
        }
    }

    return ans;
}

int main() {
    // Q1 -> REMOVE ALL ADJACENT DUPLICATES IN STRING 
    string str;
    cout << "Enter the string: ";
    cin >> str;

    string result = removeDuplicate(str);
    cout << "Result: " << result << endl;

    return 0;
}
